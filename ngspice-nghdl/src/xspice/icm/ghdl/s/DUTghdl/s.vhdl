Library ieee;
use ieee.std_logic_1164.all;



entity univ_shiftreg is
port(
	clk : in std_logic;
 	il : in std_logic;
 	ir : in std_logic;
	s : in std_logic_vector(1 downto 0);
	i : in std_logic_vector(3 downto 0);
	q : out std_logic_vector(3 downto 0));
end univ_shiftreg;
architecture Behavioral of univ_shiftreg is 
	signal qtmp : bit_vector(3 downto 0);
begin
process(clk)
begin 

if (clk = ‘1’  and clk’event) then 
case s is
when “00” => qtmp <= qtmp;
when “01” => qtmp <= i ;
when “10” => qtmp<=qtmp(2 downto 0) & ir;
when “11” => qtmp<= il & qtmp(3 downto 1);
when others => null;
end case;
end if;
end process;
q <= qtmp;
end Behavioral;