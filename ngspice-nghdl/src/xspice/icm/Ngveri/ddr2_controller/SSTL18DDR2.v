/* verilator lint_off UNUSED */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off BLKSEQ */
/* verilator lint_off WIDTH */
/* verilator lint_off LATCH */
/* verilator lint_off SELRANGE */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off DEFPARAM */
/* verilator lint_off IMPLICIT */
/* verilator lint_off TIMESCALEMOD *///----------------------------------
//  EE577b SSTL18 Simulation Model
//----------------------------------
module SSTL18DDR2 (PAD,Z,A,RI,TS);

   inout   PAD; // I/O PAD PIN
   output  Z;   // Recieved data from PAD if RI is high
   input   A;   // Data to PAD if TS is high 
   input   RI;  // Receiver Inhibit 
   input   TS;  // Driver Tristate Control

   bufif1 b1 (PAD,A,TS);
   and    a4 (Z,PAD,RI);

endmodule // SSTL18DDR2


