/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
//-----------------------------------------------------
// Design Name : cam
// File Name   : cam.v
// Function    : CAM
// Coder       : Deepak Kumar Tala
//-----------------------------------------------------
module cam (
clk         , // Cam clock
cam_enable  , // Cam enable
cam_data_in , // Cam data to match
cam_hit_out , // Cam match has happened
cam_addr_out  // Cam output address 
);

//------------Input Ports--------------
input                    clk;      
input                    cam_enable;   
input  [15:0]       cam_data_in;  
//----------Output Ports--------------
output                   cam_hit_out;  
output [7:0]  cam_addr_out;  
//------------Internal Variables--------
reg [7:0]  cam_addr_out;
reg                   cam_hit_out;
reg [7:0]  cam_addr_combo;
reg                   cam_hit_combo;
reg                   found_match;
reg  [7:0]             i;
//-------------Code Starts Here-------
always @(cam_data_in) begin
  cam_addr_combo   = {8{1'b0}};
  found_match      = 1'b0;
  cam_hit_combo    = 1'b0;
  for (i=0; i<16; i=i+1) begin
    if (cam_data_in[i] && !found_match) begin
      found_match     = 1'b1;
      cam_hit_combo   = 1'b1;
      cam_addr_combo  = i;
    end else begin
      found_match     = found_match;
      cam_hit_combo   = cam_hit_combo;
      cam_addr_combo  = cam_addr_combo;
    end
  end
end

// Register the outputs 
always @(posedge clk) begin
  if (cam_enable) begin
    cam_hit_out  <=  cam_hit_combo;
    cam_addr_out <=  cam_addr_combo;
  end else begin
    cam_hit_out  <=  1'b0;
    cam_addr_out <=  {8{1'b0}};
  end
end

endmodule 

