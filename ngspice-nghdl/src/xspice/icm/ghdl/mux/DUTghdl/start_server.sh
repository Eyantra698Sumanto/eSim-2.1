#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/mux/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a mux.vhdl &&
ghdl -a mux_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o mux_tb &&
./mux_tb --vcd=mux_tb.vcd
gtkwave mux_tb.vcd