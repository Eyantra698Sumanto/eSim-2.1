#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/cla_adder/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a cla_adder.vhdl &&
ghdl -a cla_adder_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o cla_adder_tb &&
./cla_adder_tb