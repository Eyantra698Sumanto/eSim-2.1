from PyQt5 import QtCore, QtWidgets
from PyQt5.QtCore import  QThread, Qt
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QVBoxLayout
from configuration.Appconfig import Appconfig
import os
import subprocess
import inotify.adapters
from xml.etree import ElementTree as ET
verilogFile=[]
toggle_flag=[]
class Maker(QtWidgets.QWidget):

    def __init__(self,filecount):
        print(self)
        QtWidgets.QWidget.__init__(self)
        self.count = 0
        self.text= "" 
        self.filecount=filecount
        self.entry_var = {}
        self.createAnalysisWidget()
        self.obj_Appconfig = Appconfig()
  

    def createAnalysisWidget(self):

        self.grid = QtWidgets.QGridLayout()
        self.setLayout(self.grid)

        self.grid.addWidget(self.createoptionsBox(), 0, 0, QtCore.Qt.AlignTop)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
       
        self.show()

    def addverilog(self):

        init_path = '../../../'
        if os.name == 'nt':
            init_path = ''
        self.verilogfile = QtCore.QDir.toNativeSeparators(
        QtWidgets.QFileDialog.getOpenFileName(
                self, "Open verilog Directory",
                    init_path + "home","*v"
               )[0]
            )
        if self.verilogfile=="":
            self.verilogfile = self.entry_var[0].text()

        if self.verilogfile=="":
            reply=QtWidgets.QMessageBox.critical(
                    None, "Error Message",
                    "<b>Error: No Verilog File Chosen. Please chose a Verilog file</b>",
                    QtWidgets.QMessageBox.Ok | QtWidgets.QMessageBox.Cancel
                )
            if reply == QtWidgets.QMessageBox.Ok:
                self.addverilog()
                self.obj_Appconfig.print_info('Add Verilog File Called')

            elif reply == QtWidgets.QMessageBox.Cancel:
                self.obj_Appconfig.print_info('No Verilog File Chosen')

        self.text = open(self.verilogfile).read()
        self.entry_var[0].setText(self.verilogfile)
        self.entry_var[1].setText(self.text)
        global verilogFile
        if len(verilogFile)<(self.filecount+1):
            verilogFile.append(self.verilogfile)
        else:
            verilogFile[self.filecount]=self.verilogfile
            toggle_flag.remove(self.refreshoption)

        self.notify=notify(self.verilogfile,self.refreshoption)#,self.obj_Appconfig)
        self.notify.start()
        #open("filepath.txt","w").write(self.verilogfile)
        
    def refresh(self):
        self.text = open(self.verilogfile).read()
        self.entry_var[1].setText(self.text)
        print("NgVeri File: "+self.verilogfile+" Refreshed")
        self.obj_Appconfig.print_info("NgVeri File: "+self.verilogfile+" Refreshed")
        self.notify.start()
        global toggle_flag
        toggle_flag.remove(self.refreshoption)

    def save(self):
        wr=self.entry_var[1].toPlainText()
        open(self.verilogfile,"w+").write(wr)


    def runverilog(self):        
        init_path = '../../'
        if os.name == 'nt':
            init_path = ''
        try:      
            print("Running Makerchip..............................")        
            #self.file = open(self.verilogfile,"w")
            #self.file.write(self.entry_var[1].toPlainText())
            #self.file.close()
            self.process = QtCore.QProcess(self)
            cmd='makerchip '+self.verilogfile
            print(self.verilogfile)
            self.process.start(cmd)  
            print("Makerchip command process pid ---------- >", self.process.pid())
        #   initial = self.read_file()
            

        except BaseException:
            self.msg = QtWidgets.QErrorMessage(self)
            self.msg.setModal(True)
            self.msg.setWindowTitle("Error Message")
            self.msg.showMessage(
                "No Verilog File Chosen.")
            self.msg.exec_()
            print("No Verilog File Chosen")
        # while True:
        #     current = self.read_file()
        #     if initial != current:
        #         for line in current:
        #             if line not in initial:
        #                 print(line)
        #         initial = current
        # self.processfile = QtCore.QProcess(self)
        # self.processfile.start("python3 notify.py")  
        # print(self.processfile.readChannel())

        



    def createoptionsBox(self):

        self.optionsbox = QtWidgets.QGroupBox()
        self.optionsbox.setTitle("Select Options")
        self.optionsgrid = QtWidgets.QGridLayout()
        #self.optionsbox2 = QtWidgets.QGroupBox()
        #self.optionsbox2.setTitle("Note: Please save the file once edited")
        #self.optionsgrid2 = QtWidgets.QGridLayout()
        self.optionsgroupbtn = QtWidgets.QButtonGroup()

        self.addoptions = QtWidgets.QPushButton("Add Top Level Verilog file")
        self.optionsgroupbtn.addButton(self.addoptions)
        self.addoptions.clicked.connect(self.addverilog)
        self.optionsgrid.addWidget(self.addoptions, 0, 1)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        self.refreshoption = QtWidgets.QPushButton("Refresh")
        self.optionsgroupbtn.addButton(self.refreshoption)
        self.refreshoption.clicked.connect(self.refresh)
        self.optionsgrid.addWidget(self.refreshoption, 0, 2)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        self.saveoption = QtWidgets.QPushButton("Save")
        self.optionsgroupbtn.addButton(self.saveoption)
        self.saveoption.clicked.connect(self.save)
        self.optionsgrid.addWidget(self.saveoption, 0, 3)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        self.runoptions = QtWidgets.QPushButton("Edit in Makerchip")
        self.optionsgroupbtn.addButton(self.runoptions)
        self.runoptions.clicked.connect(self.runverilog)
        self.optionsgrid.addWidget(self.runoptions, 0, 4)
        self.optionsbox.setLayout(self.optionsgrid)
        self.grid.addWidget(self.creategroup(), 1, 0, 5, 0)
        
        return self.optionsbox

    


   

    def creategroup(self):

        self.trbox = QtWidgets.QGroupBox()
        self.trbox.setTitle(".tlv file")
        # self.trbox.setDisabled(True)
        # self.trbox.setVisible(False)
        self.trgrid = QtWidgets.QGridLayout()
        self.trbox.setLayout(self.trgrid)

        self.start = QtWidgets.QLabel("Path to .tlv file")
        self.trgrid.addWidget(self.start, 1, 0)
        self.count = 0
        self.entry_var[self.count] = QtWidgets.QLineEdit(self)
        self.trgrid.addWidget(self.entry_var[self.count], 1, 1)
        self.entry_var[self.count].setMaximumWidth(1000)
        self.count += 1


        
        # CSS
        self.trbox.setStyleSheet(" \
        QGroupBox { border: 1px solid gray; border-radius: \
        9px; margin-top: 0.5em; } \
        QGroupBox::title { subcontrol-origin: margin; left: \
         10px; padding: 0 3px 0 3px; } \
        ")

        self.start = QtWidgets.QLabel(".tlv code")
        #self.start2 = QtWidgets.QLabel("Note: Please save the file once edited")
        #self.start2.setStyleSheet("background-color: red")
        self.trgrid.addWidget(self.start, 2,0)
        #self.trgrid.addWidget(self.start2, 3,0)
        self.entry_var[self.count] = QtWidgets.QTextEdit()
        self.trgrid.addWidget(self.entry_var[self.count], 2,1)
        self.entry_var[self.count].setMaximumWidth(1000)
        self.entry_var[self.count].setMaximumHeight(1000)
        #self.entry_var[self.count].textChanged.connect(self.save)
        self.count += 1



        # CSS
        self.trbox.setStyleSheet(" \
        QGroupBox { border: 1px solid gray; border-radius: \
        9px; margin-top: 0.5em; } \
        QGroupBox::title { subcontrol-origin: margin; left: \
         10px; padding: 0 3px 0 3px; } \
        ")



        return self.trbox

class notify(QThread):
    def __init__(self,verilogfile,refreshoption):#,obj_Appconfig):
        QThread.__init__(self)
        self.verilogfile=verilogfile
        self.refreshoption=refreshoption
        self.obj_Appconfig = Appconfig()
        self.toggle=toggle(self.refreshoption)


    def __del__(self):
        self.wait()

    def run(self):
        i = inotify.adapters.Inotify()

        i.add_watch(self.verilogfile)

        for event in i.event_gen():
            if event!=None:
                if "IN_CLOSE_WRITE" in event[1] :
                        msg = QtWidgets.QErrorMessage()
                        msg.setModal(True)
                        msg.setWindowTitle("eSim Message")
                        msg.showMessage(
                            "NgVeri File: "+self.verilogfile+" modified. Please click on Refresh")
                        msg.exec_()
                        print("NgVeri File: "+self.verilogfile+" modified. Please click on Refresh")
                        # self.obj_Appconfig.print_info("NgVeri File: "+self.verilogfile+" modified. Please click on Refresh")
                        global toggle_flag
                        toggle_flag.append(self.refreshoption)
                        #i.rm_watch()
                        self.toggle.start()
                        break
class toggle(QThread):
    def __init__(self,option):
        QThread.__init__(self)
        self.option=option
        


    def __del__(self):
        self.wait()

    def run(self):

        while True:
            self.option.setStyleSheet("background-color: red")
            self.sleep(1)
            self.option.setStyleSheet("background-color: none")
            self.sleep(1)
            print(toggle_flag)
            if not self.option in toggle_flag:
                break
                
                