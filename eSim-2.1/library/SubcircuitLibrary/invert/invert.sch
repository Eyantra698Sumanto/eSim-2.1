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
LIBS:invert-cache
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
L mosfet_p M?
U 1 1 61829114
P 5650 2700
F 0 "M?" H 5600 2750 50  0000 R CNN
F 1 "mosfet_p" H 5700 2850 50  0000 R CNN
F 2 "" H 5900 2800 29  0000 C CNN
F 3 "" H 5700 2700 60  0000 C CNN
	1    5650 2700
	1    0    0    1   
$EndComp
$Comp
L mosfet_n M?
U 1 1 61829115
P 5600 3350
F 0 "M?" H 5600 3200 50  0000 R CNN
F 1 "mosfet_n" H 5700 3300 50  0000 R CNN
F 2 "" H 5900 3050 29  0000 C CNN
F 3 "" H 5700 3150 60  0000 C CNN
	1    5600 3350
	1    0    0    -1  
$EndComp
$Comp
L PORT U?
U 1 1 61829116
P 5550 2050
F 0 "U?" H 5600 2150 30  0000 C CNN
F 1 "PORT" H 5550 2050 30  0000 C CNN
F 2 "" H 5550 2050 60  0000 C CNN
F 3 "" H 5550 2050 60  0000 C CNN
	1    5550 2050
	1    0    0    -1  
$EndComp
$Comp
L PORT U?
U 1 1 61829117
P 5550 4850
F 0 "U?" H 5600 4950 30  0000 C CNN
F 1 "PORT" H 5550 4850 30  0000 C CNN
F 2 "" H 5550 4850 60  0000 C CNN
F 3 "" H 5550 4850 60  0000 C CNN
	1    5550 4850
	1    0    0    -1  
$EndComp
$Comp
L PORT U?
U 1 1 61829118
P 6100 3100
F 0 "U?" H 6150 3200 30  0000 C CNN
F 1 "PORT" H 6100 3100 30  0000 C CNN
F 2 "" H 6100 3100 60  0000 C CNN
F 3 "" H 6100 3100 60  0000 C CNN
	1    6100 3100
	1    0    0    -1  
$EndComp
$Comp
L PORT U?
U 1 1 61829119
P 4700 3050
F 0 "U?" H 4750 3150 30  0000 C CNN
F 1 "PORT" H 4700 3050 30  0000 C CNN
F 2 "" H 4700 3050 60  0000 C CNN
F 3 "" H 4700 3050 60  0000 C CNN
	1    4700 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 3750 5800 4850
Wire Wire Line
	5500 3550 5100 3550
Wire Wire Line
	5100 3550 5100 2700
Wire Wire Line
	5900 3700 5900 3950
Wire Wire Line
	5900 3950 5800 3950
Connection ~ 5800 3950
Wire Wire Line
	5900 2550 5900 2350
Wire Wire Line
	5900 2350 5800 2350
Connection ~ 5800 2350
Wire Wire Line
	5800 2050 5800 2500
Wire Wire Line
	5800 2900 5800 3350
Wire Wire Line
	5100 2700 5500 2700
Wire Wire Line
	6350 3050 5800 3050
Connection ~ 5800 3050
Wire Wire Line
	6350 3050 6350 3100
Wire Wire Line
	4950 3050 5100 3050
Connection ~ 5100 3050
$EndSCHEMATC
