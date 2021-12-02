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
LIBS:arbiter-cache
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
L arbiter U5
U 1 1 619A1129
P 2750 5250
F 0 "U5" H 5600 7050 60  0000 C CNN
F 1 "arbiter" H 5600 7250 60  0000 C CNN
F 2 "" H 5600 7200 60  0000 C CNN
F 3 "" H 5600 7200 60  0000 C CNN
	1    2750 5250
	1    0    0    -1  
$EndComp
$Comp
L counter4bit U1
U 1 1 619A12C5
P 600 5450
F 0 "U1" H 3450 7250 60  0000 C CNN
F 1 "counter4bit" H 3450 7450 60  0000 C CNN
F 2 "" H 3450 7400 60  0000 C CNN
F 3 "" H 3450 7400 60  0000 C CNN
	1    600  5450
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_4 U6
U 1 1 619A146A
P 6850 3550
F 0 "U6" H 6850 3550 60  0000 C CNN
F 1 "dac_bridge_4" H 6850 3850 60  0000 C CNN
F 2 "" H 6850 3550 60  0000 C CNN
F 3 "" H 6850 3550 60  0000 C CNN
	1    6850 3550
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 619A152A
P 1850 3350
F 0 "U4" H 1850 3350 60  0000 C CNN
F 1 "adc_bridge_2" H 1850 3500 60  0000 C CNN
F 2 "" H 1850 3350 60  0000 C CNN
F 3 "" H 1850 3350 60  0000 C CNN
	1    1850 3350
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 619A15AB
P 950 3500
F 0 "U3" H 950 4000 60  0000 C CNN
F 1 "plot_v1" H 1150 3850 60  0000 C CNN
F 2 "" H 950 3500 60  0000 C CNN
F 3 "" H 950 3500 60  0000 C CNN
	1    950  3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 619A162C
P 650 3600
F 0 "U2" H 650 4100 60  0000 C CNN
F 1 "plot_v1" H 850 3950 60  0000 C CNN
F 2 "" H 650 3600 60  0000 C CNN
F 3 "" H 650 3600 60  0000 C CNN
	1    650  3600
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 619A16A5
P 7800 3500
F 0 "U7" H 7800 4000 60  0000 C CNN
F 1 "plot_v1" H 8000 3850 60  0000 C CNN
F 2 "" H 7800 3500 60  0000 C CNN
F 3 "" H 7800 3500 60  0000 C CNN
	1    7800 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 619A1716
P 8050 3500
F 0 "U8" H 8050 4000 60  0000 C CNN
F 1 "plot_v1" H 8250 3850 60  0000 C CNN
F 2 "" H 8050 3500 60  0000 C CNN
F 3 "" H 8050 3500 60  0000 C CNN
	1    8050 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 619A17BB
P 8300 3500
F 0 "U9" H 8300 4000 60  0000 C CNN
F 1 "plot_v1" H 8500 3850 60  0000 C CNN
F 2 "" H 8300 3500 60  0000 C CNN
F 3 "" H 8300 3500 60  0000 C CNN
	1    8300 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U10
U 1 1 619A1852
P 8600 3500
F 0 "U10" H 8600 4000 60  0000 C CNN
F 1 "plot_v1" H 8800 3850 60  0000 C CNN
F 2 "" H 8600 3500 60  0000 C CNN
F 3 "" H 8600 3500 60  0000 C CNN
	1    8600 3500
	1    0    0    -1  
$EndComp
Text GLabel 8600 3650 2    60   Input ~ 0
gnt0
Text GLabel 8300 3550 2    60   Input ~ 0
gnt1
Text GLabel 8050 3450 2    60   Input ~ 0
gnt2
Text GLabel 7800 3350 2    60   Input ~ 0
gnt3
Text GLabel 1000 3300 2    60   Input ~ 0
clk
Text GLabel 750  3400 2    60   Input ~ 0
rst
$Comp
L pulse v1
U 1 1 619A1A41
P 650 4200
F 0 "v1" H 450 4300 60  0000 C CNN
F 1 "pulse" H 450 4150 60  0000 C CNN
F 2 "R1" H 350 4200 60  0000 C CNN
F 3 "" H 650 4200 60  0000 C CNN
	1    650  4200
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 619A1AC2
P 1150 4200
F 0 "v2" H 950 4300 60  0000 C CNN
F 1 "pulse" H 950 4150 60  0000 C CNN
F 2 "R1" H 850 4200 60  0000 C CNN
F 3 "" H 1150 4200 60  0000 C CNN
	1    1150 4200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 619A1B41
P 900 4700
F 0 "#PWR1" H 900 4450 50  0001 C CNN
F 1 "GND" H 900 4550 50  0000 C CNN
F 2 "" H 900 4700 50  0001 C CNN
F 3 "" H 900 4700 50  0001 C CNN
	1    900  4700
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_4 U11
U 1 1 619A2101
P 5200 5000
F 0 "U11" H 5200 5000 60  0000 C CNN
F 1 "dac_bridge_4" H 5200 5300 60  0000 C CNN
F 2 "" H 5200 5000 60  0000 C CNN
F 3 "" H 5200 5000 60  0000 C CNN
	1    5200 5000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U12
U 1 1 619A2107
P 6150 4950
F 0 "U12" H 6150 5450 60  0000 C CNN
F 1 "plot_v1" H 6350 5300 60  0000 C CNN
F 2 "" H 6150 4950 60  0000 C CNN
F 3 "" H 6150 4950 60  0000 C CNN
	1    6150 4950
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U13
U 1 1 619A210D
P 6400 4950
F 0 "U13" H 6400 5450 60  0000 C CNN
F 1 "plot_v1" H 6600 5300 60  0000 C CNN
F 2 "" H 6400 4950 60  0000 C CNN
F 3 "" H 6400 4950 60  0000 C CNN
	1    6400 4950
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U14
U 1 1 619A2113
P 6650 4950
F 0 "U14" H 6650 5450 60  0000 C CNN
F 1 "plot_v1" H 6850 5300 60  0000 C CNN
F 2 "" H 6650 4950 60  0000 C CNN
F 3 "" H 6650 4950 60  0000 C CNN
	1    6650 4950
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U15
U 1 1 619A2119
P 6950 4950
F 0 "U15" H 6950 5450 60  0000 C CNN
F 1 "plot_v1" H 7150 5300 60  0000 C CNN
F 2 "" H 6950 4950 60  0000 C CNN
F 3 "" H 6950 4950 60  0000 C CNN
	1    6950 4950
	1    0    0    -1  
$EndComp
Text GLabel 6950 5100 2    60   Input ~ 0
req0
Text GLabel 6650 5000 2    60   Input ~ 0
req1
Text GLabel 6400 4900 2    60   Input ~ 0
req2
Text GLabel 6150 4800 2    60   Input ~ 0
req3
Wire Wire Line
	950  3300 1250 3300
Wire Wire Line
	650  3400 1250 3400
Wire Wire Line
	7400 3350 7800 3350
Wire Wire Line
	7800 3350 7800 3300
Wire Wire Line
	7400 3450 8050 3450
Wire Wire Line
	8050 3450 8050 3300
Wire Wire Line
	7400 3550 8300 3550
Wire Wire Line
	8300 3550 8300 3300
Wire Wire Line
	7400 3650 8600 3650
Wire Wire Line
	8600 3650 8600 3300
Wire Wire Line
	650  4650 1150 4650
Wire Wire Line
	900  4650 900  4700
Connection ~ 900  4650
Wire Wire Line
	650  3750 650  3400
Wire Wire Line
	1150 3300 1150 3750
Connection ~ 1150 3300
Wire Wire Line
	4150 3550 4900 3550
Wire Wire Line
	3200 3350 4900 3350
Wire Wire Line
	3200 3450 4900 3450
Wire Wire Line
	4150 3650 4900 3650
Wire Wire Line
	4900 3750 4150 3750
Wire Wire Line
	4900 3850 4150 3850
Wire Wire Line
	5750 4800 6150 4800
Wire Wire Line
	6150 4800 6150 4750
Wire Wire Line
	5750 4900 6400 4900
Wire Wire Line
	6400 4900 6400 4750
Wire Wire Line
	5750 5000 6650 5000
Wire Wire Line
	6650 5000 6650 4750
Wire Wire Line
	5750 5100 6950 5100
Wire Wire Line
	6950 5100 6950 4750
Wire Wire Line
	4650 4800 4650 3550
Connection ~ 4650 3550
Wire Wire Line
	4600 4900 4600 3650
Connection ~ 4600 3650
Wire Wire Line
	4650 4900 4600 4900
Wire Wire Line
	4650 5000 4550 5000
Wire Wire Line
	4550 5000 4550 3750
Connection ~ 4550 3750
Wire Wire Line
	4650 5100 4450 5100
Wire Wire Line
	4450 5100 4450 3850
Connection ~ 4450 3850
Wire Wire Line
	2400 3300 3200 3300
Wire Wire Line
	3200 3300 3200 3350
Wire Wire Line
	2400 3400 3200 3400
Wire Wire Line
	3200 3400 3200 3450
Wire Wire Line
	2750 3550 2750 3300
Connection ~ 2750 3300
Wire Wire Line
	2750 3650 2650 3650
Wire Wire Line
	2650 3650 2650 3400
Connection ~ 2650 3400
$EndSCHEMATC
