module ex10(CLK, SW, LEDR, LEDG, PB,
             HEX0, HEX1, HEX2, HEX3);
input CLK;
input [9:0] SW;
input [3:0] PB;
output [6:0] HEX0, HEX1, HEX2, HEX3;
output [7:0] LEDG;
output [9:0] LEDR;
 
parameter N = 20_000_000;
 
//-------function bcdto7seg ------
function [6:0] bcdto7seg; //(bcd);
input [3:0] bcd;
    
  case (bcd)
  0:  bcdto7seg = 7'b1000000; 
  1:  bcdto7seg = 7'b1111001; 
  2:  bcdto7seg = 7'b0100100; 
  3:  bcdto7seg = 7'b0110000; 
  4:  bcdto7seg = 7'b0011001; 
  5:  bcdto7seg = 7'b0010010; 
  6:  bcdto7seg = 7'b0000010; 
  7:  bcdto7seg = 7'b1111000; 
  8:  bcdto7seg = 7'b0000000; 
  9:  bcdto7seg = 7'b0010000; 
  10: bcdto7seg = 7'b0001000;
  11: bcdto7seg = 7'b0000011;
  12: bcdto7seg = 7'b1000110;
  13: bcdto7seg = 7'b0100001;
  14: bcdto7seg = 7'b0000110;
  15: bcdto7seg = 7'b0001110;
  default:  bcdto7seg = 7'b1111111;                 
 endcase
endfunction
 
assign LEDR = SW;
assign HEX0 = bcdto7seg(LEDG[3:0]); //7'b1000000;  //=gfedcba common anode
assign HEX1 = 7'b1111001;  //1
assign HEX2 = 7'b0100100;  //2
assign HEX3 = 7'b0110000;  //3
 
wire [25:0] q;
mycnter #26 cntXXM(CLK, PB[0], q, 1, N);
 
reg [7:0] LEDG;
initial LEDG =8'b00000000;
always @(posedge CLK)
   if (q == N) LEDG <= LEDG + 1;
    
endmodule