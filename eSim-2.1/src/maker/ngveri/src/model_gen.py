import re
import os
from configparser import SafeConfigParser

class ModelGeneration:

    def __init__(self, file):

        # Script starts from here
        print("Arguement is : ", file)
        self.fname = os.path.basename(file)
        print("Verilog filename is : ", self.fname)
        self.home = os.path.expanduser("~")
        self.parser = SafeConfigParser()
        self.parser.read(os.path.join(
            self.home, os.path.join('.nghdl', 'config.ini')))
        self.ngspice_home = self.parser.get('NGSPICE', 'NGSPICE_HOME')
        self.release_dir = self.parser.get('NGSPICE', 'RELEASE')
        self.src_home = self.parser.get('SRC', 'SRC_HOME')
        self.licensefile = self.parser.get('SRC', 'LICENSE')
        self.digital_home = self.parser.get('NGSPICE', 'DIGITAL_MODEL')
        self.digital_home.split("/GHDL", 1)[0]
        self.digital_home=self.digital_home+"/Ngveri"
        # #### Creating connection_info.txt file from verilog file #### #
        read_verilog = open(file, 'r')
        verilog_data = read_verilog.readlines()
        read_verilog.close()