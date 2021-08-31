    module dff (input data,  
                  input reset, 
                  input set, 
                  
                  input enable,  
                  output reg Nout
                  output reg out);  
      
        always @ (posedge clk or negedge reset)  
           if (!reset)  
              out <= 0;  
           else  
              out <= data;  
 initial begin
      //if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("vlt_dump.vcd");
         $dumpvars();
      //end
      $display("[%0t] Model running...\n", $time);
     
   end
    endmodule  





