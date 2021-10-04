module m12(output Y, input A, B);
    and(Y, A, B); 
    initial
 begin
    $dumpfile("test.vcd");
    $dumpvars(0,test);
 end
endmodule
