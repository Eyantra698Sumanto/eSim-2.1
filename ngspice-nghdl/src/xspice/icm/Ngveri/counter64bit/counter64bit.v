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
    module counter64bit(input clk,      // Declare input port for the clock to allow counter to count up  
                      input rst,              // Declare input port for the reset to allow the counter to be reset to 0 when required  
                      output reg[63:0] out);    // Declare 4-bit output port to get the counter values  

      always @ (posedge clk) begin  
        if ( rst)  
          out <= 0;  
        else  
          out <= out + 1;  
      end  
    endmodule  
