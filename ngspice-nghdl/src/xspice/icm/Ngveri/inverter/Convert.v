module Convert (o, i);
 output o; 
 input i;
 assign o = i; 
 

 initial begin
      //if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("vlt_dump.vcd");
         $dumpvars();
      //end
      $display("[%0t] Model running...\n", $time);
     
   end
    endmodule  





