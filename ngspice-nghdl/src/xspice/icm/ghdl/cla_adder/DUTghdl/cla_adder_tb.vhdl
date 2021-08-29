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

        entity cla_adder_tb is
end entity;

architecture cla_adder_tb_beh of cla_adder_tb is
	component cla_adder is
		port(
				A: in std_logic_vector(3 downto 0);
				B: in std_logic_vector(3 downto 0);
				cin: in std_logic;
				S: out std_logic_vector(3 downto 0);
				cout: out std_logic
				);
	end component;

	signal clk_s : std_logic := '0';
	signal A: std_logic_vector(3 downto 0);
	signal B: std_logic_vector(3 downto 0);
	signal cin: std_logic;
	signal S: std_logic_vector(3 downto 0);
	signal cout: std_logic;


begin

	u1 : cla_adder port map(
				A => A,
				B => B,
				cin => cin,
				S => S,
				cout => cout
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
		variable cin_v : VhpiString;
		variable S_v : VhpiString;
		variable cout_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("A");
			Vhpi_Get_Port_Value(obj_ref,A_v,4);
			A <= Unpack_String(A_v,4);

			obj_ref := Pack_String_To_Vhpi_String("B");
			Vhpi_Get_Port_Value(obj_ref,B_v,4);
			B <= Unpack_String(B_v,4);

			obj_ref := Pack_String_To_Vhpi_String("cin");
			Vhpi_Get_Port_Value(obj_ref,cin_v,1);
			cin <= To_Std_Logic(cin_v);

			wait for 1 us;
			S_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(S));
			obj_ref := Pack_String_To_Vhpi_String("S");
			Vhpi_Set_Port_Value(obj_ref,S_v,4);

			cout_v := Pack_String_To_Vhpi_String(To_String(cout));
			obj_ref := Pack_String_To_Vhpi_String("cout");
			Vhpi_Set_Port_Value(obj_ref,cout_v,1);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;