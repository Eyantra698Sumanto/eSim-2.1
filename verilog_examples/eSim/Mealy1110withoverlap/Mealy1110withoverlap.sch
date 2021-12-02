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
L jfsmmealywithoverlap U2
U 1 1 6188B99C
P 3500 4850
F 0 "U2" H 6350 6650 60  0000 C CNN
F 1 "jfsmmealywithoverlap" H 6350 6850 60  0000 C CNN
F 2 "" H 6350 6800 60  0000 C CNN
F 3 "" H 6350 6800 60  0000 C CNN
	1    3500 4850
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 6188BA6D
P 3150 3600
F 0 "v1" H 2950 3700 60  0000 C CNN
F 1 "pulse" H 2950 3550 60  0000 C CNN
F 2 "R1" H 2850 3600 60  0000 C CNN
F 3 "" H 3150 3600 60  0000 C CNN
	1    3150 3600
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 6188BB3C
P 3550 3800
F 0 "v2" H 3350 3900 60  0000 C CNN
F 1 "pulse" H 3350 3750 60  0000 C CNN
F 2 "R1" H 3250 3800 60  0000 C CNN
F 3 "" H 3550 3800 60  0000 C CNN
	1    3550 3800
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 6188BBD9
P 3950 3850
F 0 "v3" H 3750 3950 60  0000 C CNN
F 1 "pulse" H 3750 3800 60  0000 C CNN
F 2 "R1" H 3650 3850 60  0000 C CNN
F 3 "" H 3950 3850 60  0000 C CNN
	1    3950 3850
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U5
U 1 1 6188BC56
P 5100 3000
F 0 "U5" H 5100 3000 60  0000 C CNN
F 1 "adc_bridge_3" H 5100 3150 60  0000 C CNN
F 2 "" H 5100 3000 60  0000 C CNN
F 3 "" H 5100 3000 60  0000 C CNN
	1    5100 3000
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U6
U 1 1 6188BCF3
P 7650 3000
F 0 "U6" H 7650 3000 60  0000 C CNN
F 1 "dac_bridge_1" H 7650 3150 60  0000 C CNN
F 2 "" H 7650 3000 60  0000 C CNN
F 3 "" H 7650 3000 60  0000 C CNN
	1    7650 3000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 6188BD7C
P 8200 3150
F 0 "U7" H 8200 3650 60  0000 C CNN
F 1 "plot_v1" H 8400 3500 60  0000 C CNN
F 2 "" H 8200 3150 60  0000 C CNN
F 3 "" H 8200 3150 60  0000 C CNN
	1    8200 3150
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 6188BE15
P 3150 3050
F 0 "U1" H 3150 3550 60  0000 C CNN
F 1 "plot_v1" H 3350 3400 60  0000 C CNN
F 2 "" H 3150 3050 60  0000 C CNN
F 3 "" H 3150 3050 60  0000 C CNN
	1    3150 3050
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 6188BEE2
P 3550 3050
F 0 "U3" H 3550 3550 60  0000 C CNN
F 1 "plot_v1" H 3750 3400 60  0000 C CNN
F 2 "" H 3550 3050 60  0000 C CNN
F 3 "" H 3550 3050 60  0000 C CNN
	1    3550 3050
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U4
U 1 1 6188BF6D
P 3950 3050
F 0 "U4" H 3950 3550 60  0000 C CNN
F 1 "plot_v1" H 4150 3400 60  0000 C CNN
F 2 "" H 3950 3050 60  0000 C CNN
F 3 "" H 3950 3050 60  0000 C CNN
	1    3950 3050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 6188BFFA
P 3500 4650
F 0 "#PWR1" H 3500 4400 50  0001 C CNN
F 1 "GND" H 3500 4500 50  0000 C CNN
F 2 "" H 3500 4650 50  0001 C CNN
F 3 "" H 3500 4650 50  0001 C CNN
	1    3500 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 4050 3150 4650
Wire Wire Line
	3150 4650 3950 4650
Wire Wire Line
	3550 4650 3550 4250
Connection ~ 3500 4650
Wire Wire Line
	3950 4650 3950 4300
Connection ~ 3550 4650
Wire Wire Line
	3550 2850 3550 3350
Wire Wire Line
	3150 3150 3150 2850
Wire Wire Line
	3150 2950 4500 2950
Connection ~ 3150 2950
Wire Wire Line
	4500 3050 3550 3050
Connection ~ 3550 3050
Wire Wire Line
	3950 2850 3950 3400
Wire Wire Line
	3950 3150 4500 3150
Connection ~ 3950 3150
Text GLabel 3150 2950 0    60   Input ~ 0
clock
Text GLabel 3550 3050 0    60   Input ~ 0
reset
Text GLabel 3950 3150 0    60   Input ~ 0
datain
Text GLabel 8200 2950 2    60   Output ~ 0
dataout
$EndSCHEMATC
