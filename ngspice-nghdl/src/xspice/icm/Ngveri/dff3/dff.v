`include "dff1.v"
module dff(input d,  
            input rstn,  
            input clk,  
            output reg q);
            wire[2:0] q_net;
   dff1 u0(.d(d),.rstn(rstn),.clk(clk),.q(q_net[0]));
   dff1 u1(.d(q_net[0]),.rstn(rstn),.clk(clk),.q(q_net[1]));
   dff1 u2(.d(q_net[1]),.rstn(rstn),.clk(clk),.q(q_net[2]));
   dff1 u3(.d(q_net[2]),.rstn(rstn),.clk(clk),.q(q));

endmodule  


