    module Convert (input d,  
                  input rstn,  
                  input clk,  
                  output reg q);  
      
        always @ (posedge clk or negedge rstn)  
           if (!rstn)  
              q <= 0;  
           else  
              q <= d;  
 initial begin
      //if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("vlt_dump.vcd");
         $dumpvars();
      //end
      $display("[%0t] Model running...\n", $time);
     
   end
    endmodule  





