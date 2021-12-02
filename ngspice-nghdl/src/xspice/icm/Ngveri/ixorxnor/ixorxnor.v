/* verilator lint_off UNUSED */
module ixorxnor(yNOR, yXNOR, a,b)
  output yXOR,yXNOR;
  input a,b;

  assign yXOR = a ^ b;
  assign yXNOR = ~(a ^ b);
  
endmodule 
