# =========================================================================
#          FILE: kicadtoNgspice.py
#
#         USAGE: ---
#
#   DESCRIPTION: This define all configuration used in Application.
#
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: Fahim Khan, fahim.elex@gmail.com
#      MODIFIED: Rahul Paknikar, rahulp@iitb.ac.in
#  ORGANIZATION: eSim Team at FOSSEE, IIT Bombay
#       CREATED: Wednesday 04 March 2015
#      REVISION: Saturday 25 July 2020
# =========================================================================

import sys
import os
from PyQt5 import QtWidgets
from configuration.Appconfig import Appconfig
from projManagement.Validation import Validation
#from .Processing import PrcocessNetlist
from . import Maker
from . import NgVeri

from xml.etree import ElementTree as ET

filecount=0
class  makerchip(QtWidgets.QWidget):
    """
    - This class create KicadtoNgspice window.
    - And Call Convert function if convert button is pressed.
    - The convert function takes all the value entered by user and create
      a final netlist "*.cir.out".
    - This final netlist is compatible with Ngspice.
    - clarg1 is the path to the .cir file
    - clarg2 is either None or "sub" depending on the analysis type
    """

    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self)
        
        #filecount=int(open("a.txt",'r').read())
        print(filecount)
        #self.splitter.setOrientation(QtCore.Qt.Vertical)
        print("==================================")
        print("Makerchip and Verilog to Ngspice Converter")
        print("==================================")
        self.createMainWindow()

        

    def createMainWindow(self):
        """
        - This function create main window of KiCad to Ngspice converter
        - Two components
            - createcreateConvertWidget
            - Convert button => callConvert
        """
        self.vbox = QtWidgets.QVBoxLayout()
        self.hbox = QtWidgets.QHBoxLayout()
        self.hbox.addStretch(1)
        self.vbox.addWidget(self.createWidget())
        self.vbox.addLayout(self.hbox)

        self.setLayout(self.vbox)
        self.setWindowTitle("Makerchip and Verilog to Ngspice Converter")
        self.show()

    def createWidget(self):
        global obj_Maker
        global filecount
        self.convertWindow = QtWidgets.QWidget()
        
        self.MakerTab = QtWidgets.QScrollArea()
        obj_Maker = Maker.Maker(filecount)
        self.MakerTab.setWidget(obj_Maker)
        self.MakerTab.setWidgetResizable(True) 
	
        global obj_NgVeri
        self.NgVeriTab = QtWidgets.QScrollArea()
        obj_NgVeri = NgVeri.NgVeri(filecount)
        self.NgVeriTab.setWidget(obj_NgVeri)
        self.NgVeriTab.setWidgetResizable(True) 
        self.tabWidget = QtWidgets.QTabWidget() 
        self.tabWidget.addTab(self.MakerTab, "Makerchip")
        self.tabWidget.addTab(self.NgVeriTab, "NgVeri")
        self.tabWidget.currentChanged.connect(obj_Maker.refresh)
        self.mainLayout = QtWidgets.QVBoxLayout()
        self.mainLayout.addWidget(self.tabWidget)
        self.convertWindow.setLayout(self.mainLayout)
        self.convertWindow.show()
        filecount=filecount+1
        return self.convertWindow

    
