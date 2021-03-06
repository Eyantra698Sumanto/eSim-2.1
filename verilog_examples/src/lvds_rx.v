// megafunction wizard: %ALTLVDS%
// GENERATION: STANDARD
// VERSION: WM1.0
// MODULE: altlvds_rx 

// ============================================================
// File Name: lvds_rx.v
// Megafunction Name(s):
// 			altlvds_rx
// ============================================================
// ************************************************************
// THIS IS A WIZARD-GENERATED FILE. DO NOT EDIT THIS FILE!
// ************************************************************


//Copyright (C) 1991-2002 Altera Corporation
//Any  megafunction  design,  and related netlist (encrypted  or  decrypted),
//support information,  device programming or simulation file,  and any other
//associated  documentation or information  provided by  Altera  or a partner
//under  Altera's   Megafunction   Partnership   Program  may  be  used  only
//to program  PLD  devices (but not masked  PLD  devices) from  Altera.   Any
//other  use  of such  megafunction  design,  netlist,  support  information,
//device programming or simulation file,  or any other  related documentation
//or information  is prohibited  for  any  other purpose,  including, but not
//limited to  modification,  reverse engineering,  de-compiling, or use  with
//any other  silicon devices,  unless such use is  explicitly  licensed under
//a separate agreement with  Altera  or a megafunction partner.  Title to the
//intellectual property,  including patents,  copyrights,  trademarks,  trade
//secrets,  or maskworks,  embodied in any such megafunction design, netlist,
//support  information,  device programming or simulation file,  or any other
//related documentation or information provided by  Altera  or a megafunction
//partner, remains with Altera, the megafunction partner, or their respective
//licensors. No other licenses, including any licenses needed under any third
//party's intellectual property, are provided herein.


module lvds_rx (
	rx_in,
	rx_inclock,
	rx_data_align,
	rx_out,
	rx_locked,
	rx_outclock);

	input	[1:0]  rx_in;
	input	  rx_inclock;
	input	  rx_data_align;
	output	[15:0]  rx_out;
	output	  rx_locked;
	output	  rx_outclock;

	wire  sub_wire0;
	wire [15:0] sub_wire1;
	wire  sub_wire2;
	wire  rx_locked = sub_wire0;
	wire [15:0] rx_out = sub_wire1[15:0];
	wire  rx_outclock = sub_wire2;

	altlvds_rx	altlvds_rx_component (
				.rx_inclock (rx_inclock),
				.rx_in (rx_in),
				.rx_data_align (rx_data_align),
				.rx_locked (sub_wire0),
				.rx_out (sub_wire1),
				.rx_outclock (sub_wire2));
	defparam
		altlvds_rx_component.intended_device_family = "Stratix",
		altlvds_rx_component.number_of_channels = 2,
		altlvds_rx_component.deserialization_factor = 8,
		altlvds_rx_component.inclock_period = 9523,
		altlvds_rx_component.input_data_rate = 840,
		altlvds_rx_component.inclock_data_alignment = "EDGE_ALIGNED",
		altlvds_rx_component.registered_output = "ON",
		altlvds_rx_component.common_rx_tx_pll = "ON",
		altlvds_rx_component.registered_data_align_input = "OFF",
		altlvds_rx_component.outclock_resource = "AUTO",
		altlvds_rx_component.lpm_type = "altlvds_rx";


endmodule

// ============================================================
// CNX file retrieval info
// ============================================================
// Retrieval info: PRIVATE: Int_Device STRING "Stratix"
// Retrieval info: PRIVATE: Num_Channel NUMERIC "2"
// Retrieval info: PRIVATE: Deser_Factor NUMERIC "8"
// Retrieval info: PRIVATE: PLL_Freq STRING "105"
// Retrieval info: PRIVATE: PLL_Period STRING "9.52381"
// Retrieval info: PRIVATE: LVDS_Mode NUMERIC "1"
// Retrieval info: PRIVATE: Clock_Mode NUMERIC "0"
// Retrieval info: PRIVATE: Inclock_Boost NUMERIC "4"
// Retrieval info: PRIVATE: Outclock_Divide_By NUMERIC "4"
// Retrieval info: PRIVATE: Data_rate STRING "840"
// Retrieval info: PRIVATE: Input_Clock_alignment STRING "EDGE_ALIGNED"
// Retrieval info: PRIVATE: Output_Clock_alignment STRING "EDGE_ALIGNED"
// Retrieval info: PRIVATE: Enable_DPA_Mode STRING "OFF"
// Retrieval info: PRIVATE: Use_Clock_Resc STRING "AUTO"
// Retrieval info: PRIVATE: Reg_InOut NUMERIC "1"
// Retrieval info: PRIVATE: Multi_Clock NUMERIC "0"
// Retrieval info: PRIVATE: Use_Lock NUMERIC "1"
// Retrieval info: PRIVATE: Use_CoreClock NUMERIC "1"
// Retrieval info: PRIVATE: PLL_Enable NUMERIC "0"
// Retrieval info: PRIVATE: Use_Deskew NUMERIC "0"
// Retrieval info: PRIVATE: CDS_Mode NUMERIC "0"
// Retrieval info: PRIVATE: MSB_Center_Align NUMERIC "0"
// Retrieval info: PRIVATE: Use_Data_Align NUMERIC "1"
// Retrieval info: PRIVATE: Use_Ext_Data_Align NUMERIC "0"
// Retrieval info: PRIVATE: Use_Common_Rx_Tx_Plls NUMERIC "1"
// Retrieval info: PRIVATE: Enable_FIFO_DPA_Channels NUMERIC "1"
// Retrieval info: PRIVATE: Use_Rawperror NUMERIC "0"
// Retrieval info: PRIVATE: Clock_Choices STRING "TX_CORECLK"
// Retrieval info: PRIVATE: Use_Core_Clock NUMERIC "0"
// Retrieval info: PRIVATE: Use_Dpa_Locked NUMERIC "0"
// Retrieval info: PRIVATE: Dpll_Lock_Window NUMERIC "800"
// Retrieval info: PRIVATE: Dpll_Lock_Count NUMERIC "2"
// Retrieval info: PRIVATE: Use_Pll_Areset NUMERIC "0"
// Retrieval info: CONSTANT: INTENDED_DEVICE_FAMILY STRING "Stratix"
// Retrieval info: CONSTANT: NUMBER_OF_CHANNELS NUMERIC "2"
// Retrieval info: CONSTANT: DESERIALIZATION_FACTOR NUMERIC "8"
// Retrieval info: CONSTANT: INCLOCK_PERIOD NUMERIC "9523"
// Retrieval info: CONSTANT: INPUT_DATA_RATE NUMERIC "840"
// Retrieval info: CONSTANT: INCLOCK_DATA_ALIGNMENT STRING "EDGE_ALIGNED"
// Retrieval info: CONSTANT: REGISTERED_OUTPUT STRING "ON"
// Retrieval info: CONSTANT: COMMON_RX_TX_PLL STRING "ON"
// Retrieval info: CONSTANT: REGISTERED_DATA_ALIGN_INPUT STRING "OFF"
// Retrieval info: CONSTANT: OUTCLOCK_RESOURCE STRING "AUTO"
// Retrieval info: CONSTANT: LPM_TYPE STRING "altlvds_rx"
// Retrieval info: USED_PORT: rx_in 0 0 2 0 INPUT NODEFVAL rx_in[1..0]
// Retrieval info: USED_PORT: rx_inclock 0 0 0 0 INPUT GND rx_inclock
// Retrieval info: USED_PORT: rx_out 0 0 16 0 OUTPUT NODEFVAL rx_out[15..0]
// Retrieval info: USED_PORT: rx_locked 0 0 0 0 OUTPUT NODEFVAL rx_locked
// Retrieval info: USED_PORT: rx_data_align 0 0 0 0 INPUT NODEFVAL rx_data_align
// Retrieval info: USED_PORT: rx_outclock 0 0 0 0 OUTPUT NODEFVAL rx_outclock
// Retrieval info: CONNECT: @rx_in 0 0 2 0 rx_in 0 0 2 0
// Retrieval info: CONNECT: @rx_inclock 0 0 0 0 rx_inclock 0 0 0 0
// Retrieval info: CONNECT: rx_out 0 0 16 0 @rx_out 0 0 16 0
// Retrieval info: CONNECT: rx_locked 0 0 0 0 @rx_locked 0 0 0 0
// Retrieval info: CONNECT: @rx_data_align 0 0 0 0 rx_data_align 0 0 0 0
// Retrieval info: CONNECT: rx_outclock 0 0 0 0 @rx_outclock 0 0 0 0
// Retrieval info: LIBRARY: altera_mf altera_mf.altera_mf_components.all
