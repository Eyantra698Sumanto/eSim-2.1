EESchema Schematic File Version 2
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:power
LIBS:eSim_Plot
LIBS:transistors
LIBS:conn
LIBS:eSim_User
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:eSim_Analog
LIBS:eSim_Devices
LIBS:eSim_Digital
LIBS:eSim_Hybrid
LIBS:eSim_Miscellaneous
LIBS:eSim_Power
LIBS:eSim_Sources
LIBS:eSim_Subckt
LIBS:eSim_Nghdl
LIBS:eSim_Ngveri
LIBS:microcomputer-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L cpu U?
U 1 1 619AA572
P 2200 4450
F 0 "U?" H 5050 6250 60  0000 C CNN
F 1 "cpu" H 5050 6450 60  0000 C CNN
F 2 "" H 5050 6400 60  0000 C CNN
F 3 "" H 5050 6400 60  0000 C CNN
	1    2200 4450
	1    0    0    -1  
$EndComp
$Comp
L pulse v?
U 1 1 619AA621
P 2900 3300
F 0 "v?" H 2700 3400 60  0000 C CNN
F 1 "pulse" H 2700 3250 60  0000 C CNN
F 2 "R1" H 2600 3300 60  0000 C CNN
F 3 "" H 2900 3300 60  0000 C CNN
	1    2900 3300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 619AA6C0
P 2900 3750
F 0 "#PWR?" H 2900 3500 50  0001 C CNN
F 1 "GND" H 2900 3600 50  0000 C CNN
F 2 "" H 2900 3750 50  0001 C CNN
F 3 "" H 2900 3750 50  0001 C CNN
	1    2900 3750
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_1 U?
U 1 1 619AA6D8
P 3800 2600
F 0 "U?" H 3800 2600 60  0000 C CNN
F 1 "adc_bridge_1" H 3800 2750 60  0000 C CNN
F 2 "" H 3800 2600 60  0000 C CNN
F 3 "" H 3800 2600 60  0000 C CNN
	1    3800 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 2550 2900 2550
Wire Wire Line
	2900 2550 2900 2850
$EndSCHEMATC
