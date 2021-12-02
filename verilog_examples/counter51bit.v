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