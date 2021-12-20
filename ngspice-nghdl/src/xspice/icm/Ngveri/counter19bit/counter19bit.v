    module counter19bit(input clk,      // Declare input port for the clock to allow counter to count up  
                      input reset,              // Declare input port for the reset to allow the counter to be reset to 0 when required  
                      output reg[18:0] out);    // Declare 4-bit output port to get the counter values  

      always @ (posedge clk) begin  

      
        if ( reset)  
          out <= 0;  
        else  
          out <= out + 1;  
      end  
    endmodule  


