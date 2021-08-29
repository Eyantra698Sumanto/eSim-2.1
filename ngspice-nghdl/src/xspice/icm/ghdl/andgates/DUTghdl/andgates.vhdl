-- This VHDL was converted from Verilog using the
-- Icarus Verilog VHDL Code Generator 10.1 (stable) ()

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- Generated from Verilog module AND_2_behavioral (design.v:1)
entity AND_2_behavioral is
  port (
    A : in std_logic;
    B : in std_logic;
    Y : out std_logic
  );
end entity; 

-- Generated from Verilog module AND_2_behavioral (design.v:1)
architecture from_verilog of AND_2_behavioral is
  signal Y_Reg : std_logic;
begin
  Y <= Y_Reg;
  
  -- Generated from always process in AND_2_behavioral (design.v:2)
  process (B, A) is
  begin
    if (A = '1') and (B = '1') then
      Y_Reg <= '1';
    else
      Y_Reg <= '0';
    end if;
  end process;
end architecture;

