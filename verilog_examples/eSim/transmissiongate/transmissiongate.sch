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
L jtransmissiongate U2
U 1 1 618939DA
P 2300 5000
F 0 "U2" H 5150 6800 60  0000 C CNN
F 1 "jtransmissiongate" H 5150 7000 60  0000 C CNN
F 2 "" H 5150 6950 60  0000 C CNN
F 3 "" H 5150 6950 60  0000 C CNN
	1    2300 5000
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 61893A69
P 3900 3150
F 0 "U4" H 3900 3150 60  0000 C CNN
F 1 "adc_bridge_2" H 3900 3300 60  0000 C CNN
F 2 "" H 3900 3150 60  0000 C CNN
F 3 "" H 3900 3150 60  0000 C CNN
	1    3900 3150
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61893AE4
P 2200 3650
F 0 "v1" H 2000 3750 60  0000 C CNN
F 1 "pulse" H 2000 3600 60  0000 C CNN
F 2 "R1" H 1900 3650 60  0000 C CNN
F 3 "" H 2200 3650 60  0000 C CNN
	1    2200 3650
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61893B67
P 2800 3750
F 0 "v2" H 2600 3850 60  0000 C CNN
F 1 "pulse" H 2600 3700 60  0000 C CNN
F 2 "R1" H 2500 3750 60  0000 C CNN
F 3 "" H 2800 3750 60  0000 C CNN
	1    2800 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 3200 2800 3200
Wire Wire Line
	2800 3200 2800 3300
Wire Wire Line
	2200 3000 2200 3200
Wire Wire Line
	2200 3100 3300 3100
$Comp
L GND #PWR1
U 1 1 61893C9F
P 2550 4450
F 0 "#PWR1" H 2550 4200 50  0001 C CNN
F 1 "GND" H 2550 4300 50  0000 C CNN
F 2 "" H 2550 4450 50  0001 C CNN
F 3 "" H 2550 4450 50  0001 C CNN
	1    2550 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 4100 2200 4450
Wire Wire Line
	2200 4450 2800 4450
Wire Wire Line
	2800 4450 2800 4200
Connection ~ 2550 4450
$Comp
L plot_v1 U1
U 1 1 61893D18
P 2200 3200
F 0 "U1" H 2200 3700 60  0000 C CNN
F 1 "plot_v1" H 2400 3550 60  0000 C CNN
F 2 "" H 2200 3200 60  0000 C CNN
F 3 "" H 2200 3200 60  0000 C CNN
	1    2200 3200
	1    0    0    -1  
$EndComp
Connection ~ 2200 3100
Text GLabel 2700 3250 0    60   Input ~ 0
control
$Comp
L plot_v1 U3
U 1 1 61893E15
P 2800 3100
F 0 "U3" H 2800 3600 60  0000 C CNN
F 1 "plot_v1" H 3000 3450 60  0000 C CNN
F 2 "" H 2800 3100 60  0000 C CNN
F 3 "" H 2800 3100 60  0000 C CNN
	1    2800 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 2900 2800 3250
Connection ~ 2800 3250
Wire Wire Line
	2800 3250 2700 3250
Text GLabel 2200 3100 0    60   Input ~ 0
a
Text GLabel 7550 3100 0    60   Input ~ 0
out
$Comp
L plot_v1 U6
U 1 1 61893E91
P 7550 3300
F 0 "U6" H 7550 3800 60  0000 C CNN
F 1 "plot_v1" H 7750 3650 60  0000 C CNN
F 2 "" H 7550 3300 60  0000 C CNN
F 3 "" H 7550 3300 60  0000 C CNN
	1    7550 3300
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U5
U 1 1 61893F9E
P 6450 3150
F 0 "U5" H 6450 3150 60  0000 C CNN
F 1 "dac_bridge_1" H 6450 3300 60  0000 C CNN
F 2 "" H 6450 3150 60  0000 C CNN
F 3 "" H 6450 3150 60  0000 C CNN
	1    6450 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 3100 7550 3100
$EndSCHEMATC
