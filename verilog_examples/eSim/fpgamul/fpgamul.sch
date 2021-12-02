EESchema Schematic File Version 2
LIBS:fpgamul-rescue
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
LIBS:fpgamul-cache
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
L adc_bridge_2 U4
U 1 1 616338D5
P 2200 3150
F 0 "U4" H 2200 3150 60  0000 C CNN
F 1 "adc_bridge_2" H 2200 3300 60  0000 C CNN
F 2 "" H 2200 3150 60  0000 C CNN
F 3 "" H 2200 3150 60  0000 C CNN
	1    2200 3150
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 616338D6
P 1600 3750
F 0 "v2" H 1400 3850 60  0000 C CNN
F 1 "pulse" H 1400 3700 60  0000 C CNN
F 2 "R1" H 1300 3750 60  0000 C CNN
F 3 "" H 1600 3750 60  0000 C CNN
	1    1600 3750
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 616338D7
P 1100 3650
F 0 "v1" H 900 3750 60  0000 C CNN
F 1 "pulse" H 900 3600 60  0000 C CNN
F 2 "R1" H 800 3650 60  0000 C CNN
F 3 "" H 1100 3650 60  0000 C CNN
	1    1100 3650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 616338D8
P 1350 4500
F 0 "#PWR1" H 1350 4250 50  0001 C CNN
F 1 "GND" H 1350 4350 50  0000 C CNN
F 2 "" H 1350 4500 50  0001 C CNN
F 3 "" H 1350 4500 50  0001 C CNN
	1    1350 4500
	1    0    0    -1  
$EndComp
Text GLabel 1100 3000 0    60   Input ~ 0
clk
Text GLabel 1500 3200 0    60   Input ~ 0
reset
$Comp
L plot_v1 U1
U 1 1 616338D9
P 1300 3200
F 0 "U1" H 1300 3700 60  0000 C CNN
F 1 "plot_v1" H 1500 3550 60  0000 C CNN
F 2 "" H 1300 3200 60  0000 C CNN
F 3 "" H 1300 3200 60  0000 C CNN
	1    1300 3200
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 616338DA
P 1950 3950
F 0 "U2" H 1950 4450 60  0000 C CNN
F 1 "plot_v1" H 2150 4300 60  0000 C CNN
F 2 "" H 1950 3950 60  0000 C CNN
F 3 "" H 1950 3950 60  0000 C CNN
	1    1950 3950
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U11
U 1 1 616338DB
P 6500 3300
F 0 "U11" H 6500 3800 60  0000 C CNN
F 1 "plot_v1" H 6700 3650 60  0000 C CNN
F 2 "" H 6500 3300 60  0000 C CNN
F 3 "" H 6500 3300 60  0000 C CNN
	1    6500 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U12
U 1 1 616338DC
P 7000 3400
F 0 "U12" H 7000 3900 60  0000 C CNN
F 1 "plot_v1" H 7200 3750 60  0000 C CNN
F 2 "" H 7000 3400 60  0000 C CNN
F 3 "" H 7000 3400 60  0000 C CNN
	1    7000 3400
	1    0    0    -1  
$EndComp
Text GLabel 6900 3100 0    60   Input ~ 0
passed
Text GLabel 7350 3200 0    60   Input ~ 0
failed
$Comp
L adc_bridge_8 U6
U 1 1 61633D35
P 3800 3350
F 0 "U6" H 3800 3350 60  0000 C CNN
F 1 "adc_bridge_8" H 3800 3500 60  0000 C CNN
F 2 "" H 3800 3350 60  0000 C CNN
F 3 "" H 3800 3350 60  0000 C CNN
	1    3800 3350
	1    0    0    -1  
$EndComp
Text GLabel 2100 4650 0    60   Input ~ 0
cyc
$Comp
L adc_bridge_8 U9
U 1 1 61633F42
P 3800 5750
F 0 "U9" H 3800 5750 60  0000 C CNN
F 1 "adc_bridge_8" H 3800 5900 60  0000 C CNN
F 2 "" H 3800 5750 60  0000 C CNN
F 3 "" H 3800 5750 60  0000 C CNN
	1    3800 5750
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_8 U8
U 1 1 61633EC2
P 3800 4950
F 0 "U8" H 3800 4950 60  0000 C CNN
F 1 "adc_bridge_8" H 3800 5100 60  0000 C CNN
F 2 "" H 3800 4950 60  0000 C CNN
F 3 "" H 3800 4950 60  0000 C CNN
	1    3800 4950
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_8 U7
U 1 1 61633E28
P 3800 4150
F 0 "U7" H 3800 4150 60  0000 C CNN
F 1 "adc_bridge_8" H 3800 4300 60  0000 C CNN
F 2 "" H 3800 4150 60  0000 C CNN
F 3 "" H 3800 4150 60  0000 C CNN
	1    3800 4150
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U10
U 1 1 616338D4
P 5800 3150
F 0 "U10" H 5800 3150 60  0000 C CNN
F 1 "dac_bridge_2" H 5850 3300 60  0000 C CNN
F 2 "" H 5800 3150 60  0000 C CNN
F 3 "" H 5800 3150 60  0000 C CNN
	1    5800 3150
	1    0    0    -1  
$EndComp
$Comp
L top1 U3
U 1 1 61642143
P 2000 5000
F 0 "U3" H 4850 6800 60  0000 C CNN
F 1 "top1" H 4850 7000 60  0000 C CNN
F 2 "" H 4850 6950 60  0000 C CNN
F 3 "" H 4850 6950 60  0000 C CNN
	1    2000 5000
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 6164233A
P 1900 4100
F 0 "v3" H 1700 4200 60  0000 C CNN
F 1 "pulse" H 1700 4050 60  0000 C CNN
F 2 "R1" H 1600 4100 60  0000 C CNN
F 3 "" H 1900 4100 60  0000 C CNN
	1    1900 4100
	0    1    1    0   
$EndComp
$Comp
L plot_v1 U5
U 1 1 61642478
P 2350 4150
F 0 "U5" H 2350 4650 60  0000 C CNN
F 1 "plot_v1" H 2550 4500 60  0000 C CNN
F 2 "" H 2350 4150 60  0000 C CNN
F 3 "" H 2350 4150 60  0000 C CNN
	1    2350 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1100 3200 1100 3100
Wire Wire Line
	1100 3100 1600 3100
Wire Wire Line
	1100 4100 1100 4500
Wire Wire Line
	1100 4500 1600 4500
Connection ~ 1350 4500
Wire Wire Line
	1100 3000 1300 3000
Wire Wire Line
	1300 3000 1300 3100
Connection ~ 1300 3100
Wire Wire Line
	1500 3200 1850 3200
Wire Wire Line
	1600 3200 1600 3300
Wire Wire Line
	1600 4500 1600 4200
Wire Wire Line
	1850 3200 1850 3750
Wire Wire Line
	1850 3750 1950 3750
Connection ~ 1600 3200
Wire Wire Line
	6350 3200 7350 3200
Wire Wire Line
	6350 3100 6900 3100
Connection ~ 6500 3100
Connection ~ 7000 3200
Wire Wire Line
	2750 3100 4350 3100
Wire Wire Line
	2750 3200 4350 3200
Wire Wire Line
	2600 3400 2600 6400
Wire Wire Line
	2600 6300 3200 6300
Wire Wire Line
	3200 3400 2600 3400
Connection ~ 2600 3400
Wire Wire Line
	3200 3500 2600 3500
Connection ~ 2600 3500
Wire Wire Line
	3200 3600 2600 3600
Connection ~ 2600 3600
Wire Wire Line
	3200 3700 2600 3700
Connection ~ 2600 3700
Wire Wire Line
	3200 3800 2600 3800
Connection ~ 2600 3800
Wire Wire Line
	2600 3900 3200 3900
Connection ~ 2600 3900
Connection ~ 2600 4000
Wire Wire Line
	3200 4100 2600 4100
Connection ~ 2600 4100
Wire Wire Line
	3200 4200 2600 4200
Connection ~ 2600 4200
Wire Wire Line
	1600 4300 3200 4300
Connection ~ 2600 4300
Wire Wire Line
	3200 4400 2600 4400
Connection ~ 2600 4400
Wire Wire Line
	3200 4500 2600 4500
Connection ~ 2600 4500
Wire Wire Line
	2600 4600 3200 4600
Connection ~ 2600 4600
Wire Wire Line
	3200 4700 2600 4700
Connection ~ 2600 4700
Wire Wire Line
	3200 4800 2600 4800
Connection ~ 2600 4800
Wire Wire Line
	3200 4900 2600 4900
Connection ~ 2600 4900
Wire Wire Line
	3200 5000 2600 5000
Connection ~ 2600 5000
Wire Wire Line
	3200 5100 2600 5100
Connection ~ 2600 5100
Wire Wire Line
	3200 5200 2600 5200
Connection ~ 2600 5200
Connection ~ 1600 4300
Wire Wire Line
	3200 5300 2600 5300
Connection ~ 2600 5300
Wire Wire Line
	3200 5400 2600 5400
Connection ~ 2600 5400
Wire Wire Line
	3200 5500 2600 5500
Connection ~ 2600 5500
Wire Wire Line
	3200 5600 2600 5600
Connection ~ 2600 5600
Wire Wire Line
	3200 5700 2600 5700
Connection ~ 2600 5700
Wire Wire Line
	3200 5800 2600 5800
Connection ~ 2600 5800
Wire Wire Line
	3200 5900 2600 5900
Connection ~ 2600 5900
Wire Wire Line
	3200 6000 2600 6000
Connection ~ 2600 6000
Wire Wire Line
	2600 6100 3200 6100
Connection ~ 2600 6100
Wire Wire Line
	3200 6200 2600 6200
Connection ~ 2600 6200
Wire Wire Line
	2600 6400 3200 6400
Wire Wire Line
	1550 4500 1500 4500
Connection ~ 1500 4500
Wire Wire Line
	2350 4650 2100 4650
Connection ~ 2950 6400
Wire Wire Line
	2600 4000 3200 4000
Wire Wire Line
	2350 4100 2350 4650
Wire Wire Line
	2350 3950 2350 4150
Connection ~ 2350 4150
Wire Wire Line
	1450 4100 1350 4100
Wire Wire Line
	1350 4100 1350 4500
Wire Wire Line
	2350 4150 2450 4150
Wire Wire Line
	2450 4150 2450 3300
Wire Wire Line
	2450 3300 3200 3300
Connection ~ 2600 6300
$EndSCHEMATC
