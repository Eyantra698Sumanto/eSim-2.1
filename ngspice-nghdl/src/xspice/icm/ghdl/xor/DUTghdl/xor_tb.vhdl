--------------------------------------------------------------------------------
--This testbench has been created by Ambikeshwar Srivastava, Rahul Paknikar 
--------------------------- FOSSEE, IIT Bombay ---------------------------------
--------------------------------------------------------------------------------

        library ieee;
        use ieee.std_logic_1164.all;
        use ieee.numeric_std.all;
        library work;
        use work.Vhpi_Foreign.all;
        use work.Utility_Package.all;
        use work.sock_pkg.all;

        entity xor_tb is
end entity;

architecture xor_tb_beh of xor_tb is
	component xor is
		port(
				a: in std_logic;
				b: in std_logic;
				c: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal a: std_logic;
	signal b: std_logic;
	signal c: std_logic;


begin

	u1 : xor port map(
				a => a,
				b => b,
				c => c
			);
	clk_s <= not clk_s after 5 us;

process
		variable sock_port : integer;
		type string_ptr is access string;
		variable sock_ip : string_ptr;
		begin
		sock_port := sock_port_fun;
		sock_ip := new string'(sock_ip_fun);
		Vhpi_Initialize(sock_port,Pack_String_To_Vhpi_String(sock_ip.all));
		wait until clk_s = '1';
		while true loop
			wait until clk_s = '0';
			Vhpi_Listen;
			wait for 1 us;
			Vhpi_Send;
		end loop;
		wait;
	end process;

	process
		variable count : integer:=0;
		variable a_v : VhpiString;
		variable b_v : VhpiString;
		variable c_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("a");
			Vhpi_Get_Port_Value(obj_ref,a_v,1);
			a <= To_Std_Logic(a_v);

			obj_ref := Pack_String_To_Vhpi_String("b");
			Vhpi_Get_Port_Value(obj_ref,b_v,1);
			b <= To_Std_Logic(b_v);

			wait for 1 us;
			c_v := Pack_String_To_Vhpi_String(To_String(c));
			obj_ref := Pack_String_To_Vhpi_String("c");
			Vhpi_Set_Port_Value(obj_ref,c_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;