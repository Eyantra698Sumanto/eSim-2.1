--  GHDL Run Time (GRT) - Symbolization using jit interface.
--  Copyright (C) 2015 Tristan Gingold
--
--  GHDL is free software; you can redistribute it and/or modify it under
--  the terms of the GNU General Public License as published by the Free
--  Software Foundation; either version 2, or (at your option) any later
--  version.
--
--  GHDL is distributed in the hope that it will be useful, but WITHOUT ANY
--  WARRANTY; without even the implied warranty of MERCHANTABILITY or
--  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
--  for more details.
--
--  You should have received a copy of the GNU General Public License
--  along with GCC; see the file COPYING.  If not, write to the Free
--  Software Foundation, 59 Temple Place - Suite 330, Boston, MA
--  02111-1307, USA.
--
--  As a special exception, if other files instantiate generics from this
--  unit, or you link this unit with other files to produce an executable,
--  this unit does not by itself cause the resulting executable to be
--  covered by the GNU General Public License. This exception does not
--  however invalidate any other reasons why the executable file might be
--  covered by the GNU Public License.

with System;

package Grt.Backtraces.Jit is
   procedure Symbolizer (Pc : System.Address;
                         Filename : out System.Address;
                         Lineno : out Natural;
                         Subprg : out System.Address);

   --  In order to keep the package preelaborated, use an indirection.
   type Symbolizer_Acc is access procedure (Pc : System.Address;
                                            Filename : out System.Address;
                                            Lineno : out Natural;
                                            Subprg : out System.Address);

   Symbolizer_Proc : Symbolizer_Acc;

end Grt.Backtraces.Jit;