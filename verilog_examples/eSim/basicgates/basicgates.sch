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
L jbasicgates U2
U 1 1 6188FDF7
P 2250 4900
F 0 "U2" H 5100 6700 60  0000 C CNN
F 1 "jbasicgates" H 5100 6900 60  0000 C CNN
F 2 "" H 5100 6850 60  0000 C CNN
F 3 "" H 5100 6850 60  0000 C CNN
	1    2250 4900
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 6188FEAD
P 3850 3050
F 0 "U4" H 3850 3050 60  0000 C CNN
F 1 "adc_bridge_2" H 3850 3200 60  0000 C CNN
F 2 "" H 3850 3050 60  0000 C CNN
F 3 "" H 3850 3050 60  0000 C CNN
	1    3850 3050
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_6 U5
U 1 1 6188FFEF
P 6400 3050
F 0 "U5" H 6400 3050 60  0000 C CNN
F 1 "dac_bridge_6" H 6400 3200 60  0000 C CNN
F 2 "" H 6400 3050 60  0000 C CNN
F 3 "" H 6400 3050 60  0000 C CNN
	1    6400 3050
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61890095
P 2100 3700
F 0 "v1" H 1900 3800 60  0000 C CNN
F 1 "pulse" H 1900 3650 60  0000 C CNN
F 2 "R1" H 1800 3700 60  0000 C CNN
F 3 "" H 2100 3700 60  0000 C CNN
	1    2100 3700
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 6189015E
P 2700 3700
F 0 "v2" H 2500 3800 60  0000 C CNN
F 1 "pulse" H 2500 3650 60  0000 C CNN
F 2 "R1" H 2400 3700 60  0000 C CNN
F 3 "" H 2700 3700 60  0000 C CNN
	1    2700 3700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 618901EB
P 2100 3100
F 0 "U1" H 2100 3600 60  0000 C CNN
F 1 "plot_v1" H 2300 3450 60  0000 C CNN
F 2 "" H 2100 3100 60  0000 C CNN
F 3 "" H 2100 3100 60  0000 C CNN
	1    2100 3100
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 6189020C
P 2700 3300
F 0 "U3" H 2700 3800 60  0000 C CNN
F 1 "plot_v1" H 2900 3650 60  0000 C CNN
F 2 "" H 2700 3300 60  0000 C CNN
F 3 "" H 2700 3300 60  0000 C CNN
	1    2700 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 3250 2700 3100
Wire Wire Line
	2700 3100 3250 3100
Wire Wire Line
	3250 3000 2100 3000
Wire Wire Line
	2100 2900 2100 3250
Connection ~ 2100 3000
$Comp
L eSim_GND #PWR01
U 1 1 6189036D
P 2400 4300
F 0 "#PWR01" H 2400 4050 50  0001 C CNN
F 1 "eSim_GND" H 2400 4150 50  0000 C CNN
F 2 "" H 2400 4300 50  0001 C CNN
F 3 "" H 2400 4300 50  0001 C CNN
	1    2400 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 4300 2700 4300
Wire Wire Line
	2100 4300 2100 4150
Wire Wire Line
	2700 4300 2700 4150
Connection ~ 2400 4300
$Comp
L plot_v1 U6
U 1 1 618903B3
P 7350 3150
F 0 "U6" H 7350 3650 60  0000 C CNN
F 1 "plot_v1" H 7550 3500 60  0000 C CNN
F 2 "" H 7350 3150 60  0000 C CNN
F 3 "" H 7350 3150 60  0000 C CNN
	1    7350 3150
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 61890470
P 7800 3250
F 0 "U7" H 7800 3750 60  0000 C CNN
F 1 "plot_v1" H 8000 3600 60  0000 C CNN
F 2 "" H 7800 3250 60  0000 C CNN
F 3 "" H 7800 3250 60  0000 C CNN
	1    7800 3250
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 618904FE
P 8150 3400
F 0 "U8" H 8150 3900 60  0000 C CNN
F 1 "plot_v1" H 8350 3750 60  0000 C CNN
F 2 "" H 8150 3400 60  0000 C CNN
F 3 "" H 8150 3400 60  0000 C CNN
	1    8150 3400
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 6189057E
P 8350 3500
F 0 "U9" H 8350 4000 60  0000 C CNN
F 1 "plot_v1" H 8550 3850 60  0000 C CNN
F 2 "" H 8350 3500 60  0000 C CNN
F 3 "" H 8350 3500 60  0000 C CNN
	1    8350 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U10
U 1 1 618905F6
P 8650 3600
F 0 "U10" H 8650 4100 60  0000 C CNN
F 1 "plot_v1" H 8850 3950 60  0000 C CNN
F 2 "" H 8650 3600 60  0000 C CNN
F 3 "" H 8650 3600 60  0000 C CNN
	1    8650 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6950 3000 7350 3000
Wire Wire Line
	7350 3000 7350 2950
Wire Wire Line
	6950 3100 7800 3100
Wire Wire Line
	7800 3100 7800 3050
Wire Wire Line
	6950 3200 8150 3200
Wire Wire Line
	6950 3300 8350 3300
Wire Wire Line
	6950 3400 8700 3400
$Comp
L plot_v1 U11
U 1 1 6189084F
P 9000 3650
F 0 "U11" H 9000 4150 60  0000 C CNN
F 1 "plot_v1" H 9200 4000 60  0000 C CNN
F 2 "" H 9000 3650 60  0000 C CNN
F 3 "" H 9000 3650 60  0000 C CNN
	1    9000 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	6950 3500 9000 3500
Wire Wire Line
	9000 3500 9000 3450
Text GLabel 7350 3000 0    60   Input ~ 0
OROUT
Text GLabel 7800 3050 0    60   Input ~ 0
ANDOUT
Text GLabel 8150 3200 0    60   Input ~ 0
XOR
Text GLabel 8350 3300 0    60   Input ~ 0
NOR
Text GLabel 8700 3400 0    60   Input ~ 0
NAND
Text GLabel 9000 3500 0    60   Input ~ 0
XNOR
Connection ~ 8650 3400
Text GLabel 2100 3000 0    60   Input ~ 0
A
Text GLabel 2700 3100 0    60   Input ~ 0
B
$EndSCHEMATC
