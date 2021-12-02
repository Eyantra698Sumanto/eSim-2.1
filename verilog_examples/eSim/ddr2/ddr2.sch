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
LIBS:ddr2-cache
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
L ddr2_controller U3
U 1 1 61A4B2A7
P 2350 2700
F 0 "U3" H 5200 4500 60  0000 C CNN
F 1 "ddr2_controller" H 5200 4700 60  0000 C CNN
F 2 "" H 5200 4650 60  0000 C CNN
F 3 "" H 5200 4650 60  0000 C CNN
	1    2350 2700
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U2
U 1 1 61A4B4D6
P 2350 1050
F 0 "U2" H 2350 1050 60  0000 C CNN
F 1 "adc_bridge_2" H 2350 1200 60  0000 C CNN
F 2 "" H 2350 1050 60  0000 C CNN
F 3 "" H 2350 1050 60  0000 C CNN
	1    2350 1050
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 1000 3100 1000
Wire Wire Line
	2900 1100 3100 1100
Wire Wire Line
	4500 800  2900 800 
Wire Wire Line
	2900 800  2900 1000
Wire Wire Line
	4500 900  3000 900 
Wire Wire Line
	3000 900  3000 1100
Connection ~ 3000 1100
$Comp
L pulse v1
U 1 1 61A4B69E
P 1150 1650
F 0 "v1" H 950 1750 60  0000 C CNN
F 1 "pulse" H 950 1600 60  0000 C CNN
F 2 "R1" H 850 1650 60  0000 C CNN
F 3 "" H 1150 1650 60  0000 C CNN
	1    1150 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 1200 1200 1000
Wire Wire Line
	1200 1000 1750 1000
Wire Wire Line
	1200 1200 1150 1200
$Comp
L pulse v2
U 1 1 61A4B751
P 1750 1550
F 0 "v2" H 1550 1650 60  0000 C CNN
F 1 "pulse" H 1550 1500 60  0000 C CNN
F 2 "R1" H 1450 1550 60  0000 C CNN
F 3 "" H 1750 1550 60  0000 C CNN
	1    1750 1550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 61A4B7A6
P 1550 2450
F 0 "#PWR1" H 1550 2200 50  0001 C CNN
F 1 "GND" H 1550 2300 50  0000 C CNN
F 2 "" H 1550 2450 50  0001 C CNN
F 3 "" H 1550 2450 50  0001 C CNN
	1    1550 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	1150 2100 1150 2450
Wire Wire Line
	1150 2450 1750 2450
Wire Wire Line
	1750 2450 1750 2000
Connection ~ 1550 2450
$Comp
L counter51bit U1
U 1 1 61A4B43D
P 950 2900
F 0 "U1" H 3800 4700 60  0000 C CNN
F 1 "counter51bit" H 3800 4900 60  0000 C CNN
F 2 "" H 3800 4850 60  0000 C CNN
F 3 "" H 3800 4850 60  0000 C CNN
	1    950  2900
	1    0    0    -1  
$EndComp
$EndSCHEMATC
