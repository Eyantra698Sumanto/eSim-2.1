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

        entity pwmincrement_tb is
end entity;

architecture pwmincrement_tb_beh of pwmincrement_tb is
	component pwmincrement is
		port(
				C: in std_logic;
				D: in std_logic;
				Q: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal C: std_logic;
	signal D: std_logic;
	signal Q: std_logic;


begin

	u1 : pwmincrement port map(
				C => C,
				D => D,
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
		variable C_v : VhpiString;
		variable D_v : VhpiString;
		variable Q_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("C");
			Vhpi_Get_Port_Value(obj_ref,C_v,1);
			C <= To_Std_Logic(C_v);

			obj_ref := Pack_String_To_Vhpi_String("D");
			Vhpi_Get_Port_Value(obj_ref,D_v,1);
			D <= To_Std_Logic(D_v);

			wait for 1 us;
			Q_v := Pack_String_To_Vhpi_String(To_String(Q));
			obj_ref := Pack_String_To_Vhpi_String("Q");
			Vhpi_Set_Port_Value(obj_ref,Q_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;