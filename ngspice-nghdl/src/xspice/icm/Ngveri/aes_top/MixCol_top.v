
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
    module MixCol_top(
input  [127:0] ip,
input  enable,
output [127:0] op
);
////enter your code here
wire [127:0]op_temp;
//Martix Multiplication of each column 
matrix_mult mul0 ( .ip(ip[127:96]) , .op(op_temp[127:96]) );
matrix_mult mul1 ( .ip(ip[95:64])  , .op(op_temp[95:64]) );
matrix_mult mul2 ( .ip(ip[63:32])  , .op(op_temp[63:32]) );
matrix_mult mul3 ( .ip(ip[31:0])   , .op(op_temp[31:0]) );


assign op = enable ? op_temp : ip;

endmodule


