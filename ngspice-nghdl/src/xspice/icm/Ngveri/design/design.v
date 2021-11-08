/* verilator lint_off UNUSED */
//He

module design(Y, D0, D1, S);
output Y;
input D0, D1, S;
wire T1, T2, Sba

and (T1, D1, S);
not (Sbar, S);
or (Y, T1, T2);

endmodule
