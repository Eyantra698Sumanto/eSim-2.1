/* verilator lint_off UNUSED */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off BLKSEQ */
/* verilator lint_off WIDTH */
/* verilator lint_off LATCH */
/* verilator lint_off SELRANGE */
    module counter4bit(input clk,      // Declare input port for the clock to allow counter to count up  
                      input rstn,              // Declare input port for the reset to allow the counter to be reset to 0 when required  
                      output reg[3:0] out);    // Declare 4-bit output port to get the counter values  
      

      always @ (posedge clk) begin  
        if ( rstn)  
          out <= 0;  
        else
          out <= out + 1;
      end 
    endmodule
