#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/pwmincrement/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a pwmincrement.vhdl &&
ghdl -a pwmincrement_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o pwmincrement_tb &&
./pwmincrement_tb --vcd=pwmincrement_tb.vcd
gtkwave pwmincrement_tb.vcd