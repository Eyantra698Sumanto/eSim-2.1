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
L d_xnor U4
U 1 1 61896548
P 5000 3250
F 0 "U4" H 5000 3250 60  0000 C CNN
F 1 "d_xnor" H 5050 3350 47  0000 C CNN
F 2 "" H 5000 3250 60  0000 C CNN
F 3 "" H 5000 3250 60  0000 C CNN
	1    5000 3250
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U3
U 1 1 6189665E
P 4000 3200
F 0 "U3" H 4000 3200 60  0000 C CNN
F 1 "adc_bridge_2" H 4000 3350 60  0000 C CNN
F 2 "" H 4000 3200 60  0000 C CNN
F 3 "" H 4000 3200 60  0000 C CNN
	1    4000 3200
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U5
U 1 1 6189678D
P 6050 3250
F 0 "U5" H 6050 3250 60  0000 C CNN
F 1 "dac_bridge_1" H 6050 3400 60  0000 C CNN
F 2 "" H 6050 3250 60  0000 C CNN
F 3 "" H 6050 3250 60  0000 C CNN
	1    6050 3250
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 618967FF
P 2300 3600
F 0 "v1" H 2100 3700 60  0000 C CNN
F 1 "pulse" H 2100 3550 60  0000 C CNN
F 2 "R1" H 2000 3600 60  0000 C CNN
F 3 "" H 2300 3600 60  0000 C CNN
	1    2300 3600
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61896994
P 2850 3750
F 0 "v2" H 2650 3850 60  0000 C CNN
F 1 "pulse" H 2650 3700 60  0000 C CNN
F 2 "R1" H 2550 3750 60  0000 C CNN
F 3 "" H 2850 3750 60  0000 C CNN
	1    2850 3750
	1    0    0    -1  
$EndComp
Text GLabel 2050 3150 0    60   Input ~ 0
in1
Text GLabel 2850 3250 0    60   Input ~ 0
in2
$Comp
L eSim_GND #PWR1
U 1 1 61896A85
P 2650 4500
F 0 "#PWR1" H 2650 4250 50  0001 C CNN
F 1 "eSim_GND" H 2650 4350 50  0000 C CNN
F 2 "" H 2650 4500 50  0001 C CNN
F 3 "" H 2650 4500 50  0001 C CNN
	1    2650 4500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 61896AFF
P 6600 3400
F 0 "U6" H 6600 3900 60  0000 C CNN
F 1 "plot_v1" H 6800 3750 60  0000 C CNN
F 2 "" H 6600 3400 60  0000 C CNN
F 3 "" H 6600 3400 60  0000 C CNN
	1    6600 3400
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 61896BA2
P 2300 3350
F 0 "U1" H 2300 3850 60  0000 C CNN
F 1 "plot_v1" H 2500 3700 60  0000 C CNN
F 2 "" H 2300 3350 60  0000 C CNN
F 3 "" H 2300 3350 60  0000 C CNN
	1    2300 3350
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 61896C5E
P 2850 3450
F 0 "U2" H 2850 3950 60  0000 C CNN
F 1 "plot_v1" H 3050 3800 60  0000 C CNN
F 2 "" H 2850 3450 60  0000 C CNN
F 3 "" H 2850 3450 60  0000 C CNN
	1    2850 3450
	1    0    0    -1  
$EndComp
Text GLabel 6650 3200 0    60   Input ~ 0
out
Wire Wire Line
	2850 3300 2850 3250
Wire Wire Line
	2850 3250 3400 3250
Wire Wire Line
	2050 3150 3400 3150
Connection ~ 2300 3150
Wire Wire Line
	2300 4050 2300 4500
Wire Wire Line
	2300 4500 2850 4500
Wire Wire Line
	2850 4500 2850 4200
Connection ~ 2650 4500
Wire Wire Line
	6650 3200 6600 3200
$EndSCHEMATC
