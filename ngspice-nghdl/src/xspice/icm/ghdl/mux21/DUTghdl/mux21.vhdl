-- This VHDL was converted from Verilog using the
-- Icarus Verilog VHDL Code Generator 10.1 (stable) ()

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- Generated from Verilog module m21 (design.v:1)
entity mux21 is
  port (
    D0 : in std_logic;
    D1 : in std_logic;
    S : in std_logic;
    Y : out std_logic
  );
end entity; 

-- Generated from Verilog module m21 (design.v:1)
architecture from_verilog of mux21 is
  signal Sbar : std_logic;  -- Declared at design.v:5
  signal T1 : std_logic;  -- Declared at design.v:5
  signal T2 : std_logic;  -- Declared at design.v:5
begin
  T1 <= D1 and S;
  T2 <= D0 and Sbar;
  Sbar <= not S;
  Y <= T1 or T2;
end architecture;

