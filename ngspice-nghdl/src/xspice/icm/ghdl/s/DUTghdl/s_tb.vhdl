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

        entity s_tb is
end entity;

architecture s_tb_beh of s_tb is
	component s is
		port(
				clk: in std_logic;
				il: in std_logic;
				ir: in std_logic;
				s: in std_logic_vector(1 downto 0);
				i: in std_logic_vector(3 downto 0);
				q: out std_logic_vector(3 downto 0)
				);
	end component;

	signal clk_s : std_logic := '0';
	signal clk: std_logic;
	signal il: std_logic;
	signal ir: std_logic;
	signal s: std_logic_vector(1 downto 0);
	signal i: std_logic_vector(3 downto 0);
	signal q: std_logic_vector(3 downto 0);


begin

	u1 : s port map(
				clk => clk,
				il => il,
				ir => ir,
				s => s,
				i => i,
				q => q
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
		variable clk_v : VhpiString;
		variable il_v : VhpiString;
		variable ir_v : VhpiString;
		variable s_v : VhpiString;
		variable i_v : VhpiString;
		variable q_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("clk");
			Vhpi_Get_Port_Value(obj_ref,clk_v,1);
			clk <= To_Std_Logic(clk_v);

			obj_ref := Pack_String_To_Vhpi_String("il");
			Vhpi_Get_Port_Value(obj_ref,il_v,1);
			il <= To_Std_Logic(il_v);

			obj_ref := Pack_String_To_Vhpi_String("ir");
			Vhpi_Get_Port_Value(obj_ref,ir_v,1);
			ir <= To_Std_Logic(ir_v);

			obj_ref := Pack_String_To_Vhpi_String("s");
			Vhpi_Get_Port_Value(obj_ref,s_v,2);
			s <= Unpack_String(s_v,2);

			obj_ref := Pack_String_To_Vhpi_String("i");
			Vhpi_Get_Port_Value(obj_ref,i_v,4);
			i <= Unpack_String(i_v,4);

			wait for 1 us;
			q_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(q));
			obj_ref := Pack_String_To_Vhpi_String("q");
			Vhpi_Set_Port_Value(obj_ref,q_v,4);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;