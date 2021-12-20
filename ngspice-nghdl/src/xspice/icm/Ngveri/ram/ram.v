module ram(clk,reset,cs,read,write,dataread,datawrite,address);
  input clk,reset,cs,read,write;
  output reg [7:0]dataread;
  input [7:0]datawrite, address;
  reg [7:0]mem[0:31];

  //WRITE OPERATION
  always @(posedge clk) begin
    
    if (cs==1 && write==1 && read==0)
      mem[address] <= datawrite; end
  
  //READ OPERATION
  always @(posedge clk) begin  
    
   if(cs==1 && write==0 && read==1)
      dataread <= mem[address]; 
  end
  
  //WRITE AND READ OPERATION
   always @(posedge clk) begin
     
  if(cs==1 && write==1 && read==1)
    mem[address] <= datawrite; 
      dataread <= mem[address]; 
  end
  
  //INVALID OPERATION
   always @(posedge clk) begin
    
     if(cs==0 && write==0 && read==0)
      dataread <=8'h00; 
  end
  
  always @(posedge clk) begin
    
    if(reset)
      dataread <=8'h00; 
  end
  
endmodule
