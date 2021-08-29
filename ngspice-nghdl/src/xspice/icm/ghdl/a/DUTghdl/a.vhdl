library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity deccounter is
port (clk1, rst,f,g,h:in std_logic;
      val,a,b,c,d:out std_logic_vector(3 downto 0));
end deccounter;

architecture behave of deccounter is
signal v:unsigned(3 downto 0);
begin
process(clk,rst)
        begin
             if rst='1' then v<=x"0";
             elsif rising_edge(clk) then
               if v="1010" then
               v<=x"0";
               else
               v<=v+1;
               end if;
             end if;
end process;
val<=std_logic_vector(v);
end behave;