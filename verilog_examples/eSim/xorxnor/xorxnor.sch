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
L ixorxnor U1
U 1 1 618C15BA
P 2700 5250
F 0 "U1" H 5550 7050 60  0000 C CNN
F 1 "ixorxnor" H 5550 7250 60  0000 C CNN
F 2 "" H 5550 7200 60  0000 C CNN
F 3 "" H 5550 7200 60  0000 C CNN
	1    2700 5250
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 618C1665
P 4300 3400
F 0 "U4" H 4300 3400 60  0000 C CNN
F 1 "adc_bridge_2" H 4300 3550 60  0000 C CNN
F 2 "" H 4300 3400 60  0000 C CNN
F 3 "" H 4300 3400 60  0000 C CNN
	1    4300 3400
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U5
U 1 1 618C170E
P 6700 3400
F 0 "U5" H 6700 3400 60  0000 C CNN
F 1 "dac_bridge_2" H 6750 3550 60  0000 C CNN
F 2 "" H 6700 3400 60  0000 C CNN
F 3 "" H 6700 3400 60  0000 C CNN
	1    6700 3400
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 618C1791
P 2950 3800
F 0 "v1" H 2750 3900 60  0000 C CNN
F 1 "pulse" H 2750 3750 60  0000 C CNN
F 2 "R1" H 2650 3800 60  0000 C CNN
F 3 "" H 2950 3800 60  0000 C CNN
	1    2950 3800
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 618C181E
P 3400 4000
F 0 "v2" H 3200 4100 60  0000 C CNN
F 1 "pulse" H 3200 3950 60  0000 C CNN
F 2 "R1" H 3100 4000 60  0000 C CNN
F 3 "" H 3400 4000 60  0000 C CNN
	1    3400 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 3550 3400 3450
Wire Wire Line
	3300 3450 3700 3450
Wire Wire Line
	2850 3350 3700 3350
$Comp
L eSim_GND #PWR1
U 1 1 618C18A7
P 3150 4600
F 0 "#PWR1" H 3150 4350 50  0001 C CNN
F 1 "eSim_GND" H 3150 4450 50  0000 C CNN
F 2 "" H 3150 4600 50  0001 C CNN
F 3 "" H 3150 4600 50  0001 C CNN
	1    3150 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 4600 3400 4600
Wire Wire Line
	2950 4600 2950 4250
Wire Wire Line
	3400 4600 3400 4450
Connection ~ 3150 4600
$Comp
L plot_v1 U2
U 1 1 618C18E2
P 3200 3450
F 0 "U2" H 3200 3950 60  0000 C CNN
F 1 "plot_v1" H 3400 3800 60  0000 C CNN
F 2 "" H 3200 3450 60  0000 C CNN
F 3 "" H 3200 3450 60  0000 C CNN
	1    3200 3450
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 618C1963
P 3650 3450
F 0 "U3" H 3650 3950 60  0000 C CNN
F 1 "plot_v1" H 3850 3800 60  0000 C CNN
F 2 "" H 3650 3450 60  0000 C CNN
F 3 "" H 3650 3450 60  0000 C CNN
	1    3650 3450
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 618C19B8
P 7400 3550
F 0 "U6" H 7400 4050 60  0000 C CNN
F 1 "plot_v1" H 7600 3900 60  0000 C CNN
F 2 "" H 7400 3550 60  0000 C CNN
F 3 "" H 7400 3550 60  0000 C CNN
	1    7400 3550
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 618C1A23
P 7900 3650
F 0 "U7" H 7900 4150 60  0000 C CNN
F 1 "plot_v1" H 8100 4000 60  0000 C CNN
F 2 "" H 7900 3650 60  0000 C CNN
F 3 "" H 7900 3650 60  0000 C CNN
	1    7900 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 3450 8250 3450
Wire Wire Line
	7250 3350 7700 3350
Text GLabel 7700 3350 0    60   Input ~ 0
XOR
Connection ~ 7400 3350
Text GLabel 8250 3450 0    60   Input ~ 0
XNOR
Connection ~ 7900 3450
Text GLabel 2850 3350 0    60   Input ~ 0
A
Text GLabel 3300 3450 0    60   Input ~ 0
B
Connection ~ 3400 3450
Wire Wire Line
	3650 3250 3650 3450
Connection ~ 3650 3450
Wire Wire Line
	3200 3250 3200 3350
Connection ~ 3200 3350
Connection ~ 2950 3350
$EndSCHEMATC
