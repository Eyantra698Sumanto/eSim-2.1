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

        entity inverter_tb is
end entity;

architecture inverter_tb_beh of inverter_tb is
	component inverter is
		port(
				i: in std_logic;
				o: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal i: std_logic;
	signal o: std_logic;


begin

	u1 : inverter port map(
				i => i,
				o => o
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
		variable i_v : VhpiString;
		variable o_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("i");
			Vhpi_Get_Port_Value(obj_ref,i_v,1);
			i <= To_Std_Logic(i_v);

			wait for 1 us;
			o_v := Pack_String_To_Vhpi_String(To_String(o));
			obj_ref := Pack_String_To_Vhpi_String("o");
			Vhpi_Set_Port_Value(obj_ref,o_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;