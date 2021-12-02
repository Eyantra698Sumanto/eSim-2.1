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
LIBS:cam-cache
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
L cam U3
U 1 1 619A6385
P 2700 4450
F 0 "U3" H 5550 6250 60  0000 C CNN
F 1 "cam" H 5550 6450 60  0000 C CNN
F 2 "" H 5550 6400 60  0000 C CNN
F 3 "" H 5550 6400 60  0000 C CNN
	1    2700 4450
	1    0    0    -1  
$EndComp
$Comp
L counter16bit U1
U 1 1 619A6504
P 1300 4650
F 0 "U1" H 4150 6450 60  0000 C CNN
F 1 "counter16bit" H 4150 6650 60  0000 C CNN
F 2 "" H 4150 6600 60  0000 C CNN
F 3 "" H 4150 6600 60  0000 C CNN
	1    1300 4650
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 619A68DF
P 1000 3800
F 0 "v1" H 800 3900 60  0000 C CNN
F 1 "pulse" H 800 3750 60  0000 C CNN
F 2 "R1" H 700 3800 60  0000 C CNN
F 3 "" H 1000 3800 60  0000 C CNN
	1    1000 3800
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 619A698A
P 1400 3750
F 0 "v2" H 1200 3850 60  0000 C CNN
F 1 "pulse" H 1200 3700 60  0000 C CNN
F 2 "R1" H 1100 3750 60  0000 C CNN
F 3 "" H 1400 3750 60  0000 C CNN
	1    1400 3750
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 619A6A03
P 1750 3750
F 0 "v3" H 1550 3850 60  0000 C CNN
F 1 "pulse" H 1550 3700 60  0000 C CNN
F 2 "R1" H 1450 3750 60  0000 C CNN
F 3 "" H 1750 3750 60  0000 C CNN
	1    1750 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 619A6AC7
P 1450 4650
F 0 "#PWR01" H 1450 4400 50  0001 C CNN
F 1 "GND" H 1450 4500 50  0000 C CNN
F 2 "" H 1450 4650 50  0001 C CNN
F 3 "" H 1450 4650 50  0001 C CNN
	1    1450 4650
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U2
U 1 1 619A6C46
P 2500 2700
F 0 "U2" H 2500 2700 60  0000 C CNN
F 1 "adc_bridge_3" H 2500 2850 60  0000 C CNN
F 2 "" H 2500 2700 60  0000 C CNN
F 3 "" H 2500 2700 60  0000 C CNN
	1    2500 2700
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U7
U 1 1 619A6722
P 6850 2600
F 0 "U7" H 6850 2600 60  0000 C CNN
F 1 "dac_bridge_1" H 6850 2750 60  0000 C CNN
F 2 "" H 6850 2600 60  0000 C CNN
F 3 "" H 6850 2600 60  0000 C CNN
	1    6850 2600
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 619A67B3
P 7400 2750
F 0 "U9" H 7400 3250 60  0000 C CNN
F 1 "plot_v1" H 7600 3100 60  0000 C CNN
F 2 "" H 7400 2750 60  0000 C CNN
F 3 "" H 7400 2750 60  0000 C CNN
	1    7400 2750
	1    0    0    -1  
$EndComp
Text GLabel 8200 2550 0    60   Input ~ 0
cam_hit_out
Text GLabel 1300 2850 0    60   Input ~ 0
clk
Text GLabel 1750 3050 0    60   Input ~ 0
rst
Text GLabel 1000 2650 0    60   Input ~ 0
cam_enable
$Comp
L plot_v1 U4
U 1 1 619A6A51
P 1000 2850
F 0 "U4" H 1000 3350 60  0000 C CNN
F 1 "plot_v1" H 1200 3200 60  0000 C CNN
F 2 "" H 1000 2850 60  0000 C CNN
F 3 "" H 1000 2850 60  0000 C CNN
	1    1000 2850
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U5
U 1 1 619A6ACF
P 1400 3050
F 0 "U5" H 1400 3550 60  0000 C CNN
F 1 "plot_v1" H 1600 3400 60  0000 C CNN
F 2 "" H 1400 3050 60  0000 C CNN
F 3 "" H 1400 3050 60  0000 C CNN
	1    1400 3050
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 619A6C0B
P 1750 3250
F 0 "U6" H 1750 3750 60  0000 C CNN
F 1 "plot_v1" H 1950 3600 60  0000 C CNN
F 2 "" H 1750 3250 60  0000 C CNN
F 3 "" H 1750 3250 60  0000 C CNN
	1    1750 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 2850 3450 2850
Wire Wire Line
	3050 2750 3450 2750
Wire Wire Line
	4850 2550 3250 2550
Wire Wire Line
	3250 2550 3250 2750
Connection ~ 3250 2750
Wire Wire Line
	3050 2650 4850 2650
Wire Wire Line
	1900 2850 1750 2850
Wire Wire Line
	1750 2850 1750 3300
Wire Wire Line
	1900 2750 1400 2750
Wire Wire Line
	1400 2750 1400 3300
Wire Wire Line
	1900 2650 1000 2650
Wire Wire Line
	1000 2650 1000 3350
Wire Wire Line
	1000 4250 1000 4650
Wire Wire Line
	1000 4650 1450 4650
Wire Wire Line
	1350 4650 1750 4650
Connection ~ 1350 4650
Wire Wire Line
	1750 4650 1750 4200
Wire Wire Line
	8200 2550 7400 2550
Wire Wire Line
	1300 2850 1400 2850
Connection ~ 1400 2850
Wire Wire Line
	1400 4200 1350 4200
Wire Wire Line
	1350 4200 1350 4650
$EndSCHEMATC
