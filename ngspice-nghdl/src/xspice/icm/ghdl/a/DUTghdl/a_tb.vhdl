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

        entity a_tb is
end entity;

architecture a_tb_beh of a_tb is
	component a is
		port(
				clk1: in std_logic;
				rst: in std_logic;
				f: in std_logic;
				g: in std_logic;
				h: in std_logic;
				val: out std_logic_vector(3 downto 0);
				a: out std_logic_vector(3 downto 0);
				b: out std_logic_vector(3 downto 0);
				c: out std_logic_vector(3 downto 0);
				d: out std_logic_vector(3 downto 0)
				);
	end component;

	signal clk_s : std_logic := '0';
	signal clk1: std_logic;
	signal rst: std_logic;
	signal f: std_logic;
	signal g: std_logic;
	signal h: std_logic;
	signal val: std_logic_vector(3 downto 0);
	signal a: std_logic_vector(3 downto 0);
	signal b: std_logic_vector(3 downto 0);
	signal c: std_logic_vector(3 downto 0);
	signal d: std_logic_vector(3 downto 0);


begin

	u1 : a port map(
				clk1 => clk1,
				rst => rst,
				f => f,
				g => g,
				h => h,
				val => val,
				a => a,
				b => b,
				c => c,
				d => d
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
		variable clk1_v : VhpiString;
		variable rst_v : VhpiString;
		variable f_v : VhpiString;
		variable g_v : VhpiString;
		variable h_v : VhpiString;
		variable val_v : VhpiString;
		variable a_v : VhpiString;
		variable b_v : VhpiString;
		variable c_v : VhpiString;
		variable d_v : VhpiString;
		variable obj_ref : VhpiString;
	begin
		while true loop
			wait until clk_s = '0';

			obj_ref := Pack_String_To_Vhpi_String("clk1");
			Vhpi_Get_Port_Value(obj_ref,clk1_v,1);
			clk1 <= To_Std_Logic(clk1_v);

			obj_ref := Pack_String_To_Vhpi_String("rst");
			Vhpi_Get_Port_Value(obj_ref,rst_v,1);
			rst <= To_Std_Logic(rst_v);

			obj_ref := Pack_String_To_Vhpi_String("f");
			Vhpi_Get_Port_Value(obj_ref,f_v,1);
			f <= To_Std_Logic(f_v);

			obj_ref := Pack_String_To_Vhpi_String("g");
			Vhpi_Get_Port_Value(obj_ref,g_v,1);
			g <= To_Std_Logic(g_v);

			obj_ref := Pack_String_To_Vhpi_String("h");
			Vhpi_Get_Port_Value(obj_ref,h_v,1);
			h <= To_Std_Logic(h_v);

			wait for 1 us;
			val_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(val));
			obj_ref := Pack_String_To_Vhpi_String("val");
			Vhpi_Set_Port_Value(obj_ref,val_v,4);

			a_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(a));
			obj_ref := Pack_String_To_Vhpi_String("a");
			Vhpi_Set_Port_Value(obj_ref,a_v,4);

			b_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(b));
			obj_ref := Pack_String_To_Vhpi_String("b");
			Vhpi_Set_Port_Value(obj_ref,b_v,4);

			c_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(c));
			obj_ref := Pack_String_To_Vhpi_String("c");
			Vhpi_Set_Port_Value(obj_ref,c_v,4);

			d_v := Pack_String_To_Vhpi_String(Convert_SLV_To_String(d));
			obj_ref := Pack_String_To_Vhpi_String("d");
			Vhpi_Set_Port_Value(obj_ref,d_v,4);

			report "Iteration - "& integer'image(count) severity note;
			count := count + 1;
		end loop;
	end process;

end architecture;