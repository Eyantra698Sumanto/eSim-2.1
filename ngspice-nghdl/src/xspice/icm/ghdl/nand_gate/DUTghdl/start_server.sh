#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/nand_gate/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a nand_gate.vhdl &&
ghdl -a nand_gate_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o nand_gate_tb &&
./nand_gate_tb --vcd=nand_gate_tb.vcd