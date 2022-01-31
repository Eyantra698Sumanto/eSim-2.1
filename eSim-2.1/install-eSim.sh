#!/bin/bash 
#===============================================================================
#          FILE: install-eSim.sh
# 
#         USAGE: ./install-eSim.sh --install 
#                            OR
#                ./install-eSim.sh --uninstall
#                
#   DESCRIPTION: Installation script for eSim EDA Suite
#
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: Fahim Khan, Rahul Paknikar, Saurabh Bansode, Sumanto Kar
#  ORGANIZATION: eSim Team, FOSSEE, IIT Bombay
#       CREATED: Wednesday 15 July 2015 15:26
#      REVISION: Wednesday 05 January 2021 23:50
#===============================================================================

# All variables goes here
config_dir="$HOME/.esim"
config_file="config.ini"
eSim_Home=${PWD/#$HOME/'~'}/eSim-2.1/
ngspiceFlag=0

## All Functions goes here

error_exit() {
    echo -e "\n\nError! Kindly resolve above error(s) and try again."
    echo -e "\nAborting Installation...\n"
}


function createConfigFile
{

    # Creating config.ini file and adding configuration information
    # Check if config file is present
    if [ -d $config_dir ];then
        rm $config_dir/$config_file && touch $config_dir/$config_file
    else
        mkdir $config_dir && touch $config_dir/$config_file
    fi
    
    echo "[eSim]" >> $config_dir/$config_file
    echo "eSim_HOME = $eSim_Home" >> $config_dir/$config_file
    echo "LICENSE = %(eSim_HOME)s/LICENSE" >> $config_dir/$config_file
    echo "KicadLib = %(eSim_HOME)s/library/kicadLibrary.tar.xz" >> $config_dir/$config_file
    echo "IMAGES = %(eSim_HOME)s/images" >> $config_dir/$config_file
    echo "VERSION = %(eSim_HOME)s/VERSION" >> $config_dir/$config_file
    echo "MODELICA_MAP_JSON = %(eSim_HOME)s/library/ngspicetoModelica/Mapping.json" >> $config_dir/$config_file
    
}


function installNghdl
{

    echo "Installing NGHDL..........................."
    unzip -o nghdl.zip
    cd nghdl/
    chmod +x install-nghdl.sh

    # Do not trap on error of any command. Let NGHDL script handle its own errors.
    trap "" ERR

    ./install-nghdl.sh --install       # Install NGHDL
        
    # Set trap again to error_exit function to exit on errors
    trap error_exit ERR

    ngspiceFlag=1
    cd ..

}

function verilator
{   

    echo "Installing Verilator Dependencies..........................."
    if [[ -n "$(which apt-get 2> /dev/null)" ]]
    then
    # Ubuntu
        sudo apt-get install make autoconf g++ flex bison
    else [[ -n "$(which yum 2> /dev/null)" ]]
    # Ubuntu
        sudo yum install make autoconf flex bison which -y
        sudo yum groupinstall 'Development Tools'  -y
    fi
    echo "Installing Verilator..........................."
    sudo apt install -y curl
    curl https://www.veripool.org/ftp/verilator-4.210.tgz | tar -zx
    cd verilator-4.210
    ./configure
    make -j$(nproc)
    sudo make install
    echo "Removing the Unessential files in Verilator Folder..........................."
    rm -r docs
    rm -r examples
    rm -r include
    rm -r test_regress
    rm -r bin
    ls -1 | grep -E -v 'config.status|configure.ac|Makefile.in|verilator.1|configure|Makefile|src|verilator.pc' | xargs rm -f
    #sudo rm -v -r'!("config.status"|"configure.ac"|"Makefile.in"|"verilator.1"|"configure"|"Makefile"|"src"|"verilator.pc")'
}
function Ngveridependencies
{
    echo "Installing Chrome.........................."
    sudo apt install -y chromium-browser
    echo "Installing python3 pip.........................."
    sudo apt install python3-pip
    echo "Installing watchdog..........................."
    pip3 install watchdog
    echo "Installing HDLParse..........................."
    pip3 install hdlparse
    echo "Installing Makerchip-App..........................."
    pip3 install makerchip-app
    echo "Installing Sandpiper-Saas..........................."
    pip3 install sandpiper-saas

}
function addKicadPPA
{

    #sudo add-apt-repository ppa:js-reynaud/ppa-kicad
    kicadppa="reynaud/kicad-4"
    findppa=$(grep -h -r "^deb.*$kicadppa*" /etc/apt/sources.list* > /dev/null 2>&1 || test $? = 1)
    if [ -z "$findppa" ]; then
        echo "Adding KiCad-4 PPA to local apt-repository"
        if [[ $(lsb_release -rs) == 20.* ]]; then
            sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 83FBAD2D910F124E
            sudo add-apt-repository --yes "deb [trusted=yes] http://ppa.launchpad.net/js-reynaud/kicad-4/ubuntu bionic main"
            sudo touch /etc/apt/preferences.d/preferences
            echo "Package: kicad" | sudo tee -a /etc/apt/preferences.d/preferences > /dev/null
            echo "Pin: version 4.0.7*" | sudo tee -a /etc/apt/preferences.d/preferences > /dev/null
            echo "Pin-Priority: 501" | sudo tee -a /etc/apt/preferences.d/preferences > /dev/null
            sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 3B4FE6ACC0B21F32
            sudo add-apt-repository --yes "deb http://archive.ubuntu.com/ubuntu/ bionic main universe"
        else
            sudo add-apt-repository --yes ppa:js-reynaud/kicad-4
        fi
    else
        echo "KiCad-4 is available in synaptic"
    fi

}


function installDependency
{

    set +e      # Temporary disable exit on error
    trap "" ERR # Do not trap on error of any command

	#Update apt repository
	echo "Updating apt index files..................."
    sudo apt-get update
    
    set -e      # Re-enable exit on error
    trap error_exit ERR
    
    echo "Installing Xterm..........................."
    sudo apt-get install -y xterm
    
    echo "Installing PyQt5..........................."
    sudo apt-get install -y python3-psutil
    
    echo "Installing PyQt5..........................."
    sudo apt-get install -y python3-pyqt5

    echo "Installing Matplotlib......................"
    sudo apt-get install -y python3-matplotlib

    if [[ $(lsb_release -rs) != 16.* ]]; then
	    echo "Installing Distutils......................."
	    sudo apt-get install -y python3-distutils
	fi

    echo "Installing KiCad..........................."
    sudo apt-get install -y --no-install-recommends kicad=4.0.7*
    if [[ $(lsb_release -rs) == 20.* ]]; then
        sudo add-apt-repository -ry "deb http://archive.ubuntu.com/ubuntu/ bionic main universe"
    fi

}


function copyKicadLibrary
{

    if [ -d ~/.config/kicad ];then
        echo "kicad folder already exists"
    else 
        echo ".config/kicad does not exist"
        mkdir ~/.config/kicad
    fi

    # Dump KiCad config path
    echo "$HOME/.config/kicad" > $eSim_Home/library/supportFiles/kicad_config_path.txt

    #Copy fp-lib-table for switching modes
    cp -r library/supportFiles/fp-lib-table ~/.config/kicad/
    cp -r library/supportFiles/fp-lib-table-online ~/.config/kicad/
    echo "fp-lib-table copied in the directory"

    #Extract custom KiCad Library
    tar -xJf library/kicadLibrary.tar.xz

    #Copy KiCad libraries
    echo "Copying KiCad libraries...................."

    sudo cp -r kicadLibrary/library /usr/share/kicad/
    sudo cp -r kicadLibrary/modules /usr/share/kicad/    
    sudo cp -r kicadLibrary/template/* /usr/share/kicad/template/

    #Copy KiCad library made for eSim
    sudo cp -r kicadLibrary/kicad_eSim-Library/* /usr/share/kicad/library/

    # Full path of 'kicad.pro file'
    KICAD_PRO="/usr/share/kicad/template/kicad.pro"
    KICAD_ORIGINAL="/usr/share/kicad/template/kicad.pro.original"

    if [ -f "$KICAD_ORIGINAL" ];then
        echo "kicad.pro.original file found"
        sudo cp -rv kicadLibrary/template/kicad.pro ${KICAD_PRO}
    else 
        echo "Making copy of original file"
        sudo cp -rv ${KICAD_PRO}{,.original}                                             
        sudo cp -rv kicadLibrary/template/kicad.pro ${KICAD_PRO}
    fi

    set +e      # Temporary disable exit on error
    trap "" ERR # Do not trap on error of any command
    
    # Remove extracted KiCad Library - not needed anymore
    rm -rf kicadLibrary

    set -e      # Re-enable exit on error
    trap error_exit ERR

    #Change ownership from Root to the User
    sudo chown -R $USER:$USER /usr/share/kicad/library/

}


function createDesktopStartScript
{    
	# Generating new esim-start.sh
    echo '#!/bin/bash' > esim-start.sh
    echo "cd $eSim_Home/src/frontEnd" >> esim-start.sh
    echo "python3 Application.py" >> esim-start.sh
    
    # Make it executable
    sudo chmod 755 esim-start.sh
    # Copy esim start script
    sudo cp -vp esim-start.sh /usr/bin/esim
    # Remove local copy of esim start script
    rm esim-start.sh

    # Generating esim.desktop file
    echo "[Desktop Entry]" > esim.desktop
    echo "Version=1.0" >> esim.desktop
    echo "Name=eSim" >> esim.desktop
    echo "Comment=EDA Tool" >> esim.desktop
    echo "GenericName=eSim" >> esim.desktop
    echo "Keywords=eda-tools" >> esim.desktop
    echo "Exec=esim %u" >> esim.desktop
    echo "Terminal=true" >> esim.desktop
    echo "X-MultipleArgs=false" >> esim.desktop
    echo "Type=Application" >> esim.desktop
    getIcon="$config_dir/logo.png"
    echo "Icon=$getIcon" >> esim.desktop
    echo "Categories=Development;" >> esim.desktop
    echo "MimeType=text/html;text/xml;application/xhtml+xml;application/xml;application/rss+xml;application/rdf+xml;image/gif;image/jpeg;image/png;x-scheme-handler/http;x-scheme-handler/https;x-scheme-handler/ftp;x-scheme-handler/chrome;video/webm;application/x-xpinstall;" >> esim.desktop
    echo "StartupNotify=true" >> esim.desktop

    # Make esim.desktop file executable
    sudo chmod 755 esim.desktop
    # Copy desktop icon file to share applications
    sudo cp -vp esim.desktop /usr/share/applications/
    # Copy desktop icon file to Desktop
    cp -vp esim.desktop $HOME/Desktop/

    set +e      # Temporary disable exit on error
    trap "" ERR # Do not trap on error of any command

    # Check if the target OS is Ubuntu 18 or not
    if [[ $(lsb_release -rs) == 18.* || $(lsb_release -rs) == 20.* ]]; then
        # Make esim.desktop file as trusted application
        gio set $HOME/Desktop/esim.desktop "metadata::trusted" true
        # Set Permission and Execution bit
    	chmod a+x $HOME/Desktop/esim.desktop
    fi

    # Remove local copy of esim.desktop file
    rm esim.desktop

    set -e      # Re-enable exit on error
    trap error_exit ERR

    # Copying logo.png to .esim directory to access as icon
    cp -vp images/logo.png $config_dir

}


####################################################################
#                   MAIN START FROM HERE                           #
####################################################################

### Checking if file is passsed as argument to script

if [ "$#" -eq 1 ];then
    option=$1
else
    echo "USAGE : "
    echo "./install-eSim.sh --install"
    echo "./install-eSim.sh --uninstall"
    exit 1;
fi

## Checking flags

if [ $option == "--install" ];then

    set -e  # Set exit option immediately on error
    set -E  # inherit ERR trap by shell functions

    # Trap on function error_exit before exiting on error
    trap error_exit ERR


    echo "Enter proxy details if you are connected to internet thorugh proxy"
    
    echo -n "Is your internet connection behind proxy? (y/n): "
    read getProxy
    if [ $getProxy == "y" -o $getProxy == "Y" ];then
            echo -n 'Proxy Hostname :'
            read proxyHostname

            echo -n 'Proxy Port :'
            read proxyPort

            echo -n username@$proxyHostname:$proxyPort :
            read username

            echo -n 'Password :'
            read -s passwd

            unset http_proxy
            unset https_proxy
            unset HTTP_PROXY
            unset HTTPS_PROXY
            unset ftp_proxy
            unset FTP_PROXY

            export http_proxy=http://$username:$passwd@$proxyHostname:$proxyPort
            export https_proxy=http://$username:$passwd@$proxyHostname:$proxyPort
            export https_proxy=http://$username:$passwd@$proxyHostname:$proxyPort
            export HTTP_PROXY=http://$username:$passwd@$proxyHostname:$proxyPort
            export HTTPS_PROXY=http://$username:$passwd@$proxyHostname:$proxyPort
            export ftp_proxy=http://$username:$passwd@$proxyHostname:$proxyPort
            export FTP_PROXY=http://$username:$passwd@$proxyHostname:$proxyPort

            echo "Install with proxy"
            # Calling functions
            createConfigFile
            addKicadPPA
            installDependency
            copyKicadLibrary
            installNghdl
            createDesktopStartScript
	    verilator
	    Ngveridependencies

    elif [ $getProxy == "n" -o $getProxy == "N" ];then
            echo "Install without proxy"
            
            # Calling functions
            createConfigFile
            addKicadPPA
            installDependency
            copyKicadLibrary
            installNghdl
            createDesktopStartScript
	    verilator
	    Ngveridependencies

            if [ $? -ne 0 ];then
                echo -e "\n\n\nFreeEDA ERROR: Unable to install required packages. Please check your internet connection.\n\n"
                exit 0
            fi

            echo "-----------------eSim Installed Successfully-----------------"
            echo "Type \"esim\" in Terminal to launch it"
            echo "or double click on \"eSim\" icon placed on Desktop"
    
    else
        echo "Please select the right option"
        exit 0    
    fi


elif [ $option == "--uninstall" ];then
    echo -n "Are you sure? It will remove eSim completely including KiCad, Ngspice and NGHDL along with their models and libraries (y/n):"
    read getConfirmation
    if [ $getConfirmation == "y" -o $getConfirmation == "Y" ];then
        echo "Removing eSim............................"
        sudo rm -rf $HOME/.esim $HOME/Desktop/esim.desktop /usr/bin/esim /usr/share/applications/esim.desktop
        echo "Removing KiCad..........................."
        sudo apt purge -y kicad
        sudo rm -rf /usr/share/kicad
        sudo rm -rf $HOME/.config/kicad
        rm -f $eSim_Home/library/supportFiles/kicad_config_path.txt

        if [[ $(lsb_release -rs) == 20.* ]]; then
            sudo sed -i '/Package: kicad/{:label;N;/Pin-Priority: 501/!blabel};/Pin: version 4.0.7*/d' /etc/apt/preferences.d/preferences
        fi
	echo "Removing Verilator..........................."
	cd verilator-4.210
	sudo make uninstall
        echo "Removing NGHDL..........................."
        rm -rf library/modelParamXML/Nghdl/*
        cd ../nghdl/
        if [ $? -eq 0 ];then
        	chmod +x install-nghdl.sh
    	    ./install-nghdl.sh --uninstall
    	    cd ../
    	    rm -rf nghdl
            if [ $? -eq 0 ];then
                echo -e "----------------eSim Uninstalled Successfully----------------"
            else
                echo -e "\nError while removing some files/directories in \"nghdl\". Please remove it manually"
            fi
        else
            echo -e "\nCannot find \"nghdl\" directory. Please remove it manually"
        fi
    elif [ $getConfirmation == "n" -o $getConfirmation == "N" ];then
        exit 0
    else 
        echo "Please select the right option."
        exit 0
    fi

else 
    echo "Please select the proper operation."
    echo "--install"
    echo "--uninstall"
fi
