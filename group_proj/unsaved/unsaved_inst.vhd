	component unsaved is
		port (
			clk_clk                               : in  std_logic                     := 'X';             -- clk
			i2c_0_i2c_serial_sda_in               : in  std_logic                     := 'X';             -- sda_in
			i2c_0_i2c_serial_scl_in               : in  std_logic                     := 'X';             -- scl_in
			i2c_0_i2c_serial_sda_oe               : out std_logic;                                        -- sda_oe
			i2c_0_i2c_serial_scl_oe               : out std_logic;                                        -- scl_oe
			in_h_external_connection_export       : in  std_logic_vector(31 downto 0) := (others => 'X'); -- export
			in_l_external_connection_export       : in  std_logic_vector(31 downto 0) := (others => 'X'); -- export
			led_external_connection_export        : out std_logic_vector(9 downto 0);                     -- export
			out0_external_connection_export       : out std_logic_vector(31 downto 0);                    -- export
			out1_external_connection_export       : out std_logic_vector(31 downto 0);                    -- export
			reset_reset_n                         : in  std_logic                     := 'X';             -- reset_n
			sample_clk_external_connection_export : out std_logic                                         -- export
		);
	end component unsaved;

	u0 : component unsaved
		port map (
			clk_clk                               => CONNECTED_TO_clk_clk,                               --                            clk.clk
			i2c_0_i2c_serial_sda_in               => CONNECTED_TO_i2c_0_i2c_serial_sda_in,               --               i2c_0_i2c_serial.sda_in
			i2c_0_i2c_serial_scl_in               => CONNECTED_TO_i2c_0_i2c_serial_scl_in,               --                               .scl_in
			i2c_0_i2c_serial_sda_oe               => CONNECTED_TO_i2c_0_i2c_serial_sda_oe,               --                               .sda_oe
			i2c_0_i2c_serial_scl_oe               => CONNECTED_TO_i2c_0_i2c_serial_scl_oe,               --                               .scl_oe
			in_h_external_connection_export       => CONNECTED_TO_in_h_external_connection_export,       --       in_h_external_connection.export
			in_l_external_connection_export       => CONNECTED_TO_in_l_external_connection_export,       --       in_l_external_connection.export
			led_external_connection_export        => CONNECTED_TO_led_external_connection_export,        --        led_external_connection.export
			out0_external_connection_export       => CONNECTED_TO_out0_external_connection_export,       --       out0_external_connection.export
			out1_external_connection_export       => CONNECTED_TO_out1_external_connection_export,       --       out1_external_connection.export
			reset_reset_n                         => CONNECTED_TO_reset_reset_n,                         --                          reset.reset_n
			sample_clk_external_connection_export => CONNECTED_TO_sample_clk_external_connection_export  -- sample_clk_external_connection.export
		);

