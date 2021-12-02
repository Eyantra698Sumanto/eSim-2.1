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
LIBS:ledtraffic-cache
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
L dac_bridge_2 U5
U 1 1 617D9326
P 6800 2550
F 0 "U5" H 6800 2550 60  0000 C CNN
F 1 "dac_bridge_2" H 6850 2700 60  0000 C CNN
F 2 "" H 6800 2550 60  0000 C CNN
F 3 "" H 6800 2550 60  0000 C CNN
	1    6800 2550
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 617D93B5
P 2100 2050
F 0 "U4" H 2100 2050 60  0000 C CNN
F 1 "adc_bridge_2" H 2100 2200 60  0000 C CNN
F 2 "" H 2100 2050 60  0000 C CNN
F 3 "" H 2100 2050 60  0000 C CNN
	1    2100 2050
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 617D94F9
P 450 2750
F 0 "v1" H 250 2850 60  0000 C CNN
F 1 "pulse" H 250 2700 60  0000 C CNN
F 2 "R1" H 150 2750 60  0000 C CNN
F 3 "" H 450 2750 60  0000 C CNN
	1    450  2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	450  2300 450  2000
Wire Wire Line
	250  2000 1500 2000
$Comp
L pulse v2
U 1 1 617D95A8
P 1050 2700
F 0 "v2" H 850 2800 60  0000 C CNN
F 1 "pulse" H 850 2650 60  0000 C CNN
F 2 "R1" H 750 2700 60  0000 C CNN
F 3 "" H 1050 2700 60  0000 C CNN
	1    1050 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1050 2250 1050 2100
Wire Wire Line
	1050 2100 1500 2100
$Comp
L GND #PWR1
U 1 1 617D961C
P 750 3450
F 0 "#PWR1" H 750 3200 50  0001 C CNN
F 1 "GND" H 750 3300 50  0000 C CNN
F 2 "" H 750 3450 50  0001 C CNN
F 3 "" H 750 3450 50  0001 C CNN
	1    750  3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	450  3200 450  3450
Wire Wire Line
	450  3450 1050 3450
Wire Wire Line
	1050 3450 1050 3150
Connection ~ 750  3450
Text GLabel 250  2000 0    60   Input ~ 0
clk
Connection ~ 450  2000
$Comp
L plot_v1 U2
U 1 1 617D966E
P 1050 2100
F 0 "U2" H 1050 2600 60  0000 C CNN
F 1 "plot_v1" H 1250 2450 60  0000 C CNN
F 2 "" H 1050 2100 60  0000 C CNN
F 3 "" H 1050 2100 60  0000 C CNN
	1    1050 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1050 1900 1050 2000
Connection ~ 1050 2000
Text GLabel 950  2150 0    60   Input ~ 0
reset
Wire Wire Line
	950  2150 1050 2150
Connection ~ 1050 2150
$Comp
L plot_v1 U3
U 1 1 617D975A
P 1500 2800
F 0 "U3" H 1500 3300 60  0000 C CNN
F 1 "plot_v1" H 1700 3150 60  0000 C CNN
F 2 "" H 1500 2800 60  0000 C CNN
F 3 "" H 1500 2800 60  0000 C CNN
	1    1500 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 2600 1350 2600
Wire Wire Line
	1350 2600 1350 2100
Connection ~ 1350 2100
$Comp
L plot_v1 U6
U 1 1 617D97BB
P 7350 2700
F 0 "U6" H 7350 3200 60  0000 C CNN
F 1 "plot_v1" H 7550 3050 60  0000 C CNN
F 2 "" H 7350 2700 60  0000 C CNN
F 3 "" H 7350 2700 60  0000 C CNN
	1    7350 2700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 617D9835
P 8000 2750
F 0 "U7" H 8000 3250 60  0000 C CNN
F 1 "plot_v1" H 8200 3100 60  0000 C CNN
F 2 "" H 8000 2750 60  0000 C CNN
F 3 "" H 8000 2750 60  0000 C CNN
	1    8000 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	7350 2600 8400 2600
Wire Wire Line
	8000 2600 8000 2550
Text GLabel 8400 2600 0    60   Input ~ 0
failed
Connection ~ 8000 2600
Text GLabel 7800 2500 0    60   Input ~ 0
passed
Wire Wire Line
	7800 2500 7350 2500
Wire Wire Line
	2650 2100 2650 2800
Wire Wire Line
	2650 2800 3550 2800
Wire Wire Line
	2650 2000 3100 2000
Wire Wire Line
	3100 2000 3100 2700
Wire Wire Line
	4950 2500 3100 2500
Connection ~ 3100 2500
Wire Wire Line
	2650 2650 4950 2650
Wire Wire Line
	4950 2650 4950 2600
Connection ~ 2650 2650
Wire Wire Line
	3100 2700 3550 2700
$Comp
L plot_v1 U9
U 1 1 617D9CDC
P 4200 6750
F 0 "U9" H 4200 7250 60  0000 C CNN
F 1 "plot_v1" H 4400 7100 60  0000 C CNN
F 2 "" H 4200 6750 60  0000 C CNN
F 3 "" H 4200 6750 60  0000 C CNN
	1    4200 6750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 6550 5450 6550
Text GLabel 5450 6550 0    60   Input ~ 0
count0
Connection ~ 4950 6550
$Comp
L dac_bridge_1 U10
U 1 1 617D9DFA
P 5550 6300
F 0 "U10" H 5550 6300 60  0000 C CNN
F 1 "dac_bridge_1" H 5550 6450 60  0000 C CNN
F 2 "" H 5550 6300 60  0000 C CNN
F 3 "" H 5550 6300 60  0000 C CNN
	1    5550 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6100 6250 6100 6550
Wire Wire Line
	6100 6550 5400 6550
Connection ~ 5400 6550
Wire Wire Line
	4950 6250 4950 5800
$Comp
L counter32bit U8
U 1 1 61A2257A
P 1400 4600
F 0 "U8" H 4250 6400 60  0000 C CNN
F 1 "counter32bit" H 4250 6600 60  0000 C CNN
F 2 "" H 4250 6550 60  0000 C CNN
F 3 "" H 4250 6550 60  0000 C CNN
	1    1400 4600
	1    0    0    -1  
$EndComp
$Comp
L trafficmaker U1
U 1 1 61A23B3D
P 2800 4400
F 0 "U1" H 5650 6200 60  0000 C CNN
F 1 "trafficmaker" H 5650 6400 60  0000 C CNN
F 2 "" H 5650 6350 60  0000 C CNN
F 3 "" H 5650 6350 60  0000 C CNN
	1    2800 4400
	1    0    0    -1  
$EndComp
$EndSCHEMATC
