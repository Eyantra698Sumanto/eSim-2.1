#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/xor1/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a xor1.vhdl &&
ghdl -a xor1_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o xor1_tb &&
./xor1_tb