from PyQt5 import QtCore, QtWidgets
from . import TrackWidget
import os
import subprocess
from xml.etree import ElementTree as ET


class NgVeri(QtWidgets.QWidget):

    def __init__(self, clarg1):
        self.clarg1 = clarg1
        QtWidgets.QWidget.__init__(self)
        self.track_obj = TrackWidget.TrackWidget()
        self.count = 0
        self.text= "" 
        self.entry_var = {}
        self.createAnalysisWidget()

    def createAnalysisWidget(self):

        self.grid = QtWidgets.QGridLayout()
        self.setLayout(self.grid)

        self.grid.addWidget(self.createoptionsBox(), 0, 0, QtCore.Qt.AlignTop)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
       
        self.show()

    def addverilog(self):


        init_path = '../../../'
        if os.name == 'nt':
            init_path = ''
        self.verilogfile = QtCore.QDir.toNativeSeparators(
        QtWidgets.QFileDialog.getOpenFileName(
                self, "Open verilog Directory",
                    init_path + "home", "*.tlv"
               )[0]
            )
        self.text = open(self.verilogfile).read()
        self.entry_var[0].setText(self.verilogfile)
        self.entry_var[1].setText(self.text)
        

    def runverilog(self):        
        init_path = '../../'
        if os.name == 'nt':
            init_path = ''
        try:      
            print("Running Makerchip..............................")        
            self.file = open(init_path+"design.tlv","w")
            self.file.write(self.entry_var[1].toPlainText())
            self.file.close()
            self.process = QtCore.QProcess(self)
            cmd='makerchip '+init_path+"design.tlv"
            self.process.start(cmd)  
            print("Makerchip command process pid ---------- >", self.process.pid())
        except BaseException:
            self.msg = QtWidgets.QErrorMessage(self)
            self.msg.setModal(True)
            self.msg.setWindowTitle("Error Message")
            self.msg.showMessage(
                "No .tlv File Chosen.")
            self.msg.exec_()
            print("No .tlv File Chosen")
        



    def createoptionsBox(self):

        self.optionsbox = QtWidgets.QGroupBox()
        self.optionsbox.setTitle("Select Options")
        self.optionsgrid = QtWidgets.QGridLayout()

        self.optionsgroupbtn = QtWidgets.QButtonGroup()

        self.addoptions = QtWidgets.QPushButton("Run Verilog to NgSpice Converter")
        self.optionsgroupbtn.addButton(self.addoptions)
        self.addoptions.clicked.connect(self.addverilog)
        self.optionsgrid.addWidget(self.addoptions, 0, 1)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)

        return self.optionsbox

    


   

    def creategroup(self):

        self.trbox = QtWidgets.QGroupBox()
        self.trbox.setTitle("Console")
        # self.trbox.setDisabled(True)
        # self.trbox.setVisible(False)
        self.trgrid = QtWidgets.QGridLayout()
        self.trbox.setLayout(self.trgrid)



        self.start = QtWidgets.QLabel("Console")
        #self.trgrid.addWidget(self.start, 2,0)
        self.entry_var[self.count] = QtWidgets.QTextEdit()
        self.trgrid.addWidget(self.entry_var[self.count], 2,1)
        self.entry_var[self.count].setMaximumWidth(1000)
        self.entry_var[self.count].setMaximumHeight(1000)
        self.count += 1


        
        # CSS
        self.trbox.setStyleSheet(" \
        QGroupBox { border: 1px solid gray; border-radius: \
        9px; margin-top: 0.5em; } \
        QGroupBox::title { subcontrol-origin: margin; left: \
         10px; padding: 0 3px 0 3px; } \
        ")



        return self.trbox


