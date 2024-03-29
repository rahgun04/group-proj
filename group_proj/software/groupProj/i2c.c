/*
 * i2c.c
 *
 *  Created on: 11 Mar 2024
 *      Author: rahul
 */
#include "i2c.h"
#include "system.h"

int init_I2C(){
	dev_addr = 0x68;
	IOWR(I2C_EN_BASE, 0, 0);
	IOWR(I2C_RST_BASE, 0, 0xFF);
	IOWR(I2C_DEV_ADDR_BASE, 0, dev_addr);
	return 0;
}

int read_byte_MPU(alt_u8 reg, alt_u8 * ret){
	int timeout = 0;
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RST_BASE, 0x00);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RST_BASE, 0xff);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_REG_ADDR_BASE, reg);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RW_BASE, 1);
	while(IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE));
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_EN_BASE, 1);
	while((!IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE)) && timeout < 2000){
		timeout++;
	}
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_EN_BASE, 0x00);
	while(IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE));
	*ret = IORD_ALTERA_AVALON_PIO_DATA(I2C_MISO_BASE);
	//printf("%d\n", *ret);
	return (timeout > 1999)? 1:0;
}

int write_byte_MPU(alt_u8 reg, alt_u8 * byte_in){
	int timeout = 0;
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RST_BASE, 0x00);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RST_BASE, 0xff);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_REG_ADDR_BASE, reg);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_RW_BASE, 0);
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_MOSI_BASE, *byte_in);
	while(IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE));
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_EN_BASE, 0xFF);
	while((!IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE)) && timeout < 2000){
		timeout++;
	}
	IOWR_ALTERA_AVALON_PIO_DATA(I2C_EN_BASE, 0x00);
	while(IORD_ALTERA_AVALON_PIO_DATA(I2C_BUSY_BASE));
	return (timeout > 1999)? 1:0;
}
