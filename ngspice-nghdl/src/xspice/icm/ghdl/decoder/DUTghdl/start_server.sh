#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/decoder/DUTghdl/
chmod 775 sock_pkg_create.sh &&
./sock_pkg_create.sh $1 $2 &&
ghdl -i *.vhdl &&
ghdl -a *.vhdl &&
ghdl -a decoder.vhdl &&
ghdl -a decoder_tb.vhdl  &&
ghdl -e -Wl,ghdlserver.o decoder_tb &&
./decoder_tb --vcd=decoder_tb.vcd
gtkwave decoder_tb.vcd