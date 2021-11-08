#!/bin/bash

###This server run ghdl testebench for infinite time till ngspice send END signal to stop it
cd /home/sumanto/ngspice-nghdl/src/xspice/icm/Ngveri/dff3/
./obj_dir/Vdff $1 $2 