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
LIBS:divideby45-cache
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
L clk_div_45 U1
U 1 1 619A2B5B
P 2250 5400
F 0 "U1" H 5100 7200 60  0000 C CNN
F 1 "clk_div_45" H 5100 7400 60  0000 C CNN
F 2 "" H 5100 7350 60  0000 C CNN
F 3 "" H 5100 7350 60  0000 C CNN
	1    2250 5400
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U3
U 1 1 619A2BC3
P 6400 3550
F 0 "U3" H 6400 3550 60  0000 C CNN
F 1 "dac_bridge_1" H 6400 3700 60  0000 C CNN
F 2 "" H 6400 3550 60  0000 C CNN
F 3 "" H 6400 3550 60  0000 C CNN
	1    6400 3550
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U2
U 1 1 619A2C8C
P 3850 3550
F 0 "U2" H 3850 3550 60  0000 C CNN
F 1 "adc_bridge_2" H 3850 3700 60  0000 C CNN
F 2 "" H 3850 3550 60  0000 C CNN
F 3 "" H 3850 3550 60  0000 C CNN
	1    3850 3550
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 619A2CB7
P 2500 4050
F 0 "v1" H 2300 4150 60  0000 C CNN
F 1 "pulse" H 2300 4000 60  0000 C CNN
F 2 "R1" H 2200 4050 60  0000 C CNN
F 3 "" H 2500 4050 60  0000 C CNN
	1    2500 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 3600 2500 3500
Wire Wire Line
	2300 3500 3250 3500
$Comp
L GND #PWR01
U 1 1 619A2D45
P 2750 4950
F 0 "#PWR01" H 2750 4700 50  0001 C CNN
F 1 "GND" H 2750 4800 50  0000 C CNN
F 2 "" H 2750 4950 50  0001 C CNN
F 3 "" H 2750 4950 50  0001 C CNN
	1    2750 4950
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 619A2D63
P 3000 4200
F 0 "v2" H 2800 4300 60  0000 C CNN
F 1 "pulse" H 2800 4150 60  0000 C CNN
F 2 "R1" H 2700 4200 60  0000 C CNN
F 3 "" H 3000 4200 60  0000 C CNN
	1    3000 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 3750 3000 3600
Wire Wire Line
	3000 3600 3250 3600
Wire Wire Line
	3000 4950 3000 4650
Wire Wire Line
	2500 4950 3000 4950
Wire Wire Line
	2500 4500 2500 4950
Connection ~ 2750 4950
$Comp
L plot_v1 U4
U 1 1 619A2EFE
P 7250 3650
F 0 "U4" H 7250 4150 60  0000 C CNN
F 1 "plot_v1" H 7450 4000 60  0000 C CNN
F 2 "" H 7250 3650 60  0000 C CNN
F 3 "" H 7250 3650 60  0000 C CNN
	1    7250 3650
	1    0    0    -1  
$EndComp
Text GLabel 2300 3500 0    60   Input ~ 0
clk
Text GLabel 2900 3650 0    60   Input ~ 0
en
Text GLabel 7400 3500 2    60   Input ~ 0
clkdivideby4_5
Wire Wire Line
	6950 3500 7400 3500
Wire Wire Line
	7250 3450 7250 3500
Connection ~ 7250 3500
Connection ~ 2500 3500
Wire Wire Line
	2900 3650 3000 3650
Connection ~ 3000 3650
$Comp
L plot_v1 U5
U 1 1 619A30AB
P 2500 3700
F 0 "U5" H 2500 4200 60  0000 C CNN
F 1 "plot_v1" H 2700 4050 60  0000 C CNN
F 2 "" H 2500 3700 60  0000 C CNN
F 3 "" H 2500 3700 60  0000 C CNN
	1    2500 3700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 619A315B
P 3000 3850
F 0 "U6" H 3000 4350 60  0000 C CNN
F 1 "plot_v1" H 3200 4200 60  0000 C CNN
F 2 "" H 3000 3850 60  0000 C CNN
F 3 "" H 3000 3850 60  0000 C CNN
	1    3000 3850
	1    0    0    -1  
$EndComp
$EndSCHEMATC
