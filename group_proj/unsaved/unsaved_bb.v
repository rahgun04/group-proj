
module unsaved (
	clk_clk,
	i2c_0_i2c_serial_sda_in,
	i2c_0_i2c_serial_scl_in,
	i2c_0_i2c_serial_sda_oe,
	i2c_0_i2c_serial_scl_oe,
	in_h_external_connection_export,
	in_l_external_connection_export,
	led_external_connection_export,
	out0_external_connection_export,
	out1_external_connection_export,
	reset_reset_n,
	sample_clk_external_connection_export);	

	input		clk_clk;
	input		i2c_0_i2c_serial_sda_in;
	input		i2c_0_i2c_serial_scl_in;
	output		i2c_0_i2c_serial_sda_oe;
	output		i2c_0_i2c_serial_scl_oe;
	input	[31:0]	in_h_external_connection_export;
	input	[31:0]	in_l_external_connection_export;
	output	[9:0]	led_external_connection_export;
	output	[31:0]	out0_external_connection_export;
	output	[31:0]	out1_external_connection_export;
	input		reset_reset_n;
	output		sample_clk_external_connection_export;
endmodule
