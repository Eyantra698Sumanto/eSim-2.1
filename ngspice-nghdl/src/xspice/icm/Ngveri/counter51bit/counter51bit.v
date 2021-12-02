
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
        module counter51bit(input clk,      // Declare input port for the clock to allow counter to count up  
                      input rst,              // Declare input port for the reset to allow the counter to be reset to 0 when required  
                      output reg[50:0] out);    // Declare 4-bit output port to get the counter values  

      always @ (posedge clk) begin  
        if ( rst)  
          out <= 0;  
        else  
          out <= out + 1;  
      end  
    endmodule  
