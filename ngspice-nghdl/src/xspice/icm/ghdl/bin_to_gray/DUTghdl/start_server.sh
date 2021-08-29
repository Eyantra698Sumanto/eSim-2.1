#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/bin_to_gray/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a bin_to_gray.vhdl &&
ghdl -a bin_to_gray_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o bin_to_gray_tb &&
./bin_to_gray_tb