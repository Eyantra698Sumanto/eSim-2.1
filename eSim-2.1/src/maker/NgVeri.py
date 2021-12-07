# =========================================================================
#             FILE: NgVeri.py
#
#            USAGE: ---
#
#      DESCRIPTION: This define all components of the NgVeri Tab.
#
#          OPTIONS: ---
#     REQUIREMENTS: ---
#             BUGS: ---
#            NOTES: ---
#           AUTHOR: Sumanto Kar, jeetsumanto123@gmail.com, FOSSEE, IIT Bombay
# ACKNOWLEDGEMENTS: Rahul Paknikar, rahulp@iitb.ac.in, FOSSEE, IIT Bombay
#                   Digvjay Singh, chrl3hr5@gmail.com, FOSSEE, IIT Bombay
#                   Prof. Maheswari R., VIT Chennai
#     GUIDED BY: Steve Hoover, Founder Redwood EDA
#  ORGANIZATION: eSim Team at FOSSEE, IIT Bombay
#       CREATED: Monday 29, November 2021
#      REVISION: Monday 29, November 2021
# =========================================================================
from PyQt5 import QtCore, QtWidgets, QtGui
from . import Maker
from . import ModelGeneration
import os
import subprocess
from configuration.Appconfig import Appconfig
from configparser import SafeConfigParser
from configparser import ConfigParser



class NgVeri(QtWidgets.QWidget):

    def __init__(self,filecount):
        print(self)
        QtWidgets.QWidget.__init__(self)
        #Maker.addverilog(self)
        self.obj_Appconfig = Appconfig()
        self.home = os.path.expanduser("~")
        self.parser = SafeConfigParser()
        self.parser.read(os.path.join(
            self.home, os.path.join('.nghdl', 'config.ini')))
        self.ngspice_home = self.parser.get('NGSPICE', 'NGSPICE_HOME')
        self.release_dir = self.parser.get('NGSPICE', 'RELEASE')
        self.src_home = self.parser.get('SRC', 'SRC_HOME')
        self.licensefile = self.parser.get('SRC', 'LICENSE')
        self.digital_home = self.parser.get('NGSPICE', 'DIGITAL_MODEL')       
        self.digital_home=self.digital_home.split("/ghdl")[0]+"/Ngveri"
        self.count=0
        self.text= "" 
        self.entry_var = {}
        self.createAnalysisWidget()       
        self.fname=""
        self.filecount=filecount
        
        
       


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
        print(Maker.verilogFile)
        if Maker.verilogFile[self.filecount]=="":
            reply=QtWidgets.QMessageBox.critical(
                    None, "Error Message",
                    "<b>Error: No Verilog File Chosen. Please chose a Verilog file in Makerchip Tab</b>",
                    QtWidgets.QMessageBox.Ok
                )
            if reply == QtWidgets.QMessageBox.Ok:
                self.obj_Appconfig.print_error('No VerilogFile. Please add a File in Makerchip Tab')
                return



        self.fname=Maker.verilogFile[self.filecount]
        model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[0])
        file=(os.path.basename(self.fname)).split('.')[0]
        if self.entry_var[1].findText(file)==-1:
            self.entry_var[1].addItem(file)
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
                self.obj_Appconfig.print_error('No VerilogFile. Please chose a Verilog File in Makerchip Tab')
                return
        self.fname=Maker.verilogFile[self.filecount]
        model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[0])
        #model.verilogfile()
        model.addfile()

    def addfolder(self):
        if len(Maker.verilogFile)<(self.filecount+1):
            reply=QtWidgets.QMessageBox.critical(
                    None, "Error Message",
                    "<b>Error: No Verilog File Chosen. Please chose a Verilog file in Makerchip Tab</b>",
                    QtWidgets.QMessageBox.Ok
                )
            if reply == QtWidgets.QMessageBox.Ok:
                self.obj_Appconfig.print_error('No VerilogFile. Please chose a Verilog File in Makerchip Tab')
                return
        self.fname=Maker.verilogFile[self.filecount]
        model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[0])
        #model.verilogfile()
        model.addfolder()
        


    def clearTerminal(self):
        self.entry_var[0].setText("")
        
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

        self.addfilebutton = QtWidgets.QPushButton("Add Other file")
        self.optionsgroupbtn.addButton(self.addfilebutton)
        self.addfilebutton.clicked.connect(self.addfile)
        self.optionsgrid.addWidget(self.addfilebutton, 0, 2)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)

        self.addfolderbutton = QtWidgets.QPushButton("Add Folder")
        self.optionsgroupbtn.addButton(self.addfolderbutton)
        self.addfolderbutton.clicked.connect(self.addfolder)
        self.optionsgrid.addWidget(self.addfolderbutton, 0, 3)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)

        self.clearTerminalBtn = QtWidgets.QPushButton("Clear Terminal")
        self.optionsgroupbtn.addButton(self.clearTerminalBtn)
        self.clearTerminalBtn.clicked.connect(self.clearTerminal)
        self.optionsgrid.addWidget(self.clearTerminalBtn, 0, 4)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)


        
        
        return self.optionsbox

    def edit_modlst(self, text):
        if text=="Edit modlst":
            return
        index=self.entry_var[1].findText(text)
        self.entry_var[1].removeItem(index)
        self.entry_var[1].setCurrentIndex(0)
        ret = QtWidgets.QMessageBox.warning(
                None, "Warning", '''<b>Do you want to remove model:''' +
                text,
                QtWidgets.QMessageBox.Ok, QtWidgets.QMessageBox.Cancel
            )
        if ret == QtWidgets.QMessageBox.Ok:
            mod = open(self.digital_home+'/modpath.lst', 'r')
            data = mod.readlines()
            mod.close()

            data.remove(text+"\n")
            mod = open(self.digital_home+'/modpath.lst', 'w')
            for item in data:
                mod.write(item)
            self.fname=Maker.verilogFile[self.filecount]
            model=ModelGeneration.ModelGeneration(self.fname,self.entry_var[0])
            model.runMake()
            model.runMakeInstall()
            return

        else:
            return 

    def lint_off_edit(self, text):
        if text=="Edit lint_off":
            return
        index=self.entry_var[2].findText(text)
        self.entry_var[2].removeItem(index)
        self.entry_var[2].setCurrentIndex(0)
        ret = QtWidgets.QMessageBox.warning(
                None, "Warning", '''<b>Do you want to remove the lint off error:''' +
                text,
                QtWidgets.QMessageBox.Ok, QtWidgets.QMessageBox.Cancel
            )
        if ret == QtWidgets.QMessageBox.Ok:
            file = open("../maker/lint_off.txt", 'r')
            data = file.readlines()
            file.close()

            data.remove(text+"\n")
            file = open("../maker/lint_off.txt", 'w')
            for item in data:
                file.write(item)
            return

        else:
            return

    def add_lint_off(self):
        text=self.entry_var[3].text()
        
        if self.entry_var[2].findText(text)==-1:
            self.entry_var[2].addItem(text)
            file = open("../maker/lint_off.txt", 'a+')
            file.write(text+"\n")
            file.close()
        self.entry_var[3].setText("")
        



   

    def creategroup(self):

        self.trbox = QtWidgets.QGroupBox()
        self.trbox.setTitle("Terminal")
        # self.trbox.setDisabled(True)
        # self.trbox.setVisible(False)
        self.trgrid = QtWidgets.QGridLayout()
        self.trbox.setLayout(self.trgrid)
        self.count=0



        self.start = QtWidgets.QLabel("Terminal")
        #self.trgrid.addWidget(self.start, 2,0)
        self.entry_var[self.count] = QtWidgets.QTextEdit()
        self.entry_var[self.count].setReadOnly(1)
        self.trgrid.addWidget(self.entry_var[self.count], 1,1,5,3)
        self.entry_var[self.count].setMaximumWidth(1000)
        self.entry_var[self.count].setMaximumHeight(1000)
        self.count += 1
        
        self.entry_var[self.count] = QtWidgets.QComboBox()
        self.entry_var[self.count].addItem("Edit modlst")
        self.modlst= open(self.digital_home+'/modpath.lst', 'r')
        self.data=self.modlst.readlines()
        self.modlst.close()
        for item in self.data:
            if item != "\n":
                self.entry_var[self.count].addItem(item.strip())
        self.entry_var[self.count].activated[str].connect(self.edit_modlst)
        self.trgrid.addWidget(self.entry_var[self.count], 1,4,1,2)
        self.count += 1
        self.entry_var[self.count] = QtWidgets.QComboBox()
        self.entry_var[self.count].addItem("Edit lint_off")
        self.lint_off= open("../maker/lint_off.txt", 'r')
        self.data=self.lint_off.readlines()
        self.lint_off.close()
        for item in self.data:
            if item != "\n":
                self.entry_var[self.count].addItem(item.strip())
        self.entry_var[self.count].activated[str].connect(self.lint_off_edit)
        self.trgrid.addWidget(self.entry_var[self.count], 2,4,1,2)
        self.count += 1
        self.entry_var[self.count] = QtWidgets.QLineEdit(self)
        self.trgrid.addWidget(self.entry_var[self.count], 3,4)
        self.entry_var[self.count].setMaximumWidth(100)
        self.count += 1
        self.entry_var[self.count] = QtWidgets.QPushButton("Add Lint_Off")
        self.entry_var[self.count].setMaximumWidth(100)
        self.trgrid.addWidget(self.entry_var[self.count], 3,5)
        self.entry_var[self.count].clicked.connect(self.add_lint_off)

        self.count += 1


        
        # CSS
        self.trbox.setStyleSheet(" \
        QGroupBox { border: 1px solid gray; border-radius: \
        9px; margin-top: 0.5em; } \
        QGroupBox::title { subcontrol-origin: margin; left: \
         10px; padding: 0 3px 0 3px; } \
        ")



        return self.trbox



