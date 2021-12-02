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
LIBS:One_Hot_Counter-cache
LIBS:LFSR_Random_Counter-cache
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
U 1 1 619A501E
P 2550 4100
F 0 "v1" H 2350 4200 60  0000 C CNN
F 1 "pulse" H 2350 4050 60  0000 C CNN
F 2 "R1" H 2250 4100 60  0000 C CNN
F 3 "" H 2550 4100 60  0000 C CNN
	1    2550 4100
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 619A501F
P 3050 4400
F 0 "v2" H 2850 4500 60  0000 C CNN
F 1 "pulse" H 2850 4350 60  0000 C CNN
F 2 "R1" H 2750 4400 60  0000 C CNN
F 3 "" H 3050 4400 60  0000 C CNN
	1    3050 4400
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 619A5020
P 3600 4600
F 0 "v3" H 3400 4700 60  0000 C CNN
F 1 "pulse" H 3400 4550 60  0000 C CNN
F 2 "R1" H 3300 4600 60  0000 C CNN
F 3 "" H 3600 4600 60  0000 C CNN
	1    3600 4600
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U2
U 1 1 619A5021
P 4900 3200
F 0 "U2" H 4900 3200 60  0000 C CNN
F 1 "adc_bridge_3" H 4900 3350 60  0000 C CNN
F 2 "" H 4900 3200 60  0000 C CNN
F 3 "" H 4900 3200 60  0000 C CNN
	1    4900 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 3350 3600 4150
Wire Wire Line
	3600 3350 4300 3350
Wire Wire Line
	3050 3950 3050 3250
Wire Wire Line
	3050 3250 4300 3250
Wire Wire Line
	2550 3650 2550 3150
Wire Wire Line
	2550 3150 4300 3150
$Comp
L GND #PWR1
U 1 1 619A5022
P 3000 5350
F 0 "#PWR1" H 3000 5100 50  0001 C CNN
F 1 "GND" H 3000 5200 50  0000 C CNN
F 2 "" H 3000 5350 50  0001 C CNN
F 3 "" H 3000 5350 50  0001 C CNN
	1    3000 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2550 5350 3050 5350
Wire Wire Line
	3050 5350 3050 4850
Connection ~ 3000 5350
Wire Wire Line
	3600 5050 3600 5350
Wire Wire Line
	3600 5350 3000 5350
Wire Wire Line
	2550 5350 2550 4550
$Comp
L one_hot_cnt U1
U 1 1 619A5035
P 3300 5050
F 0 "U1" H 6150 6850 60  0000 C CNN
F 1 "one_hot_cnt" H 6150 7050 60  0000 C CNN
F 2 "" H 6150 7000 60  0000 C CNN
F 3 "" H 6150 7000 60  0000 C CNN
	1    3300 5050
	1    0    0    -1  
$EndComp
$EndSCHEMATC
