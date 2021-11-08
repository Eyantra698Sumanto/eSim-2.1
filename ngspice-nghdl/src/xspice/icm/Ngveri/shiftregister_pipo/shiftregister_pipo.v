/* verilator lint_off UNUSED */
module Shiftregister_PIPO(Clk,Pi,Po);
input Clk;
input [3:0]Pi;
output reg [3:0]Po;
always @(posedge Clk)
begin
Po = Pi;
end
endmodule

