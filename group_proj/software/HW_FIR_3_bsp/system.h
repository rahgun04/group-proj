/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'unsaved'
 * SOPC Builder design path: ../../unsaved.sopcinfo
 *
 * Generated: Thu Feb 08 11:34:42 GMT 2024
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
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "cpu"
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
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_ACCELEROMETER_SPI


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x210a0
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x210a0
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x210a0
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "unsaved"


/*
 * accelerometer_spi configuration
 *
 */

#define ACCELEROMETER_SPI_BASE 0x210a8
#define ACCELEROMETER_SPI_IRQ 0
#define ACCELEROMETER_SPI_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ACCELEROMETER_SPI_NAME "/dev/accelerometer_spi"
#define ACCELEROMETER_SPI_SPAN 2
#define ACCELEROMETER_SPI_TYPE "altera_up_avalon_accelerometer_spi"
#define ALT_MODULE_CLASS_accelerometer_spi altera_up_avalon_accelerometer_spi


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK TIMER_0


/*
 * in_H configuration
 *
 */

#define ALT_MODULE_CLASS_in_H altera_avalon_pio
#define IN_H_BASE 0x21060
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
#define IN_L_BASE 0x21050
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
#define JTAG_UART_BASE 0x210a0
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
#define LED_BASE 0x21090
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
#define OUT0_BASE 0x21080
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
#define OUT1_BASE 0x21070
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
#define SAMPLE_CLK_BASE 0x21040
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
#define TIMER_BASE 0x21020
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
#define TIMER_0_BASE 0x21000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 3
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49
#define TIMER_0_MULT 1.0E-6
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "us"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
