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
LIBS:dual_clk_RAM-cache
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
L ram_dual U5
U 1 1 6190DF67
P 3850 4200
F 0 "U5" H 6700 6000 60  0000 C CNN
F 1 "ram_dual" H 6700 6200 60  0000 C CNN
F 2 "" H 6700 6150 60  0000 C CNN
F 3 "" H 6700 6150 60  0000 C CNN
	1    3850 4200
	1    0    0    -1  
$EndComp
$Comp
L counter8bit U1
U 1 1 6190E022
P 2450 4200
F 0 "U1" H 5300 6000 60  0000 C CNN
F 1 "counter8bit" H 5300 6200 60  0000 C CNN
F 2 "" H 5300 6150 60  0000 C CNN
F 3 "" H 5300 6150 60  0000 C CNN
	1    2450 4200
	1    0    0    -1  
$EndComp
$Comp
L counter6bit U2
U 1 1 6190E032
P 2450 5000
F 0 "U2" H 5300 6800 60  0000 C CNN
F 1 "counter6bit" H 5300 7000 60  0000 C CNN
F 2 "" H 5300 6950 60  0000 C CNN
F 3 "" H 5300 6950 60  0000 C CNN
	1    2450 5000
	1    0    0    -1  
$EndComp
$Comp
L counter6bit U3
U 1 1 6190E0F5
P 2450 5600
F 0 "U3" H 5300 7400 60  0000 C CNN
F 1 "counter6bit" H 5300 7600 60  0000 C CNN
F 2 "" H 5300 7550 60  0000 C CNN
F 3 "" H 5300 7550 60  0000 C CNN
	1    2450 5600
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 6190E19C
P 1800 2900
F 0 "v2" H 1600 3000 60  0000 C CNN
F 1 "pulse" H 1600 2850 60  0000 C CNN
F 2 "R1" H 1500 2900 60  0000 C CNN
F 3 "" H 1800 2900 60  0000 C CNN
	1    1800 2900
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 6190E26C
P 850 2900
F 0 "v1" H 650 3000 60  0000 C CNN
F 1 "pulse" H 650 2850 60  0000 C CNN
F 2 "R1" H 550 2900 60  0000 C CNN
F 3 "" H 850 2900 60  0000 C CNN
	1    850  2900
	1    0    0    -1  
$EndComp
$Comp
L pulse v3
U 1 1 6190E345
P 2250 3550
F 0 "v3" H 2050 3650 60  0000 C CNN
F 1 "pulse" H 2050 3500 60  0000 C CNN
F 2 "R1" H 1950 3550 60  0000 C CNN
F 3 "" H 2250 3550 60  0000 C CNN
	1    2250 3550
	1    0    0    -1  
$EndComp
$Comp
L pulse v4
U 1 1 6190E3CC
P 2600 4200
F 0 "v4" H 2400 4300 60  0000 C CNN
F 1 "pulse" H 2400 4150 60  0000 C CNN
F 2 "R1" H 2300 4200 60  0000 C CNN
F 3 "" H 2600 4200 60  0000 C CNN
	1    2600 4200
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_7 U4
U 1 1 6190E734
P 3300 2300
F 0 "U4" H 3300 2300 60  0000 C CNN
F 1 "adc_bridge_7" H 3300 2450 60  0000 C CNN
F 2 "" H 3300 2300 60  0000 C CNN
F 3 "" H 3300 2300 60  0000 C CNN
	1    3300 2300
	1    0    0    -1  
$EndComp
$Comp
L pulse v5
U 1 1 6190E8F8
P 3300 4950
F 0 "v5" H 3100 5050 60  0000 C CNN
F 1 "pulse" H 3100 4900 60  0000 C CNN
F 2 "R1" H 3000 4950 60  0000 C CNN
F 3 "" H 3300 4950 60  0000 C CNN
	1    3300 4950
	1    0    0    -1  
$EndComp
$Comp
L pulse v6
U 1 1 6190E9FE
P 4150 5100
F 0 "v6" H 3950 5200 60  0000 C CNN
F 1 "pulse" H 3950 5050 60  0000 C CNN
F 2 "R1" H 3850 5100 60  0000 C CNN
F 3 "" H 4150 5100 60  0000 C CNN
	1    4150 5100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 6190EA6C
P 3200 6000
F 0 "#PWR01" H 3200 5750 50  0001 C CNN
F 1 "GND" H 3200 5850 50  0000 C CNN
F 2 "" H 3200 6000 50  0001 C CNN
F 3 "" H 3200 6000 50  0001 C CNN
	1    3200 6000
	1    0    0    -1  
$EndComp
$Comp
L pulse v7
U 1 1 6190EC2D
P 4700 5150
F 0 "v7" H 4500 5250 60  0000 C CNN
F 1 "pulse" H 4500 5100 60  0000 C CNN
F 2 "R1" H 4400 5150 60  0000 C CNN
F 3 "" H 4700 5150 60  0000 C CNN
	1    4700 5150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 3200 3300 4500
Wire Wire Line
	6000 4250 6000 4300
Wire Wire Line
	4200 3700 4600 3700
Wire Wire Line
	4200 2550 4200 3700
Wire Wire Line
	3850 2550 4200 2550
Wire Wire Line
	2600 3750 2600 2550
Wire Wire Line
	4600 2450 4600 3100
Wire Wire Line
	3850 2450 4600 2450
Wire Wire Line
	2250 3100 2250 2450
Wire Wire Line
	4300 2300 4600 2300
Wire Wire Line
	4300 2350 4300 2300
Wire Wire Line
	3850 2350 4300 2350
Wire Wire Line
	1800 2450 1800 2350
Connection ~ 4400 3200
Wire Wire Line
	4400 3800 4600 3800
Connection ~ 4400 2400
Wire Wire Line
	4400 3200 4600 3200
Wire Wire Line
	4400 2400 4600 2400
Wire Wire Line
	4400 2250 4400 3800
Wire Wire Line
	3850 2250 4400 2250
Wire Wire Line
	850  2250 2700 2250
Wire Wire Line
	850  2450 850  2250
Wire Wire Line
	3300 3200 2450 3200
Wire Wire Line
	2450 3200 2450 2650
Wire Wire Line
	2450 2650 2700 2650
Wire Wire Line
	4150 3100 2350 3100
Wire Wire Line
	2350 3100 2350 2750
Wire Wire Line
	2350 2750 2700 2750
Wire Wire Line
	4700 4700 2700 4700
Wire Wire Line
	2700 4700 2700 2850
Wire Wire Line
	4700 5600 900  5600
Wire Wire Line
	900  5600 900  3350
Wire Wire Line
	900  3350 850  3350
Wire Wire Line
	1800 3350 1800 5600
Connection ~ 1800 5600
Wire Wire Line
	2250 4000 2250 5600
Connection ~ 2250 5600
Wire Wire Line
	2600 4650 2600 5600
Wire Wire Line
	2600 5600 2550 5600
Connection ~ 2550 5600
Wire Wire Line
	3300 5400 3300 5600
Connection ~ 3300 5600
Wire Wire Line
	4150 3100 4150 4650
Wire Wire Line
	4150 5550 4150 5600
Connection ~ 4150 5600
Wire Wire Line
	3200 6000 3200 5600
Connection ~ 3200 5600
Wire Wire Line
	6000 4250 3900 4250
Wire Wire Line
	3900 4250 3900 2650
Wire Wire Line
	3900 2650 3850 2650
Wire Wire Line
	3850 2750 4050 2750
Wire Wire Line
	4050 2750 4050 4400
Wire Wire Line
	4050 4400 6000 4400
Wire Wire Line
	3850 2850 4100 2850
Wire Wire Line
	4100 2850 4100 4500
Wire Wire Line
	4100 4500 6000 4500
Wire Wire Line
	1800 2350 2700 2350
Wire Wire Line
	2250 2450 2700 2450
Wire Wire Line
	2600 2550 2700 2550
$EndSCHEMATC
