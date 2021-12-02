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
LIBS:TrafficController-cache
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
L traffic_light_controller U2
U 1 1 61A3C8BE
P 2700 5200
F 0 "U2" H 5550 7000 60  0000 C CNN
F 1 "traffic_light_controller" H 5550 7200 60  0000 C CNN
F 2 "" H 5550 7150 60  0000 C CNN
F 3 "" H 5550 7150 60  0000 C CNN
	1    2700 5200
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U4
U 1 1 61A3C961
P 4300 3350
F 0 "U4" H 4300 3350 60  0000 C CNN
F 1 "adc_bridge_2" H 4300 3500 60  0000 C CNN
F 2 "" H 4300 3350 60  0000 C CNN
F 3 "" H 4300 3350 60  0000 C CNN
	1    4300 3350
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_8 U6
U 1 1 61A3C9F4
P 6850 3350
F 0 "U6" H 6850 3350 60  0000 C CNN
F 1 "dac_bridge_8" H 6850 3500 60  0000 C CNN
F 2 "" H 6850 3350 60  0000 C CNN
F 3 "" H 6850 3350 60  0000 C CNN
	1    6850 3350
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_2 U5
U 1 1 61A3CA7F
P 6700 4150
F 0 "U5" H 6700 4150 60  0000 C CNN
F 1 "dac_bridge_2" H 6750 4300 60  0000 C CNN
F 2 "" H 6700 4150 60  0000 C CNN
F 3 "" H 6700 4150 60  0000 C CNN
	1    6700 4150
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61A3CAEC
P 2650 3950
F 0 "v1" H 2450 4050 60  0000 C CNN
F 1 "pulse" H 2450 3900 60  0000 C CNN
F 2 "R1" H 2350 3950 60  0000 C CNN
F 3 "" H 2650 3950 60  0000 C CNN
	1    2650 3950
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61A3CB6F
P 3250 3950
F 0 "v2" H 3050 4050 60  0000 C CNN
F 1 "pulse" H 3050 3900 60  0000 C CNN
F 2 "R1" H 2950 3950 60  0000 C CNN
F 3 "" H 3250 3950 60  0000 C CNN
	1    3250 3950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 61A3CBDF
P 2950 4500
F 0 "#PWR01" H 2950 4250 50  0001 C CNN
F 1 "GND" H 2950 4350 50  0000 C CNN
F 2 "" H 2950 4500 50  0001 C CNN
F 3 "" H 2950 4500 50  0001 C CNN
	1    2950 4500
	1    0    0    -1  
$EndComp
Text GLabel 2600 3300 0    60   Input ~ 0
clk
Text GLabel 3150 3400 0    60   Input ~ 0
rst
$Comp
L plot_v1 U3
U 1 1 61A3CD15
P 3250 3600
F 0 "U3" H 3250 4100 60  0000 C CNN
F 1 "plot_v1" H 3450 3950 60  0000 C CNN
F 2 "" H 3250 3600 60  0000 C CNN
F 3 "" H 3250 3600 60  0000 C CNN
	1    3250 3600
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 61A3CDA2
P 2650 3500
F 0 "U1" H 2650 4000 60  0000 C CNN
F 1 "plot_v1" H 2850 3850 60  0000 C CNN
F 2 "" H 2650 3500 60  0000 C CNN
F 3 "" H 2650 3500 60  0000 C CNN
	1    2650 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U7
U 1 1 61A3CE3D
P 7600 3500
F 0 "U7" H 7600 4000 60  0000 C CNN
F 1 "plot_v1" H 7800 3850 60  0000 C CNN
F 2 "" H 7600 3500 60  0000 C CNN
F 3 "" H 7600 3500 60  0000 C CNN
	1    7600 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 61A3CED2
P 7700 3600
F 0 "U8" H 7700 4100 60  0000 C CNN
F 1 "plot_v1" H 7900 3950 60  0000 C CNN
F 2 "" H 7700 3600 60  0000 C CNN
F 3 "" H 7700 3600 60  0000 C CNN
	1    7700 3600
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 61A3CF7B
P 7800 3700
F 0 "U9" H 7800 4200 60  0000 C CNN
F 1 "plot_v1" H 8000 4050 60  0000 C CNN
F 2 "" H 7800 3700 60  0000 C CNN
F 3 "" H 7800 3700 60  0000 C CNN
	1    7800 3700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U10
U 1 1 61A3D006
P 7900 3800
F 0 "U10" H 7900 4300 60  0000 C CNN
F 1 "plot_v1" H 8100 4150 60  0000 C CNN
F 2 "" H 7900 3800 60  0000 C CNN
F 3 "" H 7900 3800 60  0000 C CNN
	1    7900 3800
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U11
U 1 1 61A3D07F
P 8000 3900
F 0 "U11" H 8000 4400 60  0000 C CNN
F 1 "plot_v1" H 8200 4250 60  0000 C CNN
F 2 "" H 8000 3900 60  0000 C CNN
F 3 "" H 8000 3900 60  0000 C CNN
	1    8000 3900
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U12
U 1 1 61A3D0FA
P 8100 4000
F 0 "U12" H 8100 4500 60  0000 C CNN
F 1 "plot_v1" H 8300 4350 60  0000 C CNN
F 2 "" H 8100 4000 60  0000 C CNN
F 3 "" H 8100 4000 60  0000 C CNN
	1    8100 4000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U13
U 1 1 61A3D181
P 8200 4100
F 0 "U13" H 8200 4600 60  0000 C CNN
F 1 "plot_v1" H 8400 4450 60  0000 C CNN
F 2 "" H 8200 4100 60  0000 C CNN
F 3 "" H 8200 4100 60  0000 C CNN
	1    8200 4100
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U14
U 1 1 61A3D20A
P 8300 4200
F 0 "U14" H 8300 4700 60  0000 C CNN
F 1 "plot_v1" H 8500 4550 60  0000 C CNN
F 2 "" H 8300 4200 60  0000 C CNN
F 3 "" H 8300 4200 60  0000 C CNN
	1    8300 4200
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U15
U 1 1 61A3D297
P 8400 4300
F 0 "U15" H 8400 4800 60  0000 C CNN
F 1 "plot_v1" H 8600 4650 60  0000 C CNN
F 2 "" H 8400 4300 60  0000 C CNN
F 3 "" H 8400 4300 60  0000 C CNN
	1    8400 4300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U16
U 1 1 61A3D322
P 8500 4400
F 0 "U16" H 8500 4900 60  0000 C CNN
F 1 "plot_v1" H 8700 4750 60  0000 C CNN
F 2 "" H 8500 4400 60  0000 C CNN
F 3 "" H 8500 4400 60  0000 C CNN
	1    8500 4400
	1    0    0    -1  
$EndComp
Text GLabel 7800 3500 0    60   Input ~ 0
M10
Text GLabel 7700 3400 0    60   Input ~ 0
M11
Text GLabel 7600 3300 0    60   Input ~ 0
M12
Text GLabel 7900 3600 0    60   Input ~ 0
S2
Text GLabel 8000 3700 0    60   Input ~ 0
S1
Text GLabel 8100 3800 0    60   Input ~ 0
S0
Text GLabel 8200 3900 0    60   Input ~ 0
MT2
Text GLabel 8300 4000 0    60   Input ~ 0
MT1
Text GLabel 8400 4100 0    60   Input ~ 0
MT0
Text GLabel 8500 4200 0    60   Input ~ 0
M20
Wire Wire Line
	3250 3500 3250 3400
Wire Wire Line
	3150 3400 3700 3400
Wire Wire Line
	2600 3300 3700 3300
Wire Wire Line
	2650 3300 2650 3500
Wire Wire Line
	2650 4400 3250 4400
Wire Wire Line
	2950 4500 2950 4400
Connection ~ 2950 4400
Connection ~ 2650 3300
Connection ~ 3250 3400
Wire Wire Line
	7250 4200 8500 4200
Wire Wire Line
	7250 4100 8400 4100
Wire Wire Line
	7400 4000 8300 4000
Wire Wire Line
	7400 3900 8200 3900
Wire Wire Line
	7400 3800 8100 3800
Wire Wire Line
	7400 3700 8000 3700
Wire Wire Line
	7400 3600 7900 3600
Wire Wire Line
	7400 3500 7800 3500
Wire Wire Line
	7400 3400 7700 3400
Wire Wire Line
	7400 3300 7600 3300
$EndSCHEMATC
