
module apb (pclk, pwrite,preset, penable, psel,paddress,pwdata,prdata,pready);
  
  
parameter addrwidth=5;
parameter datawidth=8;
parameter memsize=32;

    input pclk;
	input pwrite;
	input preset;
  	input penable;
  	input psel;
    input[4:0]paddress;  
  	input [7:0]pwdata;
  	output[7:0]prdata;
  	output pready;
  

  reg[7:0]prdata;
  reg [7:0]mem[32];
  parameter idle=0;
  parameter setup=1;
  parameter access=2;
  int i;
  reg [1:0]ps, ps_sync,statei;
  
  
  always @(posedge pclk or posedge preset) begin
  	  if(preset)	
      begin
        ps<=idle;
        ps<=0;
        for(i=0;i<=32;i=i+1) begin
          mem[i]<='hx;
        end
      end
    else
      ps_sync<=ps;
    //prdata<=mem[paddress]
  end
  
  always @(*) begin
    if(ps_sync==idle) begin
      
      case({psel,penable})
    	2'b00:	ps=idle;
        2'b01:	ps=idle;
        2'b10:	ps=setup;//goes to setup
        2'b11:	ps=access;
        default:ps=idle;
      endcase
    end
    
   else if(ps_sync==setup) begin
      
      case({psel,penable})
    	2'b00:	ps=idle;
        2'b01:	ps=idle;
        2'b10:	ps=setup;//goes to setup
        2'b11:	ps=access;
        default:ps=idle;
      endcase
    end    
    
    else if(ps_sync==access) begin
      
      case({psel,penable})
    	2'b00:	ps=idle;
        2'b01:	ps=idle;
        2'b10:	ps=setup;//goes to setup
        2'b11:	ps=access;
        default:ps=idle;
      endcase
    end    
  end
  
  always @(posedge pclk) begin
    if(ps==access && pwrite==1)
      mem[paddress]<=pwdata;
    else if(ps==access & pwrite==0)
      prdata<=mem[paddress];
  end
  
  assign pready=1;
  assign statei=ps;
  
endmodule
  /*ASSERTION AND TYPES
  
  property p1_reset;
    @(posedge pclk) (preset==1)
    	|->
        statei==idle;
  endproperty
  
  property p2write;
    @(posedge pclk) disable iff (preset)
    	|->
        statei==idle;
  endproperty
    */
