import os 
import subprocess
import tempfile

class Modelhex:
    def __init__( self ):
        '''
        Initializes the two members the class holds:
        the file name and its contents.
        '''
        self.fileName = None
        self.fileContent = ""

    def isValid( self, fileName ):
        '''
        returns True if the file exists and can be
        opened.  Returns False otherwise.
        '''
        try: 
            file = open( fileName, 'r' )
            file.close()
            return True
        except:
            return False

    def setFileName( self, fileName ):
        '''
        sets the member fileName to the value of the argument
        if the file exists.  Otherwise resets both the filename
        and file contents members.
        '''
        if self.isValid( fileName ):
            self.fileName = fileName
            self.fileContents = open( fileName, 'r' ).read()
        else:
            self.fileContents = ""
            self.fileName = ""
            
    def getFileName( self ):
        '''
        Returns the name of the file name member.
        '''
        return self.fileName

    def getFileContents( self ):
        '''
        Returns the contents of the file if it exists, otherwise
        returns an empty string.
        '''
        return self.fileContents
    
    def writeDoc( self, text ):
        '''
        Writes the string that is passed as argument to a
        a text file with name equal to the name of the file
        that was read, plus the suffix ".bak"
        '''
        if self.isValid( self.fileName ):
            base = os.path.basename(self.fileName)
            fileName = os.path.splitext(base)[0]
            #print(self.fileName)
            path = os.path.split(self.fileName)
            attiny_85_path = "/home/jay/ngspice-nghdl/src/xspice/icm/ghdl/attiny_85_nghdl/DUTghdl"
            subprocess.call(['bash','script.sh',path[0], fileName, attiny_85_path])
            #subprocess.call(["./script.sh"])
            

            
