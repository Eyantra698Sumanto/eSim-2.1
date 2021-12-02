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
L us_sensor U1
U 1 1 61A38628
P 2750 5200
F 0 "U1" H 5600 7000 60  0000 C CNN
F 1 "us_sensor" H 5600 7200 60  0000 C CNN
F 2 "" H 5600 7150 60  0000 C CNN
F 3 "" H 5600 7150 60  0000 C CNN
	1    2750 5200
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U2
U 1 1 61A386F5
P 4350 3350
F 0 "U2" H 4350 3350 60  0000 C CNN
F 1 "adc_bridge_2" H 4350 3500 60  0000 C CNN
F 2 "" H 4350 3350 60  0000 C CNN
F 3 "" H 4350 3350 60  0000 C CNN
	1    4350 3350
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 61A3878C
P 2800 3900
F 0 "v1" H 2600 4000 60  0000 C CNN
F 1 "pulse" H 2600 3850 60  0000 C CNN
F 2 "R1" H 2500 3900 60  0000 C CNN
F 3 "" H 2800 3900 60  0000 C CNN
	1    2800 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 61A38827
P 3350 4000
F 0 "v2" H 3150 4100 60  0000 C CNN
F 1 "pulse" H 3150 3950 60  0000 C CNN
F 2 "R1" H 3050 4000 60  0000 C CNN
F 3 "" H 3350 4000 60  0000 C CNN
	1    3350 4000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR1
U 1 1 61A388BE
P 3050 4600
F 0 "#PWR1" H 3050 4350 50  0001 C CNN
F 1 "GND" H 3050 4450 50  0000 C CNN
F 2 "" H 3050 4600 50  0001 C CNN
F 3 "" H 3050 4600 50  0001 C CNN
	1    3050 4600
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_8 U6
U 1 1 61A38941
P 6900 3350
F 0 "U6" H 6900 3350 60  0000 C CNN
F 1 "dac_bridge_8" H 6900 3500 60  0000 C CNN
F 2 "" H 6900 3350 60  0000 C CNN
F 3 "" H 6900 3350 60  0000 C CNN
	1    6900 3350
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_4 U5
U 1 1 61A389BE
P 6850 4300
F 0 "U5" H 6850 4300 60  0000 C CNN
F 1 "dac_bridge_4" H 6850 4600 60  0000 C CNN
F 2 "" H 6850 4300 60  0000 C CNN
F 3 "" H 6850 4300 60  0000 C CNN
	1    6850 4300
	1    0    0    -1  
$EndComp
Text GLabel 2700 3300 0    60   Input ~ 0
clk
Text GLabel 3300 3400 0    60   Input ~ 0
echo
Wire Wire Line
	3350 3550 3350 3400
Wire Wire Line
	3300 3400 3750 3400
Wire Wire Line
	2700 3300 3750 3300
Wire Wire Line
	2800 3300 2800 3450
Wire Wire Line
	2800 4350 2800 4600
Wire Wire Line
	2800 4600 3350 4600
Wire Wire Line
	3350 4600 3350 4450
Connection ~ 3050 4600
Connection ~ 2800 3300
Connection ~ 3350 3400
$Comp
L plot_v1 U3
U 1 1 61A38A7F
P 2800 3500
F 0 "U3" H 2800 4000 60  0000 C CNN
F 1 "plot_v1" H 3000 3850 60  0000 C CNN
F 2 "" H 2800 3500 60  0000 C CNN
F 3 "" H 2800 3500 60  0000 C CNN
	1    2800 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U4
U 1 1 61A38AF6
P 3350 3600
F 0 "U4" H 3350 4100 60  0000 C CNN
F 1 "plot_v1" H 3550 3950 60  0000 C CNN
F 2 "" H 3350 3600 60  0000 C CNN
F 3 "" H 3350 3600 60  0000 C CNN
	1    3350 3600
	1    0    0    -1  
$EndComp
Text GLabel 7750 3300 0    60   Input ~ 0
trig
Wire Wire Line
	7450 3300 8100 3300
Text GLabel 7750 4400 0    60   Input ~ 0
en0
Wire Wire Line
	7400 4400 9200 4400
Text GLabel 7750 4300 0    60   Input ~ 0
en1
Wire Wire Line
	7400 4300 9100 4300
Text GLabel 7750 4200 0    60   Input ~ 0
en2
Wire Wire Line
	7400 4200 9000 4200
Text GLabel 7750 4100 0    60   Input ~ 0
ss0
Wire Wire Line
	7400 4100 8900 4100
Text GLabel 7750 4000 0    60   Input ~ 0
ss1
Wire Wire Line
	7450 4000 8800 4000
Text GLabel 7750 3900 0    60   Input ~ 0
ss2
Text GLabel 7750 3800 0    60   Input ~ 0
ss3
Text GLabel 7750 3700 0    60   Input ~ 0
ss4
Text GLabel 7750 3600 0    60   Input ~ 0
ss5
Text GLabel 7750 3500 0    60   Input ~ 0
ss6
Text GLabel 7750 3400 0    60   Input ~ 0
ss7
Wire Wire Line
	7450 3400 8200 3400
Wire Wire Line
	7450 3500 8300 3500
Wire Wire Line
	7450 3600 8400 3600
Wire Wire Line
	7450 3700 8500 3700
Wire Wire Line
	7450 3800 8600 3800
Wire Wire Line
	7450 3900 8700 3900
$Comp
L plot_v1 U7
U 1 1 61A38DF0
P 8100 3500
F 0 "U7" H 8100 4000 60  0000 C CNN
F 1 "plot_v1" H 8300 3850 60  0000 C CNN
F 2 "" H 8100 3500 60  0000 C CNN
F 3 "" H 8100 3500 60  0000 C CNN
	1    8100 3500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U8
U 1 1 61A38E6B
P 8200 3600
F 0 "U8" H 8200 4100 60  0000 C CNN
F 1 "plot_v1" H 8400 3950 60  0000 C CNN
F 2 "" H 8200 3600 60  0000 C CNN
F 3 "" H 8200 3600 60  0000 C CNN
	1    8200 3600
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U9
U 1 1 61A38EDE
P 8300 3700
F 0 "U9" H 8300 4200 60  0000 C CNN
F 1 "plot_v1" H 8500 4050 60  0000 C CNN
F 2 "" H 8300 3700 60  0000 C CNN
F 3 "" H 8300 3700 60  0000 C CNN
	1    8300 3700
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U10
U 1 1 61A38F49
P 8400 3800
F 0 "U10" H 8400 4300 60  0000 C CNN
F 1 "plot_v1" H 8600 4150 60  0000 C CNN
F 2 "" H 8400 3800 60  0000 C CNN
F 3 "" H 8400 3800 60  0000 C CNN
	1    8400 3800
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U11
U 1 1 61A38FA8
P 8500 3900
F 0 "U11" H 8500 4400 60  0000 C CNN
F 1 "plot_v1" H 8700 4250 60  0000 C CNN
F 2 "" H 8500 3900 60  0000 C CNN
F 3 "" H 8500 3900 60  0000 C CNN
	1    8500 3900
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U12
U 1 1 61A3902D
P 8600 4000
F 0 "U12" H 8600 4500 60  0000 C CNN
F 1 "plot_v1" H 8800 4350 60  0000 C CNN
F 2 "" H 8600 4000 60  0000 C CNN
F 3 "" H 8600 4000 60  0000 C CNN
	1    8600 4000
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U13
U 1 1 61A3907E
P 8700 4100
F 0 "U13" H 8700 4600 60  0000 C CNN
F 1 "plot_v1" H 8900 4450 60  0000 C CNN
F 2 "" H 8700 4100 60  0000 C CNN
F 3 "" H 8700 4100 60  0000 C CNN
	1    8700 4100
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U14
U 1 1 61A390E9
P 8800 4200
F 0 "U14" H 8800 4700 60  0000 C CNN
F 1 "plot_v1" H 9000 4550 60  0000 C CNN
F 2 "" H 8800 4200 60  0000 C CNN
F 3 "" H 8800 4200 60  0000 C CNN
	1    8800 4200
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U15
U 1 1 61A39166
P 8900 4300
F 0 "U15" H 8900 4800 60  0000 C CNN
F 1 "plot_v1" H 9100 4650 60  0000 C CNN
F 2 "" H 8900 4300 60  0000 C CNN
F 3 "" H 8900 4300 60  0000 C CNN
	1    8900 4300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U16
U 1 1 61A391C3
P 9000 4400
F 0 "U16" H 9000 4900 60  0000 C CNN
F 1 "plot_v1" H 9200 4750 60  0000 C CNN
F 2 "" H 9000 4400 60  0000 C CNN
F 3 "" H 9000 4400 60  0000 C CNN
	1    9000 4400
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U17
U 1 1 61A39258
P 9100 4500
F 0 "U17" H 9100 5000 60  0000 C CNN
F 1 "plot_v1" H 9300 4850 60  0000 C CNN
F 2 "" H 9100 4500 60  0000 C CNN
F 3 "" H 9100 4500 60  0000 C CNN
	1    9100 4500
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U18
U 1 1 61A392F9
P 9200 4600
F 0 "U18" H 9200 5100 60  0000 C CNN
F 1 "plot_v1" H 9400 4950 60  0000 C CNN
F 2 "" H 9200 4600 60  0000 C CNN
F 3 "" H 9200 4600 60  0000 C CNN
	1    9200 4600
	1    0    0    -1  
$EndComp
$EndSCHEMATC
