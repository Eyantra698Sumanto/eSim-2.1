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
L jserialadder U4
U 1 1 61892AB8
P 1850 4750
F 0 "U4" H 4700 6550 60  0000 C CNN
F 1 "jserialadder" H 4700 6750 60  0000 C CNN
F 2 "" H 4700 6700 60  0000 C CNN
F 3 "" H 4700 6700 60  0000 C CNN
	1    1850 4750
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_5 U7
U 1 1 61892B94
P 3450 2900
F 0 "U7" H 3450 2900 60  0000 C CNN
F 1 "adc_bridge_5" H 3450 3050 60  0000 C CNN
F 2 "" H 3450 2900 60  0000 C CNN
F 3 "" H 3450 2900 60  0000 C CNN
	1    3450 2900
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_8 U9
U 1 1 61892C27
P 6000 2900
F 0 "U9" H 6000 2900 60  0000 C CNN
F 1 "dac_bridge_8" H 6000 3050 60  0000 C CNN
F 2 "" H 6000 2900 60  0000 C CNN
F 3 "" H 6000 2900 60  0000 C CNN
	1    6000 2900
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U8
U 1 1 61892CAA
P 5850 3700
F 0 "U8" H 5850 3700 60  0000 C CNN
F 1 "dac_bridge_2" H 5900 3850 60  0000 C CNN
F 2 "" H 5850 3700 60  0000 C CNN
F 3 "" H 5850 3700 60  0000 C CNN
	1    5850 3700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U10
U 1 1 61892D3F
P 6550 3050
F 0 "U10" H 6550 3550 60  0000 C CNN
F 1 "plot_v1" H 6750 3400 60  0000 C CNN
F 2 "" H 6550 3050 60  0000 C CNN
F 3 "" H 6550 3050 60  0000 C CNN
	1    6550 3050
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U11
U 1 1 61892F82
P 6850 3150
F 0 "U11" H 6850 3650 60  0000 C CNN
F 1 "plot_v1" H 7050 3500 60  0000 C CNN
F 2 "" H 6850 3150 60  0000 C CNN
F 3 "" H 6850 3150 60  0000 C CNN
	1    6850 3150
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U12
U 1 1 6189300B
P 7150 3200
F 0 "U12" H 7150 3700 60  0000 C CNN
F 1 "plot_v1" H 7350 3550 60  0000 C CNN
F 2 "" H 7150 3200 60  0000 C CNN
F 3 "" H 7150 3200 60  0000 C CNN
	1    7150 3200
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U13
U 1 1 61893053
P 7350 3300
F 0 "U13" H 7350 3800 60  0000 C CNN
F 1 "plot_v1" H 7550 3650 60  0000 C CNN
F 2 "" H 7350 3300 60  0000 C CNN
F 3 "" H 7350 3300 60  0000 C CNN
	1    7350 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U14
U 1 1 618930CE
P 7650 3450
F 0 "U14" H 7650 3950 60  0000 C CNN
F 1 "plot_v1" H 7850 3800 60  0000 C CNN
F 2 "" H 7650 3450 60  0000 C CNN
F 3 "" H 7650 3450 60  0000 C CNN
	1    7650 3450
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U15
U 1 1 6189314B
P 7950 3550
F 0 "U15" H 7950 4050 60  0000 C CNN
F 1 "plot_v1" H 8150 3900 60  0000 C CNN
F 2 "" H 7950 3550 60  0000 C CNN
F 3 "" H 7950 3550 60  0000 C CNN
	1    7950 3550
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U16
U 1 1 6189319E
P 8200 3650
F 0 "U16" H 8200 4150 60  0000 C CNN
F 1 "plot_v1" H 8400 4000 60  0000 C CNN
F 2 "" H 8200 3650 60  0000 C CNN
F 3 "" H 8200 3650 60  0000 C CNN
	1    8200 3650
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U17
U 1 1 6189322D
P 8500 3750
F 0 "U17" H 8500 4250 60  0000 C CNN
F 1 "plot_v1" H 8700 4100 60  0000 C CNN
F 2 "" H 8500 3750 60  0000 C CNN
F 3 "" H 8500 3750 60  0000 C CNN
	1    8500 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 2950 6550 2950
Wire Wire Line
	6550 3050 7150 3050
Wire Wire Line
	7150 3050 7150 3000
Wire Wire Line
	6550 3150 7350 3150
Wire Wire Line
	7350 3150 7350 3100
Wire Wire Line
	6550 3250 7650 3250
Wire Wire Line
	6550 3350 7950 3350
Wire Wire Line
	8200 3450 6550 3450
Wire Wire Line
	6550 3550 8500 3550
$Comp
L plot_v1 U6
U 1 1 61893410
P 2500 3050
F 0 "U6" H 2500 3550 60  0000 C CNN
F 1 "plot_v1" H 2700 3400 60  0000 C CNN
F 2 "" H 2500 3050 60  0000 C CNN
F 3 "" H 2500 3050 60  0000 C CNN
	1    2500 3050
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U5
U 1 1 61893432
P 2200 3000
F 0 "U5" H 2200 3500 60  0000 C CNN
F 1 "plot_v1" H 2400 3350 60  0000 C CNN
F 2 "" H 2200 3000 60  0000 C CNN
F 3 "" H 2200 3000 60  0000 C CNN
	1    2200 3000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 618934DA
P 1850 3000
F 0 "U3" H 1850 3500 60  0000 C CNN
F 1 "plot_v1" H 2050 3350 60  0000 C CNN
F 2 "" H 1850 3000 60  0000 C CNN
F 3 "" H 1850 3000 60  0000 C CNN
	1    1850 3000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 6189357C
P 1600 3000
F 0 "U2" H 1600 3500 60  0000 C CNN
F 1 "plot_v1" H 1800 3350 60  0000 C CNN
F 2 "" H 1600 3000 60  0000 C CNN
F 3 "" H 1600 3000 60  0000 C CNN
	1    1600 3000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 61893606
P 1350 3000
F 0 "U1" H 1350 3500 60  0000 C CNN
F 1 "plot_v1" H 1550 3350 60  0000 C CNN
F 2 "" H 1350 3000 60  0000 C CNN
F 3 "" H 1350 3000 60  0000 C CNN
	1    1350 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 2850 2850 2850
Wire Wire Line
	2200 2800 2850 2800
Wire Wire Line
	2850 2800 2850 2950
Wire Wire Line
	1850 2800 1850 3050
Wire Wire Line
	1850 3050 2850 3050
Wire Wire Line
	1600 2800 1600 3150
Wire Wire Line
	1600 3150 2850 3150
Wire Wire Line
	1350 2800 1350 3450
Wire Wire Line
	1350 3250 2850 3250
$Comp
L pulse v1
U 1 1 6189373D
P 1350 3900
F 0 "v1" H 1150 4000 60  0000 C CNN
F 1 "pulse" H 1150 3850 60  0000 C CNN
F 2 "R1" H 1050 3900 60  0000 C CNN
F 3 "" H 1350 3900 60  0000 C CNN
	1    1350 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61893826
P 1700 3900
F 0 "v2" H 1500 4000 60  0000 C CNN
F 1 "pulse" H 1500 3850 60  0000 C CNN
F 2 "R1" H 1400 3900 60  0000 C CNN
F 3 "" H 1700 3900 60  0000 C CNN
	1    1700 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 618938CE
P 2050 3900
F 0 "v3" H 1850 4000 60  0000 C CNN
F 1 "pulse" H 1850 3850 60  0000 C CNN
F 2 "R1" H 1750 3900 60  0000 C CNN
F 3 "" H 2050 3900 60  0000 C CNN
	1    2050 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v4
U 1 1 61893970
P 2350 3900
F 0 "v4" H 2150 4000 60  0000 C CNN
F 1 "pulse" H 2150 3850 60  0000 C CNN
F 2 "R1" H 2050 3900 60  0000 C CNN
F 3 "" H 2350 3900 60  0000 C CNN
	1    2350 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v5
U 1 1 61893A0C
P 2700 3900
F 0 "v5" H 2500 4000 60  0000 C CNN
F 1 "pulse" H 2500 3850 60  0000 C CNN
F 2 "R1" H 2400 3900 60  0000 C CNN
F 3 "" H 2700 3900 60  0000 C CNN
	1    2700 3900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 61893A96
P 2000 4850
F 0 "#PWR1" H 2000 4600 50  0001 C CNN
F 1 "GND" H 2000 4700 50  0000 C CNN
F 2 "" H 2000 4850 50  0001 C CNN
F 3 "" H 2000 4850 50  0001 C CNN
	1    2000 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 4350 1350 4850
Wire Wire Line
	1350 4850 2700 4850
Wire Wire Line
	1700 4350 1700 4850
Connection ~ 1700 4850
Wire Wire Line
	2050 4850 2050 4350
Connection ~ 2000 4850
Wire Wire Line
	2350 4850 2350 4350
Connection ~ 2050 4850
Wire Wire Line
	2700 4850 2700 4350
Connection ~ 2350 4850
Connection ~ 1350 3250
Wire Wire Line
	1700 3150 1700 3450
Connection ~ 1700 3150
Wire Wire Line
	2050 3450 2050 3050
Connection ~ 2050 3050
Wire Wire Line
	2350 3450 2350 2800
Connection ~ 2350 2800
Wire Wire Line
	2700 3450 2700 2850
Connection ~ 2700 2850
Text GLabel 2700 2850 0    60   Input ~ 0
clk
Text GLabel 2350 2800 0    60   Input ~ 0
rst
Text GLabel 2050 3050 0    60   Input ~ 0
a
Text GLabel 1700 3150 0    60   Input ~ 0
b
Text GLabel 1350 3250 0    60   Input ~ 0
carryin
$Comp
L plot_v1 U18
U 1 1 61893E28
P 8850 3800
F 0 "U18" H 8850 4300 60  0000 C CNN
F 1 "plot_v1" H 9050 4150 60  0000 C CNN
F 2 "" H 8850 3800 60  0000 C CNN
F 3 "" H 8850 3800 60  0000 C CNN
	1    8850 3800
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U19
U 1 1 61893EC6
P 9100 3900
F 0 "U19" H 9100 4400 60  0000 C CNN
F 1 "plot_v1" H 9300 4250 60  0000 C CNN
F 2 "" H 9100 3900 60  0000 C CNN
F 3 "" H 9100 3900 60  0000 C CNN
	1    9100 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 3750 9100 3750
Wire Wire Line
	9100 3750 9100 3700
Wire Wire Line
	6400 3650 8850 3650
Wire Wire Line
	8850 3650 8850 3600
Text GLabel 6550 2850 0    60   Input ~ 0
y3
Text GLabel 6850 2950 0    60   Input ~ 0
y2
Text GLabel 7150 3050 0    60   Input ~ 0
y1
Text GLabel 7350 3150 0    60   Input ~ 0
y0
Text GLabel 7650 3250 0    60   Input ~ 0
carryout
Text GLabel 7950 3350 0    60   Input ~ 0
isValid
Text GLabel 8200 3450 0    60   Input ~ 0
currentsum
Text GLabel 8500 3550 0    60   Input ~ 0
currentcarry
Text GLabel 8850 3650 0    60   Input ~ 0
currentbitcount1
Text GLabel 9100 3750 0    60   Input ~ 0
currentbitcount0
$EndSCHEMATC
