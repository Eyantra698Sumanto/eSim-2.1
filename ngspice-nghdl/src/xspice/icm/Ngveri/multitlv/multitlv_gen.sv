// Generated by SandPiper(TM) 1.11-2021/01/28-beta from Redwood EDA.
// Redwood EDA does not claim intellectual property rights to this file and provides no warranty regarding its correctness or quality.


`include "sandpiper_gen.vh"





//
// Signals declared top-level.
//

// For |mul$Error.
logic MUL_Error_a6,
      MUL_Error_a7;

// For |mul$aa.
logic [34:0] MUL_aa_a0,
             MUL_aa_a1,
             MUL_aa_a2,
             MUL_aa_a3,
             MUL_aa_a4,
             MUL_aa_a5,
             MUL_aa_a6,
             MUL_aa_a7;

// For |mul$bb.
logic [34:0] MUL_bb_a0,
             MUL_bb_a1,
             MUL_bb_a2,
             MUL_bb_a3,
             MUL_bb_a4,
             MUL_bb_a5,
             MUL_bb_a6,
             MUL_bb_a7;

// For |mul$mm.
logic [69:0] MUL_mm_a6,
             MUL_mm_a7;

// For |mul$mm1.
logic [16:0] MUL_mm1_a2,
             MUL_mm1_a3,
             MUL_mm1_a4,
             MUL_mm1_a5,
             MUL_mm1_a6;

// For |mul$mm2.
logic [52:17] MUL_mm2_a3,
              MUL_mm2_a4;

// For |mul$mm3.
logic [52:17] MUL_mm3_a4,
              MUL_mm3_a5;
logic [33:17] MUL_mm3_a6;

// For |mul$mm4.
logic [69:34] MUL_mm4_a5,
              MUL_mm4_a6;

// For |mul$mm_full.
logic [69:0] MUL_mm_full_a7;

// For |mul$pp1.
logic [33:0] MUL_pp1_a1,
             MUL_pp1_a2;
logic [33:17] MUL_pp1_a3;

// For |mul$pp2.
logic [51:17] MUL_pp2_a2,
              MUL_pp2_a3;

// For |mul$pp3.
logic [51:17] MUL_pp3_a3,
              MUL_pp3_a4;

// For |mul$pp4.
logic [69:34] MUL_pp4_a4,
              MUL_pp4_a5;

// For |mul$valid.
logic [0:0] MUL_valid_a0,
            MUL_valid_a1,
            MUL_valid_a2,
            MUL_valid_a3,
            MUL_valid_a4,
            MUL_valid_a5,
            MUL_valid_a6,
            MUL_valid_a7;


//
// Scope: |mul
//

// Clock signals.
logic clkF_MUL_valid_a8 ;
logic clkP_MUL_valid_a2 ;
logic clkP_MUL_valid_a3 ;
logic clkP_MUL_valid_a4 ;
logic clkP_MUL_valid_a5 ;
logic clkP_MUL_valid_a6 ;
logic clkP_MUL_valid_a7 ;


generate


   //
   // Scope: |mul
   //

      // For $Error.
      always_ff @(posedge clkF_MUL_valid_a8) MUL_Error_a7 <= MUL_Error_a6;

      // For $aa.
      always_ff @(posedge clk) MUL_aa_a1[34:0] <= MUL_aa_a0[34:0];
      always_ff @(posedge clk) MUL_aa_a2[34:0] <= MUL_aa_a1[34:0];
      always_ff @(posedge clk) MUL_aa_a3[34:0] <= MUL_aa_a2[34:0];
      always_ff @(posedge clk) MUL_aa_a4[34:0] <= MUL_aa_a3[34:0];
      always_ff @(posedge clk) MUL_aa_a5[34:0] <= MUL_aa_a4[34:0];
      always_ff @(posedge clk) MUL_aa_a6[34:0] <= MUL_aa_a5[34:0];
      always_ff @(posedge clk) MUL_aa_a7[34:0] <= MUL_aa_a6[34:0];

      // For $bb.
      always_ff @(posedge clk) MUL_bb_a1[34:0] <= MUL_bb_a0[34:0];
      always_ff @(posedge clk) MUL_bb_a2[34:0] <= MUL_bb_a1[34:0];
      always_ff @(posedge clk) MUL_bb_a3[34:0] <= MUL_bb_a2[34:0];
      always_ff @(posedge clk) MUL_bb_a4[34:0] <= MUL_bb_a3[34:0];
      always_ff @(posedge clk) MUL_bb_a5[34:0] <= MUL_bb_a4[34:0];
      always_ff @(posedge clk) MUL_bb_a6[34:0] <= MUL_bb_a5[34:0];
      always_ff @(posedge clk) MUL_bb_a7[34:0] <= MUL_bb_a6[34:0];

      // For $mm.
      always_ff @(posedge clkP_MUL_valid_a7) MUL_mm_a7[69:0] <= MUL_mm_a6[69:0];

      // For $mm1.
      always_ff @(posedge clkP_MUL_valid_a3) MUL_mm1_a3[16:0] <= MUL_mm1_a2[16:0];
      always_ff @(posedge clkP_MUL_valid_a4) MUL_mm1_a4[16:0] <= MUL_mm1_a3[16:0];
      always_ff @(posedge clkP_MUL_valid_a5) MUL_mm1_a5[16:0] <= MUL_mm1_a4[16:0];
      always_ff @(posedge clkP_MUL_valid_a6) MUL_mm1_a6[16:0] <= MUL_mm1_a5[16:0];

      // For $mm2.
      always_ff @(posedge clkP_MUL_valid_a4) MUL_mm2_a4[52:17] <= MUL_mm2_a3[52:17];

      // For $mm3.
      always_ff @(posedge clkP_MUL_valid_a5) MUL_mm3_a5[52:17] <= MUL_mm3_a4[52:17];
      always_ff @(posedge clkP_MUL_valid_a6) MUL_mm3_a6[33:17] <= MUL_mm3_a5[33:17];

      // For $mm4.
      always_ff @(posedge clkP_MUL_valid_a6) MUL_mm4_a6[69:34] <= MUL_mm4_a5[69:34];

      // For $pp1.
      always_ff @(posedge clkP_MUL_valid_a2) MUL_pp1_a2[33:0] <= MUL_pp1_a1[33:0];
      always_ff @(posedge clkP_MUL_valid_a3) MUL_pp1_a3[33:17] <= MUL_pp1_a2[33:17];

      // For $pp2.
      always_ff @(posedge clkP_MUL_valid_a3) MUL_pp2_a3[51:17] <= MUL_pp2_a2[51:17];

      // For $pp3.
      always_ff @(posedge clkP_MUL_valid_a4) MUL_pp3_a4[51:17] <= MUL_pp3_a3[51:17];

      // For $pp4.
      always_ff @(posedge clkP_MUL_valid_a5) MUL_pp4_a5[69:34] <= MUL_pp4_a4[69:34];

      // For $valid.
      always_ff @(posedge clk) MUL_valid_a1[0:0] <= MUL_valid_a0[0:0];
      always_ff @(posedge clk) MUL_valid_a2[0:0] <= MUL_valid_a1[0:0];
      always_ff @(posedge clk) MUL_valid_a3[0:0] <= MUL_valid_a2[0:0];
      always_ff @(posedge clk) MUL_valid_a4[0:0] <= MUL_valid_a3[0:0];
      always_ff @(posedge clk) MUL_valid_a5[0:0] <= MUL_valid_a4[0:0];
      always_ff @(posedge clk) MUL_valid_a6[0:0] <= MUL_valid_a5[0:0];
      always_ff @(posedge clk) MUL_valid_a7[0:0] <= MUL_valid_a6[0:0];




endgenerate



//
// Gated clocks.
//

generate



   //
   // Scope: |mul
   //

      clk_gate gen_clkF_MUL_valid_a8(clkF_MUL_valid_a8, clk, MUL_valid_a7, 1'b1, 1'b0);
      clk_gate gen_clkP_MUL_valid_a2(clkP_MUL_valid_a2, clk, 1'b1, MUL_valid_a1, 1'b0);
      clk_gate gen_clkP_MUL_valid_a3(clkP_MUL_valid_a3, clk, 1'b1, MUL_valid_a2, 1'b0);
      clk_gate gen_clkP_MUL_valid_a4(clkP_MUL_valid_a4, clk, 1'b1, MUL_valid_a3, 1'b0);
      clk_gate gen_clkP_MUL_valid_a5(clkP_MUL_valid_a5, clk, 1'b1, MUL_valid_a4, 1'b0);
      clk_gate gen_clkP_MUL_valid_a6(clkP_MUL_valid_a6, clk, 1'b1, MUL_valid_a5, 1'b0);
      clk_gate gen_clkP_MUL_valid_a7(clkP_MUL_valid_a7, clk, 1'b1, MUL_valid_a6, 1'b0);



endgenerate



generate   // This is awkward, but we need to go into 'generate' context in the line that `includes the declarations file.
