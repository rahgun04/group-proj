/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'unsaved'
 * SOPC Builder design path: ../../unsaved.sopcinfo
 *
 * Generated: Fri Mar 08 21:06:08 GMT 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00020820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EIC_PRESENT
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 4
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00010000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00020820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EIC_PRESENT
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_NUM_OF_SHADOW_REG_SETS 4
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_I2C
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_VIC


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x214e0
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x214e0
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x214e0
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "unsaved"


/*
 * altera_vic_driver configuration
 *
 */

#define ALTERA_VIC_DRIVER_ENABLE_PREEMPTION_RS_0 0
#define ALTERA_VIC_DRIVER_ENABLE_PREEMPTION_RS_1 0
#define ALTERA_VIC_DRIVER_ENABLE_PREEMPTION_RS_2 0
#define ALTERA_VIC_DRIVER_ENABLE_PREEMPTION_RS_3 0
#define ALTERA_VIC_DRIVER_ENABLE_PREEMPTION_RS_4 0
#define ALTERA_VIC_DRIVER_ISR_PREEMPTION_ENABLED
#define ALTERA_VIC_DRIVER_LINKER_SECTION .text
#define ALTERA_VIC_DRIVER_VIC_0_IRQ0_RIL 15
#define ALTERA_VIC_DRIVER_VIC_0_IRQ0_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ0_RRS 4
#define ALTERA_VIC_DRIVER_VIC_0_IRQ10_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ10_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ10_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ11_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ11_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ11_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ12_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ12_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ12_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ13_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ13_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ13_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ14_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ14_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ14_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ15_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ15_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ15_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ16_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ16_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ16_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ17_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ17_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ17_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ18_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ18_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ18_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ19_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ19_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ19_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ1_RIL 14
#define ALTERA_VIC_DRIVER_VIC_0_IRQ1_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ1_RRS 3
#define ALTERA_VIC_DRIVER_VIC_0_IRQ20_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ20_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ20_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ21_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ21_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ21_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ22_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ22_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ22_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ23_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ23_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ23_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ24_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ24_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ24_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ25_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ25_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ25_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ26_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ26_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ26_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ27_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ27_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ27_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ28_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ28_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ28_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ29_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ29_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ29_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ2_RIL 13
#define ALTERA_VIC_DRIVER_VIC_0_IRQ2_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ2_RRS 2
#define ALTERA_VIC_DRIVER_VIC_0_IRQ30_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ30_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ30_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ31_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ31_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ31_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ3_RIL 12
#define ALTERA_VIC_DRIVER_VIC_0_IRQ3_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ3_RRS 1
#define ALTERA_VIC_DRIVER_VIC_0_IRQ4_RIL 11
#define ALTERA_VIC_DRIVER_VIC_0_IRQ4_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ4_RRS 1
#define ALTERA_VIC_DRIVER_VIC_0_IRQ5_RIL 10
#define ALTERA_VIC_DRIVER_VIC_0_IRQ5_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ5_RRS 1
#define ALTERA_VIC_DRIVER_VIC_0_IRQ6_RIL 9
#define ALTERA_VIC_DRIVER_VIC_0_IRQ6_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ6_RRS 1
#define ALTERA_VIC_DRIVER_VIC_0_IRQ7_RIL 8
#define ALTERA_VIC_DRIVER_VIC_0_IRQ7_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ7_RRS 1
#define ALTERA_VIC_DRIVER_VIC_0_IRQ8_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ8_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ8_RRS 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ9_RIL 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ9_RNMI 0
#define ALTERA_VIC_DRIVER_VIC_0_IRQ9_RRS 0
#define VIC_0_VEC_SIZE 16
#define VIC_0_VEC_TBL_BASE VIC_0_VECTOR_TABLE


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * i2c_0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_0 altera_avalon_i2c
#define I2C_0_BASE 0x21400
#define I2C_0_FIFO_DEPTH 4
#define I2C_0_FREQ 50000000
#define I2C_0_IRQ 0
#define I2C_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define I2C_0_NAME "/dev/i2c_0"
#define I2C_0_SPAN 64
#define I2C_0_TYPE "altera_avalon_i2c"
#define I2C_0_USE_AV_ST 0


/*
 * in_H configuration
 *
 */

#define ALT_MODULE_CLASS_in_H altera_avalon_pio
#define IN_H_BASE 0x214a0
#define IN_H_BIT_CLEARING_EDGE_REGISTER 0
#define IN_H_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IN_H_CAPTURE 0
#define IN_H_DATA_WIDTH 32
#define IN_H_DO_TEST_BENCH_WIRING 0
#define IN_H_DRIVEN_SIM_VALUE 0
#define IN_H_EDGE_TYPE "NONE"
#define IN_H_FREQ 50000000
#define IN_H_HAS_IN 1
#define IN_H_HAS_OUT 0
#define IN_H_HAS_TRI 0
#define IN_H_IRQ -1
#define IN_H_IRQ_INTERRUPT_CONTROLLER_ID -1
#define IN_H_IRQ_TYPE "NONE"
#define IN_H_NAME "/dev/in_H"
#define IN_H_RESET_VALUE 0
#define IN_H_SPAN 16
#define IN_H_TYPE "altera_avalon_pio"


/*
 * in_L configuration
 *
 */

#define ALT_MODULE_CLASS_in_L altera_avalon_pio
#define IN_L_BASE 0x21490
#define IN_L_BIT_CLEARING_EDGE_REGISTER 0
#define IN_L_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IN_L_CAPTURE 0
#define IN_L_DATA_WIDTH 32
#define IN_L_DO_TEST_BENCH_WIRING 0
#define IN_L_DRIVEN_SIM_VALUE 0
#define IN_L_EDGE_TYPE "NONE"
#define IN_L_FREQ 50000000
#define IN_L_HAS_IN 1
#define IN_L_HAS_OUT 0
#define IN_L_HAS_TRI 0
#define IN_L_IRQ -1
#define IN_L_IRQ_INTERRUPT_CONTROLLER_ID -1
#define IN_L_IRQ_TYPE "NONE"
#define IN_L_NAME "/dev/in_L"
#define IN_L_RESET_VALUE 0
#define IN_L_SPAN 16
#define IN_L_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x214e0
#define JTAG_UART_IRQ 2
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * led configuration
 *
 */

#define ALT_MODULE_CLASS_led altera_avalon_pio
#define LED_BASE 0x214d0
#define LED_BIT_CLEARING_EDGE_REGISTER 0
#define LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_CAPTURE 0
#define LED_DATA_WIDTH 10
#define LED_DO_TEST_BENCH_WIRING 0
#define LED_DRIVEN_SIM_VALUE 0
#define LED_EDGE_TYPE "NONE"
#define LED_FREQ 50000000
#define LED_HAS_IN 0
#define LED_HAS_OUT 1
#define LED_HAS_TRI 0
#define LED_IRQ -1
#define LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_IRQ_TYPE "NONE"
#define LED_NAME "/dev/led"
#define LED_RESET_VALUE 0
#define LED_SPAN 16
#define LED_TYPE "altera_avalon_pio"


/*
 * onchip_memory configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory altera_avalon_onchip_memory2
#define ONCHIP_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY_BASE 0x10000
#define ONCHIP_MEMORY_CONTENTS_INFO ""
#define ONCHIP_MEMORY_DUAL_PORT 0
#define ONCHIP_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY_INIT_CONTENTS_FILE "unsaved_onchip_memory"
#define ONCHIP_MEMORY_INIT_MEM_CONTENT 0
#define ONCHIP_MEMORY_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY_IRQ -1
#define ONCHIP_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY_NAME "/dev/onchip_memory"
#define ONCHIP_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY_SIZE_VALUE 65536
#define ONCHIP_MEMORY_SPAN 65536
#define ONCHIP_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY_WRITABLE 1


/*
 * out0 configuration
 *
 */

#define ALT_MODULE_CLASS_out0 altera_avalon_pio
#define OUT0_BASE 0x214c0
#define OUT0_BIT_CLEARING_EDGE_REGISTER 0
#define OUT0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUT0_CAPTURE 0
#define OUT0_DATA_WIDTH 32
#define OUT0_DO_TEST_BENCH_WIRING 0
#define OUT0_DRIVEN_SIM_VALUE 0
#define OUT0_EDGE_TYPE "NONE"
#define OUT0_FREQ 50000000
#define OUT0_HAS_IN 0
#define OUT0_HAS_OUT 1
#define OUT0_HAS_TRI 0
#define OUT0_IRQ -1
#define OUT0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OUT0_IRQ_TYPE "NONE"
#define OUT0_NAME "/dev/out0"
#define OUT0_RESET_VALUE 0
#define OUT0_SPAN 16
#define OUT0_TYPE "altera_avalon_pio"


/*
 * out1 configuration
 *
 */

#define ALT_MODULE_CLASS_out1 altera_avalon_pio
#define OUT1_BASE 0x214b0
#define OUT1_BIT_CLEARING_EDGE_REGISTER 0
#define OUT1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUT1_CAPTURE 0
#define OUT1_DATA_WIDTH 32
#define OUT1_DO_TEST_BENCH_WIRING 0
#define OUT1_DRIVEN_SIM_VALUE 0
#define OUT1_EDGE_TYPE "NONE"
#define OUT1_FREQ 50000000
#define OUT1_HAS_IN 0
#define OUT1_HAS_OUT 1
#define OUT1_HAS_TRI 0
#define OUT1_IRQ -1
#define OUT1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OUT1_IRQ_TYPE "NONE"
#define OUT1_NAME "/dev/out1"
#define OUT1_RESET_VALUE 0
#define OUT1_SPAN 16
#define OUT1_TYPE "altera_avalon_pio"


/*
 * sample_clk configuration
 *
 */

#define ALT_MODULE_CLASS_sample_clk altera_avalon_pio
#define SAMPLE_CLK_BASE 0x21480
#define SAMPLE_CLK_BIT_CLEARING_EDGE_REGISTER 0
#define SAMPLE_CLK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SAMPLE_CLK_CAPTURE 0
#define SAMPLE_CLK_DATA_WIDTH 1
#define SAMPLE_CLK_DO_TEST_BENCH_WIRING 0
#define SAMPLE_CLK_DRIVEN_SIM_VALUE 0
#define SAMPLE_CLK_EDGE_TYPE "NONE"
#define SAMPLE_CLK_FREQ 50000000
#define SAMPLE_CLK_HAS_IN 0
#define SAMPLE_CLK_HAS_OUT 1
#define SAMPLE_CLK_HAS_TRI 0
#define SAMPLE_CLK_IRQ -1
#define SAMPLE_CLK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SAMPLE_CLK_IRQ_TYPE "NONE"
#define SAMPLE_CLK_NAME "/dev/sample_clk"
#define SAMPLE_CLK_RESET_VALUE 0
#define SAMPLE_CLK_SPAN 16
#define SAMPLE_CLK_TYPE "altera_avalon_pio"


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x21460
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 1
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999
#define TIMER_MULT 0.001
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x21440
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 3
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * vic_0 configuration
 *
 */

#define ALT_MODULE_CLASS_vic_0 altera_vic
#define VIC_0_BASE 0x21000
#define VIC_0_DAISY_CHAIN_ENABLE 0
#define VIC_0_INTERRUPT_CONTROLLER_ID 0
#define VIC_0_IRQ -1
#define VIC_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIC_0_NAME "/dev/vic_0"
#define VIC_0_NUMBER_OF_INT_PORTS 8
#define VIC_0_RIL_WIDTH 4
#define VIC_0_SPAN 1024
#define VIC_0_TYPE "altera_vic"

#endif /* __SYSTEM_H_ */
