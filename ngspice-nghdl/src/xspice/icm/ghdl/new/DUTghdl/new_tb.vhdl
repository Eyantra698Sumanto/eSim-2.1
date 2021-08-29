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

        entity new_tb is
end entity;

architecture new_tb_beh of new_tb is
	component new is
		port(
				D0: in std_logic;
				D1: in std_logic;
				S: in std_logic;
				Y: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal D0: std_logic;
	signal D1: std_logic;
	signal S: std_logic;
	signal Y: std_logic;


begin

	u1 : new port map(
				D0 => D0,
				D1 => D1,
				S => S,
				Y => Y
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
		variable D0_v : VhpiString;
		variable D1_v : VhpiString;
		variable S_v : VhpiString;
		variable Y_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("D0");
			Vhpi_Get_Port_Value(obj_ref,D0_v,1);
			D0 <= To_Std_Logic(D0_v);

			obj_ref := Pack_String_To_Vhpi_String("D1");
			Vhpi_Get_Port_Value(obj_ref,D1_v,1);
			D1 <= To_Std_Logic(D1_v);

			obj_ref := Pack_String_To_Vhpi_String("S");
			Vhpi_Get_Port_Value(obj_ref,S_v,1);
			S <= To_Std_Logic(S_v);

			wait for 1 us;
			Y_v := Pack_String_To_Vhpi_String(To_String(Y));
			obj_ref := Pack_String_To_Vhpi_String("Y");
			Vhpi_Set_Port_Value(obj_ref,Y_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;