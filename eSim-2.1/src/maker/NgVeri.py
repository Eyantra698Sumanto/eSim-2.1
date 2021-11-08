from PyQt5 import QtCore, QtWidgets
from . import Maker
from . import ModelGeneration
import os
import subprocess
from configuration.Appconfig import Appconfig



class NgVeri(QtWidgets.QWidget):

    def __init__(self,filecount):
        print(self)
        QtWidgets.QWidget.__init__(self)
        #Maker.addverilog(self)
        self.count=0
        self.text= "" 
        self.entry_var = {}
        self.createAnalysisWidget()       
        self.fname=""
        self.filecount=filecount
        self.obj_Appconfig = Appconfig()


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
        #b=Maker.Maker(self)
        if len(Maker.verilogFile)<(self.filecount+1):
            reply=QtWidgets.QMessageBox.critical(
                    None, "Error Message",
                    "<b>Error: No Verilog File Chosen. Please chose a Verilog file in Makerchip Tab</b>",
                    QtWidgets.QMessageBox.Ok
                )
            if reply == QtWidgets.QMessageBox.Ok:
                self.obj_Appconfig.print_error('No VerilogFile. Please add a File in Makerchip Tab')
                return



        self.fname=Maker.verilogFile[self.filecount]
        model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[2])
        model.verilogfile()
        error=model.verilogParse()
        if not error is "Error":           
            model.getPortInfo()
            model.cfuncmod()
            model.ifspecwrite()
            model.sim_main_header()
            model.sim_main()
            model.modpathlst()
            model.run_verilator()
            model.make_verilator()
            model.copy_verilator()
            model.runMake()
            model.runMakeInstall()


        
    def addfile(self):
        if len(Maker.verilogFile)<(self.filecount+1):
            reply=QtWidgets.QMessageBox.critical(
                    None, "Error Message",
                    "<b>Error: No Verilog File Chosen. Please chose a Verilog file in Makerchip Tab</b>",
                    QtWidgets.QMessageBox.Ok
                )
            if reply == QtWidgets.QMessageBox.Ok:
                self.obj_Appconfig.print_error('No VerilogFile. Please chose a Verilog in Makerchip Tab')
                return
        self.fname=Maker.verilogFile[self.filecount]
        model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[2])
        model.verilogfile()
        model.addfile()
        



    def createoptionsBox(self):

        self.optionsbox = QtWidgets.QGroupBox()
        self.optionsbox.setTitle("Select Options")
        self.optionsgrid = QtWidgets.QGridLayout()

        self.optionsgroupbtn = QtWidgets.QButtonGroup()

        self.addverilogbutton = QtWidgets.QPushButton("Run Verilog to NgSpice Converter")
        self.optionsgroupbtn.addButton(self.addverilogbutton)
        self.addverilogbutton.clicked.connect(self.addverilog)
        self.optionsgrid.addWidget(self.addverilogbutton, 0, 1)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)

        self.addfilebutton = QtWidgets.QPushButton("Adding Other files")
        self.optionsgroupbtn.addButton(self.addfilebutton)
        self.addfilebutton.clicked.connect(self.addfile)
        self.optionsgrid.addWidget(self.addfilebutton, 0, 2)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        return self.optionsbox

    


   

    def creategroup(self):

        self.trbox = QtWidgets.QGroupBox()
        self.trbox.setTitle("Terminal")
        # self.trbox.setDisabled(True)
        # self.trbox.setVisible(False)
        self.trgrid = QtWidgets.QGridLayout()
        self.trbox.setLayout(self.trgrid)



        self.start = QtWidgets.QLabel("Terminal")
        #self.trgrid.addWidget(self.start, 2,0)
        self.entry_var[self.count] = QtWidgets.QTextEdit()
        self.entry_var[self.count].setReadOnly(1)
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



