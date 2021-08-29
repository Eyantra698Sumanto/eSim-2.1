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

        entity bin_to_gray_tb is
end entity;

architecture bin_to_gray_tb_beh of bin_to_gray_tb is
	component bin_to_gray is
		port(
				bin: in std_logic_vector(3 downto 0);
				G: out std_logic_vector(3 downto 0)
				);
	end component;

	signal clk_s : std_logic := '0';
	signal bin: std_logic_vector(3 downto 0);
	signal G: std_logic_vector(3 downto 0);


begin

	u1 : bin_to_gray port map(
				bin => bin,
				G => G
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
		variable bin_v : VhpiString;
		variable G_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("bin");
			Vhpi_Get_Port_Value(obj_ref,bin_v,4);
			bin <= Unpack_String(bin_v,4);

			wait for 1 us;
			G_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(G));
			obj_ref := Pack_String_To_Vhpi_String("G");
			Vhpi_Set_Port_Value(obj_ref,G_v,4);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;