#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/xor_gate/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a xor_gate.vhdl &&
ghdl -a xor_gate_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o xor_gate_tb &&
./xor_gate_tb