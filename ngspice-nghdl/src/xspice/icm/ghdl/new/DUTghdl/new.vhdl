library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity m21 is
  port (
    D0 : in std_logic;
    D1 : in std_logic;
    S : in std_logic;
    Y : out std_logic);
end entity; 


architecture from_verilog of m21 is
begin
process (D1,D0,S) is
begin

  Y <= '1';
  end process;
end architecture;

