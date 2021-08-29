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

        entity up_counter_tb is
end entity;

architecture up_counter_tb_beh of up_counter_tb is
	component up_counter is
		port(
				Clock: in std_logic;
				CLR: in std_logic;
				Q: out std_logic_vector(3 downto 0)
				);
	end component;

	signal clk_s : std_logic := '0';
	signal Clock: std_logic;
	signal CLR: std_logic;
	signal Q: std_logic_vector(3 downto 0);


begin

	u1 : up_counter port map(
				Clock => Clock,
				CLR => CLR,
				Q => Q
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
		variable Clock_v : VhpiString;
		variable CLR_v : VhpiString;
		variable Q_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("Clock");
			Vhpi_Get_Port_Value(obj_ref,Clock_v,1);
			Clock <= To_Std_Logic(Clock_v);

			obj_ref := Pack_String_To_Vhpi_String("CLR");
			Vhpi_Get_Port_Value(obj_ref,CLR_v,1);
			CLR <= To_Std_Logic(CLR_v);

			wait for 1 us;
			Q_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(Q));
			obj_ref := Pack_String_To_Vhpi_String("Q");
			Vhpi_Set_Port_Value(obj_ref,Q_v,4);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;