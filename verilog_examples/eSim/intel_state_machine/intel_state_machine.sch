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
L state_machine U2
U 1 1 6191E1CC
P 2700 5000
F 0 "U2" H 5550 6800 60  0000 C CNN
F 1 "state_machine" H 5550 7000 60  0000 C CNN
F 2 "" H 5550 6950 60  0000 C CNN
F 3 "" H 5550 6950 60  0000 C CNN
	1    2700 5000
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U6
U 1 1 6191E24D
P 6700 3150
F 0 "U6" H 6700 3150 60  0000 C CNN
F 1 "dac_bridge_2" H 6750 3300 60  0000 C CNN
F 2 "" H 6700 3150 60  0000 C CNN
F 3 "" H 6700 3150 60  0000 C CNN
	1    6700 3150
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U5
U 1 1 6191E2DE
P 4300 3150
F 0 "U5" H 4300 3150 60  0000 C CNN
F 1 "adc_bridge_3" H 4300 3300 60  0000 C CNN
F 2 "" H 4300 3150 60  0000 C CNN
F 3 "" H 4300 3150 60  0000 C CNN
	1    4300 3150
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 6191E387
P 2450 3300
F 0 "U1" H 2450 3800 60  0000 C CNN
F 1 "plot_v1" H 2650 3650 60  0000 C CNN
F 2 "" H 2450 3300 60  0000 C CNN
F 3 "" H 2450 3300 60  0000 C CNN
	1    2450 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 6191E408
P 2950 3400
F 0 "U3" H 2950 3900 60  0000 C CNN
F 1 "plot_v1" H 3150 3750 60  0000 C CNN
F 2 "" H 2950 3400 60  0000 C CNN
F 3 "" H 2950 3400 60  0000 C CNN
	1    2950 3400
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U4
U 1 1 6191E4CB
P 3450 3500
F 0 "U4" H 3450 4000 60  0000 C CNN
F 1 "plot_v1" H 3650 3850 60  0000 C CNN
F 2 "" H 3450 3500 60  0000 C CNN
F 3 "" H 3450 3500 60  0000 C CNN
	1    3450 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 3300 3700 3300
Wire Wire Line
	2950 3200 3700 3200
Wire Wire Line
	2450 3100 3700 3100
$Comp
L plot_v1 U7
U 1 1 6191E574
P 7550 3300
F 0 "U7" H 7550 3800 60  0000 C CNN
F 1 "plot_v1" H 7750 3650 60  0000 C CNN
F 2 "" H 7550 3300 60  0000 C CNN
F 3 "" H 7550 3300 60  0000 C CNN
	1    7550 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 6191E611
P 7950 3400
F 0 "U8" H 7950 3900 60  0000 C CNN
F 1 "plot_v1" H 8150 3750 60  0000 C CNN
F 2 "" H 7950 3400 60  0000 C CNN
F 3 "" H 7950 3400 60  0000 C CNN
	1    7950 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	7950 3200 7250 3200
Wire Wire Line
	7550 3100 7250 3100
$Comp
L pulse v1
U 1 1 6191E6CB
P 2450 3750
F 0 "v1" H 2250 3850 60  0000 C CNN
F 1 "pulse" H 2250 3700 60  0000 C CNN
F 2 "R1" H 2150 3750 60  0000 C CNN
F 3 "" H 2450 3750 60  0000 C CNN
	1    2450 3750
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 6191E750
P 2950 3800
F 0 "v2" H 2750 3900 60  0000 C CNN
F 1 "pulse" H 2750 3750 60  0000 C CNN
F 2 "R1" H 2650 3800 60  0000 C CNN
F 3 "" H 2950 3800 60  0000 C CNN
	1    2950 3800
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 6191E7F9
P 3450 3900
F 0 "v3" H 3250 4000 60  0000 C CNN
F 1 "pulse" H 3250 3850 60  0000 C CNN
F 2 "R1" H 3150 3900 60  0000 C CNN
F 3 "" H 3450 3900 60  0000 C CNN
	1    3450 3900
	1    0    0    -1  
$EndComp
Text GLabel 2450 3300 0    60   Input ~ 0
clk
Text GLabel 2950 3350 0    60   Input ~ 0
data_in
Text GLabel 3450 3450 0    60   Input ~ 0
reset
Text GLabel 7950 3200 0    60   Input ~ 0
dout0
Text GLabel 7550 3100 0    60   Input ~ 0
dout1
$Comp
L GND #PWR1
U 1 1 6191E8EB
P 3000 4650
F 0 "#PWR1" H 3000 4400 50  0001 C CNN
F 1 "GND" H 3000 4500 50  0000 C CNN
F 2 "" H 3000 4650 50  0001 C CNN
F 3 "" H 3000 4650 50  0001 C CNN
	1    3000 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2450 4200 2450 4650
Wire Wire Line
	2450 4650 3450 4650
Wire Wire Line
	3450 4650 3450 4350
Connection ~ 3000 4650
Wire Wire Line
	3000 4650 3000 4250
Wire Wire Line
	3000 4250 2950 4250
Wire Wire Line
	2950 3200 2950 3350
Wire Wire Line
	3450 3300 3450 3450
Wire Wire Line
	2450 3100 2450 3300
$EndSCHEMATC
