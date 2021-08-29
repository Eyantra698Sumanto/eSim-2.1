#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/up_counter/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a up_counter.vhdl &&
ghdl -a up_counter_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o up_counter_tb &&
./up_counter_tb