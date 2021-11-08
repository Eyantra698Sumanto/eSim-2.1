/* verilator lint_off UNUSED */
`include "dff1.v"
module shiftreg(input d,  
            input rstn,  
            input clk,  
            output reg q);
            wire[2:0] q_net;
   dff1 u0(.d(d),.rstn(rstn),.clk(clk),.q(q_net[0]));
   dff1 u1(.d(q_net[0]),.rstn(rstn),.clk(clk),.q(q_net[1]));
   dff1 u2(.d(q_net[1]),.rstn(rstn),.clk(clk),.q(q_net[2]));
   dff1 u3(.d(q_net[2]),.rstn(rstn),.clk(clk),.q(q));
        
    initial begin
      //if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("vlt_dump.vcd");
         $dumpvars();
      //end
      $display("[%0t] Model running...\n", $time);
     
   end
endmodule  




