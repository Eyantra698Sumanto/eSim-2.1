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

        entity decoder_tb is
end entity;

architecture decoder_tb_beh of decoder_tb is
	component decoder is
		port(
				sel: in std_logic_vector(2 downto 0);
				y: out std_logic_vector(7 downto 0)
				);
	end component;

	signal clk_s : std_logic := '0';
	signal sel: std_logic_vector(2 downto 0);
	signal y: std_logic_vector(7 downto 0);


begin

	u1 : decoder port map(
				sel => sel,
				y => y
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
		variable sel_v : VhpiString;
		variable y_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("sel");
			Vhpi_Get_Port_Value(obj_ref,sel_v,3);
			sel <= Unpack_String(sel_v,3);

			wait for 1 us;
			y_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(y));
			obj_ref := Pack_String_To_Vhpi_String("y");
			Vhpi_Set_Port_Value(obj_ref,y_v,8);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;