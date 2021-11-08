
import "DPI-C" function get_int  get_ptr0()
import "DPI-C" function get_int  get_ptr1()
import "DPI-C" function get_int get_ptr2()
import "DPI-C" function get_int  get_ptr3()
import "DPI-C" function get_int  get_ptr4()
import "DPI-C" function get_int  get_ptr5()
import "DPI-C" function void input()
module tiny85(input VCC ,
     input GND ,
     input clk ,
     output PB0 ,
     output PB1 ,
     input PB2 ,
     input PB3 ,
     input PB4 ,
     input PB5);
     initial 
     begin
     MapToRam(1);
     int PINB_Data ;
     end
     always @ (posedge clk )
     if(VCC = '1' and GND = '0')  
     begin
     PINB_Data <= PB2*4+PB3*8 + PB4*16+ PB5*32;
			input(PINB_Data);
			output(1);
   	 PB0<=get_ptr0();
   	 PB1 <=get_ptr1();
   	 end
   	 else if(VCC = '0') 
   	 begin
			PB0 <= "0";
			PB1 <= "0";
			
	end;
endmodule
