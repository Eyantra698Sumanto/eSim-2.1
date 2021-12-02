// Altera does not warrant that this solution will work for the customer's 
// intended purpose and disclaims all liability for use of or reliance on the solution.
//
// Stratix HSDI I/O Module top-level design file.

module Diff_io_top (
	rx_in,
	rx_inclock,
	rx_data_align,
	rx_locked,
	tx_out,
	tx_outclock);

	input	[1:0]  rx_in;
	input	rx_inclock;
	input	rx_data_align;
	output	[1:0]  tx_out;
	output	rx_locked;
	output	tx_outclock;

	wire rx_outclock;
	wire [7:0] a, b;
	wire [15:0] tx_in;
	wire [15:0] rx_out;

	assign a=rx_out[7:0];
	assign b=rx_out[15:8];

//LVDS_Rx instantiation 
lvds_rx	lvds_rx_inst (
	.rx_in ( rx_in),
	.rx_inclock ( rx_inclock ),
	.rx_data_align ( rx_data_align ),
	.rx_out ( rx_out ),
	.rx_locked ( rx_locked ),
	.rx_outclock ( rx_outclock )
	);

//Multiplier module instantiation
  mult	mult_inst (
	.clock ( rx_outclock ),
	.dataa ( a ),
	.datab ( b ),
	.result ( tx_in )
	);

//Place lvds_tx_inst.v instantiation here:

lvds_tx lvds_tx_inst (

        .tx_in   (tx_in),
        .tx_inclock (rx_outclock),
        .tx_out   (tx_out),
        .tx_outclock (tx_outclock)); 


//end lvds_tx instantiation


endmodule
