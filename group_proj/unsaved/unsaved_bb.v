
module unsaved (
	clk_clk,
	i2c_busy_external_connection_export,
	i2c_dev_addr_external_connection_export,
	i2c_en_external_connection_export,
	i2c_miso_external_connection_export,
	i2c_mosi_external_connection_export,
	i2c_reg_addr_external_connection_export,
	i2c_rst_external_connection_export,
	i2c_rw_external_connection_export,
	in_l_external_connection_export,
	led_external_connection_export,
	out0_external_connection_export,
	out1_external_connection_export,
	reset_reset_n,
	sample_clk_external_connection_export,
	atan2_a_external_connection_export,
	atan2_b_external_connection_export,
	atan2_q_external_connection_export);	

	input		clk_clk;
	input		i2c_busy_external_connection_export;
	output	[7:0]	i2c_dev_addr_external_connection_export;
	output		i2c_en_external_connection_export;
	input	[7:0]	i2c_miso_external_connection_export;
	output	[7:0]	i2c_mosi_external_connection_export;
	output	[7:0]	i2c_reg_addr_external_connection_export;
	output		i2c_rst_external_connection_export;
	output		i2c_rw_external_connection_export;
	input	[31:0]	in_l_external_connection_export;
	output	[9:0]	led_external_connection_export;
	output	[31:0]	out0_external_connection_export;
	output	[31:0]	out1_external_connection_export;
	input		reset_reset_n;
	output		sample_clk_external_connection_export;
	output	[31:0]	atan2_a_external_connection_export;
	output	[31:0]	atan2_b_external_connection_export;
	input	[31:0]	atan2_q_external_connection_export;
endmodule
