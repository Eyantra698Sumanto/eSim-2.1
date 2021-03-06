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
L spi U2
U 1 1 61A4D9F8
P 2750 5100
F 0 "U2" H 5600 6900 60  0000 C CNN
F 1 "spi" H 5600 7100 60  0000 C CNN
F 2 "" H 5600 7050 60  0000 C CNN
F 3 "" H 5600 7050 60  0000 C CNN
	1    2750 5100
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U1
U 1 1 61A4DB49
P 1350 5100
F 0 "U1" H 4200 6900 60  0000 C CNN
F 1 "counter8bit" H 4200 7100 60  0000 C CNN
F 2 "" H 4200 7050 60  0000 C CNN
F 3 "" H 4200 7050 60  0000 C CNN
	1    1350 5100
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61A4DDED
P 1500 3700
F 0 "v1" H 1300 3800 60  0000 C CNN
F 1 "pulse" H 1300 3650 60  0000 C CNN
F 2 "R1" H 1200 3700 60  0000 C CNN
F 3 "" H 1500 3700 60  0000 C CNN
	1    1500 3700
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61A4DF90
P 1950 3800
F 0 "v2" H 1750 3900 60  0000 C CNN
F 1 "pulse" H 1750 3750 60  0000 C CNN
F 2 "R1" H 1650 3800 60  0000 C CNN
F 3 "" H 1950 3800 60  0000 C CNN
	1    1950 3800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 61A4E34B
P 2250 6100
F 0 "#PWR1" H 2250 5850 50  0001 C CNN
F 1 "GND" H 2250 5950 50  0000 C CNN
F 2 "" H 2250 6100 50  0001 C CNN
F 3 "" H 2250 6100 50  0001 C CNN
	1    2250 6100
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U4
U 1 1 61A4E781
P 1350 6000
F 0 "U4" H 4200 7800 60  0000 C CNN
F 1 "counter8bit" H 4200 8000 60  0000 C CNN
F 2 "" H 4200 7950 60  0000 C CNN
F 3 "" H 4200 7950 60  0000 C CNN
	1    1350 6000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 61A4E9F4
P 7750 4100
F 0 "U6" H 7750 4600 60  0000 C CNN
F 1 "plot_v1" H 7950 4450 60  0000 C CNN
F 2 "" H 7750 4100 60  0000 C CNN
F 3 "" H 7750 4100 60  0000 C CNN
	1    7750 4100
	1    0    0    -1  
$EndComp
Text GLabel 7750 3900 0    60   Input ~ 0
out0
$Comp
L dac_bridge_1 U5
U 1 1 61A4EB26
P 6900 3950
F 0 "U5" H 6900 3950 60  0000 C CNN
F 1 "dac_bridge_1" H 6900 4100 60  0000 C CNN
F 2 "" H 6900 3950 60  0000 C CNN
F 3 "" H 6900 3950 60  0000 C CNN
	1    6900 3950
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U7
U 1 1 61A4EC59
P 6900 3850
F 0 "U7" H 6900 3850 60  0000 C CNN
F 1 "dac_bridge_1" H 6900 4000 60  0000 C CNN
F 2 "" H 6900 3850 60  0000 C CNN
F 3 "" H 6900 3850 60  0000 C CNN
	1    6900 3850
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 61A4ECFB
P 8250 4000
F 0 "U8" H 8250 4500 60  0000 C CNN
F 1 "plot_v1" H 8450 4350 60  0000 C CNN
F 2 "" H 8250 4000 60  0000 C CNN
F 3 "" H 8250 4000 60  0000 C CNN
	1    8250 4000
	1    0    0    -1  
$EndComp
Text GLabel 8250 3800 0    60   Input ~ 0
out1
$Comp
L adc_bridge_3 U3
U 1 1 61A4EDD8
P 2800 3250
F 0 "U3" H 2800 3250 60  0000 C CNN
F 1 "adc_bridge_3" H 2800 3400 60  0000 C CNN
F 2 "" H 2800 3250 60  0000 C CNN
F 3 "" H 2800 3250 60  0000 C CNN
	1    2800 3250
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 61A4EECF
P 2250 3950
F 0 "v3" H 2050 4050 60  0000 C CNN
F 1 "pulse" H 2050 3900 60  0000 C CNN
F 2 "R1" H 1950 3950 60  0000 C CNN
F 3 "" H 2250 3950 60  0000 C CNN
	1    2250 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3200 3500 3200
Wire Wire Line
	3450 4000 4900 4000
Connection ~ 3450 3200
Wire Wire Line
	3350 3300 3500 3300
Wire Wire Line
	1500 6100 2250 6100
Connection ~ 2250 6100
Wire Wire Line
	3350 4100 3500 4100
Connection ~ 3450 4000
Wire Wire Line
	3500 4200 3400 4200
Wire Wire Line
	3400 4200 3400 3300
Wire Wire Line
	7750 3900 7450 3900
Wire Wire Line
	7450 3800 8250 3800
Wire Wire Line
	3450 3200 3450 4000
Wire Wire Line
	1950 4250 1950 6100
Wire Wire Line
	1500 3200 1500 3250
Wire Wire Line
	1950 3300 1950 3350
Wire Wire Line
	1500 4150 1500 6100
Connection ~ 1950 6100
Wire Wire Line
	2250 6100 2250 4400
Wire Wire Line
	2200 3400 2200 3500
Wire Wire Line
	2200 3500 2250 3500
Wire Wire Line
	2200 3300 1950 3300
Wire Wire Line
	2200 3200 1500 3200
Connection ~ 3400 3300
Wire Wire Line
	3350 3400 3350 4100
$EndSCHEMATC
