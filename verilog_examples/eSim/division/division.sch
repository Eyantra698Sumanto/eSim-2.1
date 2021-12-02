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
LIBS:division-cache
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
L pulse v1
U 1 1 61A3DC98
P 1900 3650
F 0 "v1" H 1700 3750 60  0000 C CNN
F 1 "pulse" H 1700 3600 60  0000 C CNN
F 2 "R1" H 1600 3650 60  0000 C CNN
F 3 "" H 1900 3650 60  0000 C CNN
	1    1900 3650
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61A3DD19
P 2400 3800
F 0 "v2" H 2200 3900 60  0000 C CNN
F 1 "pulse" H 2200 3750 60  0000 C CNN
F 2 "R1" H 2100 3800 60  0000 C CNN
F 3 "" H 2400 3800 60  0000 C CNN
	1    2400 3800
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR1
U 1 1 61A3DDB9
P 2150 4400
F 0 "#PWR1" H 2150 4150 50  0001 C CNN
F 1 "eSim_GND" H 2150 4250 50  0000 C CNN
F 2 "" H 2150 4400 50  0001 C CNN
F 3 "" H 2150 4400 50  0001 C CNN
	1    2150 4400
	1    0    0    -1  
$EndComp
$Comp
L division U4
U 1 1 61A3E766
P 3850 2400
F 0 "U4" H 6700 4200 60  0000 C CNN
F 1 "division" H 6700 4400 60  0000 C CNN
F 2 "" H 6700 4350 60  0000 C CNN
F 3 "" H 6700 4350 60  0000 C CNN
	1    3850 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 3100 2400 3100
Wire Wire Line
	2400 3100 2400 3350
Wire Wire Line
	2650 3000 1900 3000
Wire Wire Line
	1900 3000 1900 3200
Wire Wire Line
	1900 4250 2650 4250
Wire Wire Line
	1900 4250 1900 4100
Wire Wire Line
	2150 4250 2150 4400
Connection ~ 2150 4250
Wire Wire Line
	3800 3000 3800 500 
Wire Wire Line
	3800 500  4600 500 
Wire Wire Line
	3800 3100 4600 3100
Wire Wire Line
	4600 3100 4600 600 
Wire Wire Line
	3800 3700 4600 3700
Connection ~ 3800 2500
Wire Wire Line
	4600 3800 4300 3800
Wire Wire Line
	4300 3800 4300 3100
Connection ~ 4300 3100
$Comp
L adc_bridge_3 U3
U 1 1 61A3EBD9
P 3250 3050
F 0 "U3" H 3250 3050 60  0000 C CNN
F 1 "adc_bridge_3" H 3250 3200 60  0000 C CNN
F 2 "" H 3250 3050 60  0000 C CNN
F 3 "" H 3250 3050 60  0000 C CNN
	1    3250 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3800 3200 3800 3700
$Comp
L pulse v3
U 1 1 61A3ECE0
P 2650 3650
F 0 "v3" H 2450 3750 60  0000 C CNN
F 1 "pulse" H 2450 3600 60  0000 C CNN
F 2 "R1" H 2350 3650 60  0000 C CNN
F 3 "" H 2650 3650 60  0000 C CNN
	1    2650 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 4250 2650 4100
Connection ~ 2400 4250
$Comp
L downcounter32bit U1
U 1 1 61A3F156
P 2450 2400
F 0 "U1" H 5300 4200 60  0000 C CNN
F 1 "downcounter32bit" H 5300 4400 60  0000 C CNN
F 2 "" H 5300 4350 60  0000 C CNN
F 3 "" H 5300 4350 60  0000 C CNN
	1    2450 2400
	1    0    0    -1  
$EndComp
$Comp
L downcounter32bit U2
U 1 1 61A3F20F
P 2450 5600
F 0 "U2" H 5300 7400 60  0000 C CNN
F 1 "downcounter32bit" H 5300 7600 60  0000 C CNN
F 2 "" H 5300 7550 60  0000 C CNN
F 3 "" H 5300 7550 60  0000 C CNN
	1    2450 5600
	1    0    0    -1  
$EndComp
$EndSCHEMATC
