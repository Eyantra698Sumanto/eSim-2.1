import os
import sys
import shutil
import subprocess
from PyQt5 import QtGui, QtCore, QtWidgets
from configparser import ConfigParser
from Appconfig import Appconfig
from createkicad import AutoSchematic
import hdlparse.verilog_parser as vlog
fname='example.v'
with open(fname, 'rt') as fh:
  code = fh.read()

code=code.replace("wire","")
code=code.replace("reg","")
print(code)
vlog_ex = vlog.VerilogExtractor()
vlog_mods = vlog_ex.extract_objects_from_source(code)
f = open("connection_info.txt",'w')
for m in vlog_mods:
    for p in m.ports:
        if str(p.data_type)=="":
            p.data_type="1"
        else:
            x = p.data_type.split(":")
            print(x)
            y= x[0].split("[")
            z= x[1].split("]")
            z=int(y[1])-int(z[0])
            p.data_type=z+1
for m in vlog_mods:
    print('Module "{}":'.format(m.name))
    for p in m.generics:               
        print('\t{:20}{:8}{}'.format(p.name, p.mode, p.data_type))
    print('  Ports:')
    for p in m.ports:
        print('\t{:20}{:8}{}'.format(p.name, p.mode, p.data_type))
        f.write('\t{:20}{:8}{}\n'.format(p.name, p.mode, p.data_type))
f.close()


print("add")

modelname=str(m.name)
schematicLib = AutoSchematic()
schematicLib.init(modelname)
schematicLib.createkicad()
