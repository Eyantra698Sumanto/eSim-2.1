/* verilator lint_off UNUSED */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off BLKSEQ */
/* verilator lint_off WIDTH */
/* verilator lint_off LATCH */
`timescale 1ns / 1ps
/* verilator lint_off LATCH */
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:59 10/07/2018 
// Design Name: 
// Module Name:    Calculator 
// Project Name: 
//
//
//
//GroupID-16(17114004_17114013)-AbhishekRathod & AnshumanShakya
//GroupID-11(17114008_17114010)-AmanJaiswal & AmitKumar
//
//
//
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module Calculator(
    input[13:0] astr,
    output reg[3:0] res,
	 output reg[6:0] seven_out
    );

always@*
begin

if(astr[13:12] == 2'b00) 
	 assign res = astr[11:8]+astr[7:4] ;
	
else if(astr[13:12] == 2'b01)
	assign  res = astr[11:8]-astr[7:4] ;

else if(astr[13:12]== 2'b10)
	assign res = astr[11:8] | astr[7:4] ;

else if(astr[13:12] == 2'b11)
	assign res = ~astr[11:8]+4'b0001 ;
	
end
 
 //assign astr[3:0] = res ;
 
 //reg[6:0] seven_out_temp ;
/*assign seven_out = Seven_seg_output(
						.astr(astr[3:0])
						);*/
		
always @(res)
    begin
        case (res) //case statement
            4'b0000 : seven_out = 7'b0000001;
            4'b0001 : seven_out = 7'b1001111;
            4'b0010 : seven_out = 7'b0010010;
            4'b0011 : seven_out = 7'b0000110;
            4'b0100 : seven_out = 7'b1001100;
            4'b0101 : seven_out = 7'b0100100;
            4'b0110 : seven_out = 7'b0100000;
            4'b0111 : seven_out = 7'b0001111;
            4'b1000 : seven_out = 7'b0000000;
            4'b1001 : seven_out = 7'b0000100;
            //switch off 7 segment character when the bcd digit is not a decimal number.
            default : seven_out = 7'b1111110; 
        endcase
    end

endmodule

