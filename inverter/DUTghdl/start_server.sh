#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it

cd /home/sumanto/ngspice-nghdl/src/xspice/icm/ghdl/inverter/DUTghdl/
gcc server.c -o server
while true
do

./server
#./obj_dir/VConvert
done
#verilator 