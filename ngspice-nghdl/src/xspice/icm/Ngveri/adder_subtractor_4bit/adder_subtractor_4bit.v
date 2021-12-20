module Adder_subtractor_4bit (a,b,cin,sum,carry);
  input [3:0]a,b;
  input cin;
  output [3:0]sum;
  output carry;
  wire [2:0]c;
  wire [3:0]bin;
  
  //Generating b input by xoring with cin. cin=1--subtraction. cin=0--Addition
  
  xor g1(bin[0],b[0],cin);
  xor g2(bin[1],b[1],cin);
  xor g3(bin[2],b[2],cin);
  xor g4(bin[3],b[3],cin);
  
// Full Adder instantiation
  
  Fulladder n1(.a(a[0]),.b(bin[0]),.cin(cin),.sum(sum[0]),.carry(c[0]));
  Fulladder n2(.a(a[1]),.b(bin[1]),.cin(c[0]),.sum(sum[1]),.carry(c[1]));
  Fulladder n3(.a(a[2]),.b(bin[2]),.cin(c[1]),.sum(sum[2]),.carry(c[2]));
  Fulladder n4(.a(a[3]),.b(bin[3]),.cin(c[2]),.sum(sum[3]),.carry(carry));
  
endmodule
  
  
  //------------Full Adder---------
  
  module Fulladder(a,b,cin,sum,carry);
    input a,b,cin;
    output sum,carry;
    wire sum1,carry1,carry2;
    //Full adder with half adder instantiation
    Halfadder n1(.a(a),.b(b),.sum(sum1),.carry(carry1));
    Halfadder n2(.a(sum1),.b(cin),.sum(sum),.carry(carry2));
    or g1(carry,carry1,carry2);
  endmodule  
  
  
  //--------------Half Adder------------------
  module Halfadder(a,b,carry,sum);
    input a,b;
    output sum,carry;
    //Half Adder FUnction
    xor g1(sum,a,b);
    and g2(carry,a,b);
  endmodule
