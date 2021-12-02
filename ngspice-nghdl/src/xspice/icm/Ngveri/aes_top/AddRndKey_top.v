
/* verilator lint_off UNUSED */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off BLKSEQ */
/* verilator lint_off WIDTH */
/* verilator lint_off LATCH */
/* verilator lint_off SELRANGE */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off DEFPARAM */
/* verilator lint_off IMPLICIT */
/* verilator lint_off TIMESCALEMOD */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off UNOPTFLAT */
    module AddRndKey_top(
input  [127:0] ip,
input  [127:0] ip_key,
input  enable,
output  [127:0] op
);
////enter your code here
// XOR bitwise for key and input
wire [127:0]op_temp;

assign op_temp[127:0] = ip[127:0] ^ ip_key[127:0];

assign op = enable ? op_temp : ip;

endmodule


