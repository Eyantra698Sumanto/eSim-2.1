
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
    module AESCore(
//from testbench
input  clk,
input  rstn,
input  [127:0] plain_text,
input  [127:0] cipher_key,
//from controller
input  accept,
input  [3:0] rndNo,
input  enbSB,
input  enbSR,
input  enbMC,
input  enbAR,
input  enbKS,
//to testbench
output [127:0] cipher_text
);
////enter your code here
reg [127:0] reg1 = 0;
reg [127:0] reg2 =0;
wire  [127:0] state;
wire [127:0] key;
wire [127:0] out;
wire [127:0] KStoAR;
wire [127:0] SBtoSR;
wire [127:0] SRtoMC;
wire [127:0] MCtoAR;
wire [127:0] temp;


always@(posedge clk) begin
    if(rstn)begin                                   //when rstn is 1 , flushes all values to 0
        reg1 = 0;
        reg2 = 0;
    end else begin                                   // Mux for both cipher key and plain text to choose a new value or accept previous
    reg1 = (accept && rndNo == 0) ? plain_text : out;//values for the remaining rounds
    reg2 =  (rndNo == 0) ? cipher_key : KStoAR;
    end
end

assign state = reg1;
assign key = reg2;

KeySchedule_top k0(key,enbKS,rndNo,KStoAR);            // Call all the modules nesscesary for the encryption process
subBytes_top sB0(state, enbSB, SBtoSR);
shiftRows_top sR0(SBtoSR, enbSR, SRtoMC);
MixCol_top m0(SRtoMC, enbMC, MCtoAR);
AddRndKey_top a0(MCtoAR,KStoAR, enbAR, out);

assign cipher_text = out;

endmodule


