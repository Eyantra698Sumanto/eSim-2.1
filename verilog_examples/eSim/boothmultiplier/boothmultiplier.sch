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
LIBS:boothmultiplier-cache
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
U 1 1 6187D7D4
P 1750 3850
F 0 "v1" H 1550 3950 60  0000 C CNN
F 1 "pulse" H 1550 3800 60  0000 C CNN
F 2 "R1" H 1450 3850 60  0000 C CNN
F 3 "" H 1750 3850 60  0000 C CNN
	1    1750 3850
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 6187D7D5
P 2100 3950
F 0 "v2" H 1900 4050 60  0000 C CNN
F 1 "pulse" H 1900 3900 60  0000 C CNN
F 2 "R1" H 1800 3950 60  0000 C CNN
F 3 "" H 2100 3950 60  0000 C CNN
	1    2100 3950
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR1
U 1 1 6187D7D7
P 1900 4700
F 0 "#PWR1" H 1900 4450 50  0001 C CNN
F 1 "eSim_GND" H 1900 4550 50  0000 C CNN
F 2 "" H 1900 4700 50  0001 C CNN
F 3 "" H 1900 4700 50  0001 C CNN
	1    1900 4700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 6187D7D8
P 7950 3400
F 0 "U6" H 7950 3900 60  0000 C CNN
F 1 "plot_v1" H 8150 3750 60  0000 C CNN
F 2 "" H 7950 3400 60  0000 C CNN
F 3 "" H 7950 3400 60  0000 C CNN
	1    7950 3400
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 6187D7D9
P 2850 3400
F 0 "U4" H 2850 3400 60  0000 C CNN
F 1 "adc_bridge_2" H 2850 3550 60  0000 C CNN
F 2 "" H 2850 3400 60  0000 C CNN
F 3 "" H 2850 3400 60  0000 C CNN
	1    2850 3400
	1    0    0    -1  
$EndComp
Text GLabel 8250 3350 0    60   Input ~ 0
out
$Comp
L dac_bridge_1 U5
U 1 1 6187D7DA
P 6900 3400
F 0 "U5" H 6900 3400 60  0000 C CNN
F 1 "dac_bridge_1" H 6900 3550 60  0000 C CNN
F 2 "" H 6900 3400 60  0000 C CNN
F 3 "" H 6900 3400 60  0000 C CNN
	1    6900 3400
	1    0    0    -1  
$EndComp
$Comp
L counter4bit U1
U 1 1 6187D86F
P 1350 5250
F 0 "U1" H 4200 7050 60  0000 C CNN
F 1 "counter4bit" H 4200 7250 60  0000 C CNN
F 2 "" H 4200 7200 60  0000 C CNN
F 3 "" H 4200 7200 60  0000 C CNN
	1    1350 5250
	1    0    0    -1  
$EndComp
$Comp
L counter4bit U2
U 1 1 6187D9B0
P 1350 5650
F 0 "U2" H 4200 7450 60  0000 C CNN
F 1 "counter4bit" H 4200 7650 60  0000 C CNN
F 2 "" H 4200 7600 60  0000 C CNN
F 3 "" H 4200 7600 60  0000 C CNN
	1    1350 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 3450 2100 3500
Wire Wire Line
	1750 3350 1750 3400
Wire Wire Line
	1750 4300 1750 4700
Wire Wire Line
	1750 4700 2100 4700
Wire Wire Line
	2100 4700 2100 4400
Connection ~ 1900 4700
Wire Wire Line
	7950 3200 7950 3350
Wire Wire Line
	7450 3350 8250 3350
Connection ~ 7600 3350
Connection ~ 7950 3350
Wire Wire Line
	3400 3350 3500 3350
Wire Wire Line
	3400 3450 3500 3450
Wire Wire Line
	2100 3450 2250 3450
Wire Wire Line
	1750 3350 2250 3350
Wire Wire Line
	3500 3350 3500 3750
Wire Wire Line
	3500 3850 3450 3850
Wire Wire Line
	3450 3850 3450 3450
Connection ~ 3450 3450
$Comp
L jboothmultiplier U3
U 1 1 61920EC3
P 2750 5250
F 0 "U3" H 5600 7050 60  0000 C CNN
F 1 "jboothmultiplier" H 5600 7250 60  0000 C CNN
F 2 "" H 5600 7200 60  0000 C CNN
F 3 "" H 5600 7200 60  0000 C CNN
	1    2750 5250
	1    0    0    -1  
$EndComp
$EndSCHEMATC
