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
L rom_using_file U2
U 1 1 619A5DA7
P 2600 5000
F 0 "U2" H 5450 6800 60  0000 C CNN
F 1 "rom_using_file" H 5450 7000 60  0000 C CNN
F 2 "" H 5450 6950 60  0000 C CNN
F 3 "" H 5450 6950 60  0000 C CNN
	1    2600 5000
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U1
U 1 1 619A5E36
P 1200 5000
F 0 "U1" H 4050 6800 60  0000 C CNN
F 1 "counter8bit" H 4050 7000 60  0000 C CNN
F 2 "" H 4050 6950 60  0000 C CNN
F 3 "" H 4050 6950 60  0000 C CNN
	1    1200 5000
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_4 U3
U 1 1 619A5F11
P 2800 3300
F 0 "U3" H 2800 3300 60  0000 C CNN
F 1 "adc_bridge_4" H 2800 3600 60  0000 C CNN
F 2 "" H 2800 3300 60  0000 C CNN
F 3 "" H 2800 3300 60  0000 C CNN
	1    2800 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3300 4250 3300
Wire Wire Line
	4250 3300 4250 3900
Wire Wire Line
	4250 3900 4750 3900
Wire Wire Line
	3350 3400 4150 3400
Wire Wire Line
	4150 3400 4150 4000
Wire Wire Line
	4150 4000 4750 4000
$Comp
L pulse v1
U 1 1 619A5FEC
P 1350 3900
F 0 "v1" H 1150 4000 60  0000 C CNN
F 1 "pulse" H 1150 3850 60  0000 C CNN
F 2 "R1" H 1050 3900 60  0000 C CNN
F 3 "" H 1350 3900 60  0000 C CNN
	1    1350 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 3450 1350 3100
Wire Wire Line
	1350 3100 2250 3100
$Comp
L pulse v2
U 1 1 619A6083
P 1750 4100
F 0 "v2" H 1550 4200 60  0000 C CNN
F 1 "pulse" H 1550 4050 60  0000 C CNN
F 2 "R1" H 1450 4100 60  0000 C CNN
F 3 "" H 1750 4100 60  0000 C CNN
	1    1750 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 3650 1750 3200
Wire Wire Line
	1750 3200 2250 3200
$Comp
L pulse v3
U 1 1 619A60D4
P 2000 4400
F 0 "v3" H 1800 4500 60  0000 C CNN
F 1 "pulse" H 1800 4350 60  0000 C CNN
F 2 "R1" H 1700 4400 60  0000 C CNN
F 3 "" H 2000 4400 60  0000 C CNN
	1    2000 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 3950 2000 3300
Wire Wire Line
	2000 3300 2250 3300
$Comp
L pulse v4
U 1 1 619A612C
P 2250 4500
F 0 "v4" H 2050 4600 60  0000 C CNN
F 1 "pulse" H 2050 4450 60  0000 C CNN
F 2 "R1" H 1950 4500 60  0000 C CNN
F 3 "" H 2250 4500 60  0000 C CNN
	1    2250 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 4050 2250 3400
$Comp
L GND #PWR1
U 1 1 619A6180
P 1700 5300
F 0 "#PWR1" H 1700 5050 50  0001 C CNN
F 1 "GND" H 1700 5150 50  0000 C CNN
F 2 "" H 1700 5300 50  0001 C CNN
F 3 "" H 1700 5300 50  0001 C CNN
	1    1700 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 4350 1350 5300
Wire Wire Line
	1350 5300 1750 5300
Wire Wire Line
	1750 5300 1750 4550
Connection ~ 1700 5300
Wire Wire Line
	1700 5300 2250 5300
Wire Wire Line
	2250 5300 2250 4950
Wire Wire Line
	2000 4850 2000 5300
Connection ~ 2000 5300
$EndSCHEMATC
