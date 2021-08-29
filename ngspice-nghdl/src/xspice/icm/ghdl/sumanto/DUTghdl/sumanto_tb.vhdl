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

        entity sumanto_tb is
end entity;

architecture sumanto_tb_beh of sumanto_tb is
	component sumanto is
		port(
				A: in std_logic;
				B: in std_logic;
				C: in std_logic;
				D: in std_logic;
				S0: in std_logic;
				S1: in std_logic;
				Z: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal A: std_logic;
	signal B: std_logic;
	signal C: std_logic;
	signal D: std_logic;
	signal S0: std_logic;
	signal S1: std_logic;
	signal Z: std_logic;


begin

	u1 : sumanto port map(
				A => A,
				B => B,
				C => C,
				D => D,
				S0 => S0,
				S1 => S1,
				Z => Z
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
		variable A_v : VhpiString;
		variable B_v : VhpiString;
		variable C_v : VhpiString;
		variable D_v : VhpiString;
		variable S0_v : VhpiString;
		variable S1_v : VhpiString;
		variable Z_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("A");
			Vhpi_Get_Port_Value(obj_ref,A_v,1);
			A <= To_Std_Logic(A_v);

			obj_ref := Pack_String_To_Vhpi_String("B");
			Vhpi_Get_Port_Value(obj_ref,B_v,1);
			B <= To_Std_Logic(B_v);

			obj_ref := Pack_String_To_Vhpi_String("C");
			Vhpi_Get_Port_Value(obj_ref,C_v,1);
			C <= To_Std_Logic(C_v);

			obj_ref := Pack_String_To_Vhpi_String("D");
			Vhpi_Get_Port_Value(obj_ref,D_v,1);
			D <= To_Std_Logic(D_v);

			obj_ref := Pack_String_To_Vhpi_String("S0");
			Vhpi_Get_Port_Value(obj_ref,S0_v,1);
			S0 <= To_Std_Logic(S0_v);

			obj_ref := Pack_String_To_Vhpi_String("S1");
			Vhpi_Get_Port_Value(obj_ref,S1_v,1);
			S1 <= To_Std_Logic(S1_v);

			wait for 1 us;
			Z_v := Pack_String_To_Vhpi_String(To_String(Z));
			obj_ref := Pack_String_To_Vhpi_String("Z");
			Vhpi_Set_Port_Value(obj_ref,Z_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;