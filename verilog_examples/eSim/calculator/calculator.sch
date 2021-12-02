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
L calculator U2
U 1 1 61A3D837
P 3050 5100
F 0 "U2" H 5900 6900 60  0000 C CNN
F 1 "calculator" H 5900 7100 60  0000 C CNN
F 2 "" H 5900 7050 60  0000 C CNN
F 3 "" H 5900 7050 60  0000 C CNN
	1    3050 5100
	1    0    0    -1  
$EndComp
$Comp
L counter16bit U1
U 1 1 61A3DA76
P 1650 4900
F 0 "U1" H 4500 6700 60  0000 C CNN
F 1 "counter16bit" H 4500 6900 60  0000 C CNN
F 2 "" H 4500 6850 60  0000 C CNN
F 3 "" H 4500 6850 60  0000 C CNN
	1    1650 4900
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U3
U 1 1 61A3DB1D
P 3250 3050
F 0 "U3" H 3250 3050 60  0000 C CNN
F 1 "adc_bridge_2" H 3250 3200 60  0000 C CNN
F 2 "" H 3250 3050 60  0000 C CNN
F 3 "" H 3250 3050 60  0000 C CNN
	1    3250 3050
	1    0    0    -1  
$EndComp
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
Wire Wire Line
	2650 3100 2400 3100
Wire Wire Line
	2400 3100 2400 3350
Wire Wire Line
	2650 3000 1900 3000
Wire Wire Line
	1900 3000 1900 3200
Wire Wire Line
	2400 4250 1900 4250
Wire Wire Line
	1900 4250 1900 4100
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
Wire Wire Line
	2150 4250 2150 4400
Connection ~ 2150 4250
$EndSCHEMATC
