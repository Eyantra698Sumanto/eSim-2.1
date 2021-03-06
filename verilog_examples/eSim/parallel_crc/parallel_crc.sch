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
L parallel_crc U3
U 1 1 619A1660
P 2600 4500
F 0 "U3" H 5450 6300 60  0000 C CNN
F 1 "parallel_crc" H 5450 6500 60  0000 C CNN
F 2 "" H 5450 6450 60  0000 C CNN
F 3 "" H 5450 6450 60  0000 C CNN
	1    2600 4500
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U1
U 1 1 619A16F1
P 1200 4900
F 0 "U1" H 4050 6700 60  0000 C CNN
F 1 "counter8bit" H 4050 6900 60  0000 C CNN
F 2 "" H 4050 6850 60  0000 C CNN
F 3 "" H 4050 6850 60  0000 C CNN
	1    1200 4900
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_4 U2
U 1 1 619A1845
P 2550 3000
F 0 "U2" H 2550 3000 60  0000 C CNN
F 1 "adc_bridge_4" H 2550 3300 60  0000 C CNN
F 2 "" H 2550 3000 60  0000 C CNN
F 3 "" H 2550 3000 60  0000 C CNN
	1    2550 3000
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 619A18EB
P 1300 3450
F 0 "v1" H 1100 3550 60  0000 C CNN
F 1 "pulse" H 1100 3400 60  0000 C CNN
F 2 "R1" H 1000 3450 60  0000 C CNN
F 3 "" H 1300 3450 60  0000 C CNN
	1    1300 3450
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 619A1990
P 1500 3650
F 0 "v2" H 1300 3750 60  0000 C CNN
F 1 "pulse" H 1300 3600 60  0000 C CNN
F 2 "R1" H 1200 3650 60  0000 C CNN
F 3 "" H 1500 3650 60  0000 C CNN
	1    1500 3650
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 619A1A15
P 1700 3850
F 0 "v3" H 1500 3950 60  0000 C CNN
F 1 "pulse" H 1500 3800 60  0000 C CNN
F 2 "R1" H 1400 3850 60  0000 C CNN
F 3 "" H 1700 3850 60  0000 C CNN
	1    1700 3850
	1    0    0    -1  
$EndComp
$Comp
L pulse v4
U 1 1 619A1A8A
P 1900 4000
F 0 "v4" H 1700 4100 60  0000 C CNN
F 1 "pulse" H 1700 3950 60  0000 C CNN
F 2 "R1" H 1600 4000 60  0000 C CNN
F 3 "" H 1900 4000 60  0000 C CNN
	1    1900 4000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 619A1BD0
P 1500 4600
F 0 "#PWR01" H 1500 4350 50  0001 C CNN
F 1 "GND" H 1500 4450 50  0000 C CNN
F 2 "" H 1500 4600 50  0001 C CNN
F 3 "" H 1500 4600 50  0001 C CNN
	1    1500 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3000 3100 3000
Wire Wire Line
	3350 3100 3100 3100
Wire Wire Line
	3100 2800 4750 2800
Wire Wire Line
	3100 2900 4750 2900
Wire Wire Line
	4750 2600 3150 2600
Wire Wire Line
	3150 2600 3150 3000
Connection ~ 3150 3000
Wire Wire Line
	4750 2700 3250 2700
Wire Wire Line
	3250 2700 3250 3100
Connection ~ 3250 3100
Wire Wire Line
	1900 3550 1900 3100
Wire Wire Line
	1900 3100 2000 3100
Wire Wire Line
	1700 3400 1700 3000
Wire Wire Line
	1700 3000 2000 3000
Wire Wire Line
	1500 3200 1500 2900
Wire Wire Line
	1500 2900 2000 2900
Wire Wire Line
	1300 2800 2000 2800
Wire Wire Line
	1300 2800 1300 3000
Wire Wire Line
	1900 4600 1900 4450
Wire Wire Line
	1300 4600 1900 4600
Wire Wire Line
	1700 4300 1700 4600
Connection ~ 1700 4600
Wire Wire Line
	1500 4600 1500 4100
Wire Wire Line
	1300 3900 1300 4600
Connection ~ 1500 4600
$EndSCHEMATC
