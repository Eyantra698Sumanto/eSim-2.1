
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
/* verilator lint_off UNSIGNED */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off UNDRIVEN */
    module AES_top(
//from testbench
input  clk,
input  start,
input  rstn,
input  [127:0] plain_text,
input  [127:0] cipher_key,
//to testbench
output  done,
output  [9:0] completed_round,
output  [127:0] cipher_text
);
////enter your code here
wire accept,enbSB,enbSR,enbMC,enbAR,enbKS;
wire [3:0] rndNo;

AEScntx c0(clk,start,rstn,accept,rndNo,enbSB,enbSR,enbMC,enbAR,enbKS,done,completed_round);
AESCore cr0(clk,rstn,plain_text,cipher_key,accept,rndNo,enbSB,enbSR,enbMC,enbAR,enbKS,cipher_text);

 
endmodule

