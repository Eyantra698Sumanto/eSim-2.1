#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/pwmdecrement/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a pwmdecrement.vhdl &&
ghdl -a pwmdecrement_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o pwmdecrement_tb &&
./pwmdecrement_tb --vcd=pwmdecrement_tb.vcd
gtkwave pwmdecrement_tb.vcd