EESchema Schematic File Version 2
LIBS:interruptcontroller-rescue
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
LIBS:interruptcontroller-cache
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
L counter8bit U3
U 1 1 61A4B747
P 2750 4800
F 0 "U3" H 5600 6600 60  0000 C CNN
F 1 "counter8bit" H 5600 6800 60  0000 C CNN
F 2 "" H 5600 6750 60  0000 C CNN
F 3 "" H 5600 6750 60  0000 C CNN
	1    2750 4800
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61A4B8DA
P 1600 3950
F 0 "v1" H 1400 4050 60  0000 C CNN
F 1 "pulse" H 1400 3900 60  0000 C CNN
F 2 "R1" H 1300 3950 60  0000 C CNN
F 3 "" H 1600 3950 60  0000 C CNN
	1    1600 3950
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61A4B9B4
P 2000 4100
F 0 "v2" H 1800 4200 60  0000 C CNN
F 1 "pulse" H 1800 4050 60  0000 C CNN
F 2 "R1" H 1700 4100 60  0000 C CNN
F 3 "" H 2000 4100 60  0000 C CNN
	1    2000 4100
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 61A4BA59
P 2450 4200
F 0 "v3" H 2250 4300 60  0000 C CNN
F 1 "pulse" H 2250 4150 60  0000 C CNN
F 2 "R1" H 2150 4200 60  0000 C CNN
F 3 "" H 2450 4200 60  0000 C CNN
	1    2450 4200
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U5
U 1 1 61A4BAB0
P 4150 2950
F 0 "U5" H 4150 2950 60  0000 C CNN
F 1 "adc_bridge_3" H 4150 3100 60  0000 C CNN
F 2 "" H 4150 2950 60  0000 C CNN
F 3 "" H 4150 2950 60  0000 C CNN
	1    4150 2950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 61A4BD8C
P 2000 4750
F 0 "#PWR01" H 2000 4500 50  0001 C CNN
F 1 "GND" H 2000 4600 50  0000 C CNN
F 2 "" H 2000 4750 50  0001 C CNN
F 3 "" H 2000 4750 50  0001 C CNN
	1    2000 4750
	1    0    0    -1  
$EndComp
Text GLabel 1600 2900 0    60   Input ~ 0
clk
Text GLabel 2000 3000 0    60   Input ~ 0
rst
Text GLabel 2450 3100 0    60   Input ~ 0
intr_in
$Comp
L plot_v1 U1
U 1 1 61A4BEAD
P 2000 2900
F 0 "U1" H 2000 3400 60  0000 C CNN
F 1 "plot_v1" H 2200 3250 60  0000 C CNN
F 2 "" H 2000 2900 60  0000 C CNN
F 3 "" H 2000 2900 60  0000 C CNN
	1    2000 2900
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 61A4BF45
P 2450 2900
F 0 "U2" H 2450 3400 60  0000 C CNN
F 1 "plot_v1" H 2650 3250 60  0000 C CNN
F 2 "" H 2450 2900 60  0000 C CNN
F 3 "" H 2450 2900 60  0000 C CNN
	1    2450 2900
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U4
U 1 1 61A4BFBB
P 3000 2900
F 0 "U4" H 3000 3400 60  0000 C CNN
F 1 "plot_v1" H 3200 3250 60  0000 C CNN
F 2 "" H 3000 2900 60  0000 C CNN
F 3 "" H 3000 2900 60  0000 C CNN
	1    3000 2900
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U7
U 1 1 61A4C0EE
P 8150 2750
F 0 "U7" H 8150 2750 60  0000 C CNN
F 1 "dac_bridge_2" H 8200 2900 60  0000 C CNN
F 2 "" H 8150 2750 60  0000 C CNN
F 3 "" H 8150 2750 60  0000 C CNN
	1    8150 2750
	1    0    0    -1  
$EndComp
Text GLabel 9200 2700 0    60   Input ~ 0
intr_out
Text GLabel 9250 2850 0    60   Input ~ 0
busoe
$Comp
L plot_v1 U8
U 1 1 61A4C2B5
P 8700 2550
F 0 "U8" H 8700 3050 60  0000 C CNN
F 1 "plot_v1" H 8900 2900 60  0000 C CNN
F 2 "" H 8700 2550 60  0000 C CNN
F 3 "" H 8700 2550 60  0000 C CNN
	1    8700 2550
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 61A4C36F
P 9000 2550
F 0 "U9" H 9000 3050 60  0000 C CNN
F 1 "plot_v1" H 9200 2900 60  0000 C CNN
F 2 "" H 9000 2550 60  0000 C CNN
F 3 "" H 9000 2550 60  0000 C CNN
	1    9000 2550
	1    0    0    -1  
$EndComp
$Comp
L intr_cntrl-RESCUE-interruptcontroller U10
U 1 1 61A4D43E
P 4150 4600
F 0 "U10" H 7000 6400 60  0000 C CNN
F 1 "intr_cntrl" H 7000 6600 60  0000 C CNN
F 2 "" H 7000 6550 60  0000 C CNN
F 3 "" H 7000 6550 60  0000 C CNN
	1    4150 4600
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U6
U 1 1 61A4D2DE
P 2750 5600
F 0 "U6" H 5600 7400 60  0000 C CNN
F 1 "counter8bit" H 5600 7600 60  0000 C CNN
F 2 "" H 5600 7550 60  0000 C CNN
F 3 "" H 5600 7550 60  0000 C CNN
	1    2750 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 2700 4750 2700
Wire Wire Line
	4700 2900 4900 2900
Connection ~ 4750 2900
Wire Wire Line
	6300 2800 4800 2800
Wire Wire Line
	4700 3000 4900 3000
Connection ~ 4800 3000
Wire Wire Line
	4800 3100 4800 3150
Wire Wire Line
	4800 3150 4850 3150
Wire Wire Line
	4800 3100 4700 3100
Wire Wire Line
	1600 2900 3550 2900
Wire Wire Line
	1600 2900 1600 3500
Wire Wire Line
	2000 3650 2000 3000
Wire Wire Line
	2000 3000 3550 3000
Wire Wire Line
	3550 3100 2450 3100
Wire Wire Line
	2450 3100 2450 3750
Wire Wire Line
	1600 4400 1600 4750
Wire Wire Line
	1600 4750 2450 4750
Wire Wire Line
	2050 4750 2050 4550
Connection ~ 2000 4750
Wire Wire Line
	2050 4550 2000 4550
Wire Wire Line
	2450 4750 2450 4650
Connection ~ 2050 4750
Wire Wire Line
	3000 2700 3000 3100
Connection ~ 3000 3100
Wire Wire Line
	2450 2700 2450 3000
Connection ~ 2450 3000
Wire Wire Line
	2000 2700 2000 2900
Connection ~ 2000 2900
Wire Wire Line
	9200 2700 8700 2700
Wire Wire Line
	8700 2800 9250 2800
Wire Wire Line
	9250 2800 9250 2850
Wire Wire Line
	8700 2700 8700 2350
Wire Wire Line
	9000 2350 9050 2350
Wire Wire Line
	9050 2350 9050 2800
Connection ~ 9050 2800
Wire Wire Line
	4850 3150 4850 4500
Wire Wire Line
	4850 4500 6300 4500
Wire Wire Line
	4800 3800 4900 3800
Wire Wire Line
	4750 3700 4900 3700
Wire Wire Line
	4800 2800 4800 3800
Wire Wire Line
	4750 2700 4750 3700
$EndSCHEMATC
