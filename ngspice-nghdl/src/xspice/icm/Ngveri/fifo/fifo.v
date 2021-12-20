//==========TOP==================================

module fifo(clk,reset,rd_en,wr_en,datain,dataout,fifo_full,fifo_empty,fifo_threshold,fifo_overflow,fifo_underflow);
  input clk,reset,rd_en,wr_en;
  input[3:0]datain;
  output reg [3:0]dataout;
  output reg fifo_full,fifo_empty,fifo_threshold,fifo_overflow,fifo_underflow;
  
    wire [3:0]rptr,wptr;
	wire readen,writeen; 
  
  write_pointer wr(.clk(clk),.reset(reset),.wr_en(wr_en),.wptr(wptr),.fifo_wr(writeen),.fifo_full(fifo_full));
  read_pointer rp(.clk(clk),.reset(reset),.rd_en(rd_en),.rptr(rptr),.fifo_rd(readen),.fifo_empty(fifo_empty));
  memory m(.clk(clk),.we(wr_en),.wptr(wptr),.rptr(rptr),.datain(datain),.dataout(dataout));
         status_fifo sf(.clk(clk),.reset(reset),.wr_en(wr_en),.rd_en(rd_en),.rptr(rptr),.wptr(wptr),.fifo_full(fifo_full),.fifo_empty(fifo_empty),.fifo_overflow(fifo_overflow),.fifo_threshold(fifo_threshold),.fifo_underflow(fifo_underflow));
         endmodule


//=================================MEMORY =====================================
module memory(clk,we,wptr,rptr,dataout,datain,);
  input clk,we;
  input[3:0]wptr,rptr;//memory size will be 2**4
  input[3:0]datain;
  output [3:0]dataout;
  
  reg [3:0]mem[15:0];//top to down approach
  
  always @(posedge clk) begin
    if(we)
      mem[wptr]<=datain;//writing into the mem location specified by wptr
  end
 
  assign dataout=mem[rptr]; //dataout is from the mem specified by rptr
endmodule

//============READ POINTER==========================
module read_pointer(clk, reset,rptr, fifo_rd,rd_en,fifo_empty);
  input clk,reset,rd_en,fifo_empty;//re_en is read enable signal
  
  output [3:0]rptr;
  output fifo_rd;
  reg [3:0]rptr;//reg type output
  
  assign fifo_rd= ((~fifo_empty) & rd_en);//setting the fifo read signal with enable and empty
  always@(posedge clk or negedge reset) begin
    if (reset) 	rptr<=0; //setting readpointer to 0
    else if(rd_en)	rptr<=rptr+1;//incrementing read pointer by 1 if en=1
    else			rptr<=rptr;//hole the same pointer address
  end
endmodule

//================WRITE POINTER======================
module write_pointer(clk,reset,wr_en,wptr,fifo_wr,fifo_full);
  input clk,reset,wr_en,fifo_full;
  output fifo_wr;
  output[3:0]wptr;
  reg [3:0]wptr;

  assign fifo_wr= ((!fifo_full) & wr_en);
  
  always @(posedge clk) begin
    if (reset) 		wptr<=0;
    else if(wr_en)		wptr<=wptr+1;
    else				wptr<=wptr;
  end
endmodule

//===============STATUS FIFO===========================

module status_fifo(clk,reset,wr_en,rd_en,rptr,wptr,fifo_full,fifo_empty,fifo_overflow,fifo_threshold,fifo_underflow);
  input clk,reset,rd_en,wr_en;
  input[3:0]rptr,wptr;
  output fifo_full,fifo_empty,fifo_threshold,fifo_overflow,fifo_underflow;
  reg fifo_full,fifo_empty,fifo_threshold,fifo_overflow,fifo_underflow;

  //wire declaration
  
  wire bit_comp,ptr_eq,ov,uv;
  wire [3:0] ptr_res;
  
  assign bit_comp=wptr[3]^rptr[3];//to check if fifo is full
  assign ptr_eq=(wptr[2:0]-rptr[2:0])?0:1;//the msb is for compare
  assign ptr_res=wptr[3:0]-rptr[3:0];
  assign ov=fifo_full & wr_en;//when fifo is full and write enable is inserted 
  assign uv = fifo_empty & rd_en;//when fifo is empty and read enable is inserted 
  
  always @(*)  
  begin  
   fifo_full =bit_comp & ptr_eq; //IF wptr-rptr==0 fifo is full 1111-1111  
    fifo_empty = (~bit_comp) & ptr_eq;  //IF not equal then empty, still space is there
    fifo_threshold = (ptr_res[3] || ptr_res[2]) ? 1:0;  //
  end  
  
  always @(posedge clk)  
  begin  
    if(reset) fifo_overflow <=0;  
    else if((ov==1)&&(rd_en==0))  //ov=1 and read=1 then it is ful
   fifo_overflow <=1;  
    else if(rd_en)  //ov=1 and read=1, then read happens
    fifo_overflow <=0;  
    else  
     fifo_overflow <= fifo_overflow;  
  end  
  
  always @(posedge clk)  
  begin  
    if(reset) fifo_underflow <=0;  
    else if((uv==1)&&(wr_en==0))  //uv=1 amd write=0, still fifo is not full
   fifo_underflow <=1;  
    else if(wr_en)  //uv=1 and wr=1 then it is getting full
    fifo_underflow <=0;  
    else  
     fifo_underflow <= fifo_underflow;  
  end  
 endmodule  // Code your design here
