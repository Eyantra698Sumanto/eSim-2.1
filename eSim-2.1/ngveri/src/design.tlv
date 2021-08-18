\m4_TLV_version 1d: tl-x.org
\SV
   `include "sqrt32.v";
   m4_makerchip_module  // A macro instantiation to define a default module interface.
\TLV
   |calc

      // -----------------------------------------
      // Stimulus
      @0
         // create a random $aa, $bb, and $valid condition.
         m4_rand($valid, 0, 0)
         ?$valid
            m4_rand($aa, 3, 0)
            m4_rand($bb, 3, 0)

      // -----------------------------------------
      // The Design
      ?$valid
         @1
            $aa_sq[31:0] = $aa * $aa;
            $bb_sq[31:0] = $bb * $bb;
         @2
            $cc_sq[31:0] = $aa_sq + $bb_sq;
         @3
            $cc[31:0] = sqrt($cc_sq);

      // -----------------------------------------
      // Printing
      @4
         \SV_plus
            always_ff @(posedge clk) begin
               if ($valid)
                  \$display("sqrt((%2d ^ 2) + (%2d ^ 2)) = %2d", $aa, $bb, $cc);
            end

   // -----------------------------------------
   // End simulation
   *passed = *cyc_cnt > 25;

\SV
  endmodule
