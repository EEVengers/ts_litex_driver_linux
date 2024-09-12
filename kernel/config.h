/* SPDX-License-Identifier: BSD-2-Clause
 *
 * LitePCIe driver
 *
 * This file is part of LitePCIe.
 *
 * Copyright (C) 2018-2023 / EnjoyDigital  / florent@enjoy-digital.fr
 *
 */

#ifndef __HW_CONFIG_H
#define __HW_CONFIG_H
#include "soc.h"

/* PCIe PHY Vendor IDs */

#define PCIE_XILINX_VENDOR_ID  0x10ee
#define PCIE_LATTICE_VENDOR_ID 0x1204
#define PCIE_GOWIN_VENDOR_ID   0x22c2

/* PCIe PHY Device IDs */

/* Xilinx */
#define PCIE_XILINX_DEVICE_ID_S7_GEN2_X1   0x7021
#define PCIE_XILINX_DEVICE_ID_S7_GEN2_X2   0x7022
#define PCIE_XILINX_DEVICE_ID_S7_GEN2_X4   0x7024
#define PCIE_XILINX_DEVICE_ID_S7_GEN2_X8   0x7028

#define PCIE_XILINX_DEVICE_ID_US_GEN2_X1   0x8021
#define PCIE_XILINX_DEVICE_ID_US_GEN2_X2   0x8022
#define PCIE_XILINX_DEVICE_ID_US_GEN2_X4   0x8024
#define PCIE_XILINX_DEVICE_ID_US_GEN2_X8   0x8028

#define PCIE_XILINX_DEVICE_ID_US_GEN3_X1   0x8031
#define PCIE_XILINX_DEVICE_ID_US_GEN3_X2   0x8032
#define PCIE_XILINX_DEVICE_ID_US_GEN3_X4   0x8034
#define PCIE_XILINX_DEVICE_ID_US_GEN3_X8   0x8038

#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X1  0x9021
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X2  0x9022
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X4  0x9024
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X8  0x9028
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X16 0x902f

#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X1  0x9021
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X2  0x9022
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X4  0x9024
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X8  0x9028
#define PCIE_XILINX_DEVICE_ID_USP_GEN2_X16 0x902f

#define PCIE_XILINX_DEVICE_ID_USP_GEN3_X1  0x9031
#define PCIE_XILINX_DEVICE_ID_USP_GEN3_X2  0x9032
#define PCIE_XILINX_DEVICE_ID_USP_GEN3_X4  0x9034
#define PCIE_XILINX_DEVICE_ID_USP_GEN3_X8  0x9038
#define PCIE_XILINX_DEVICE_ID_USP_GEN3_X16 0x903f

#define PCIE_XILINX_DEVICE_ID_USP_GEN4_X1  0x9041
#define PCIE_XILINX_DEVICE_ID_USP_GEN4_X2  0x9042
#define PCIE_XILINX_DEVICE_ID_USP_GEN4_X4  0x9044
#define PCIE_XILINX_DEVICE_ID_USP_GEN4_X8  0x9048

/* Lattice */

#define PCIE_LATTICE_DEVICE_ID_CPNX_GEN3_X4 0x9c25

/* Gowin */

#define PCIE_GOWIN_DEVICE_ID_GW5AT_GEN2_X4 0x1100

/* /!\ Keep in sync with csr.h  /!\ */

/* DMA Flags */
#define DMA_IRQ_DISABLE  (1<<24)
#define DMA_LAST_DISABLE (1<<25)

#define DMA_CHANNEL_COUNT      DMA_CHANNELS
#define DMA_BUFFER_PER_IRQ     32
#define DMA_BUFFER_COUNT       256
#define DMA_BUFFER_SIZE        8192
#define DMA_BUFFER_TOTAL_SIZE (DMA_BUFFER_COUNT*DMA_BUFFER_SIZE)
//#define DMA_BUFFER_ALIGNED

/* DMA Offsets */
#define PCIE_DMA_WRITER_ENABLE_OFFSET             0x0000
#define PCIE_DMA_WRITER_TABLE_VALUE_OFFSET        0x0004
#define PCIE_DMA_WRITER_TABLE_WE_OFFSET           0x000c
#define PCIE_DMA_WRITER_TABLE_LOOP_PROG_N_OFFSET  0x0010
#define PCIE_DMA_WRITER_TABLE_LOOP_STATUS_OFFSET  0x0014
#define PCIE_DMA_WRITER_TABLE_LEVEL_OFFSET        0x0018
#define PCIE_DMA_WRITER_TABLE_FLUSH_OFFSET        0x001c
#define PCIE_DMA_READER_ENABLE_OFFSET             0x0020
#define PCIE_DMA_READER_TABLE_VALUE_OFFSET        0x0024
#define PCIE_DMA_READER_TABLE_WE_OFFSET           0x002c
#define PCIE_DMA_READER_TABLE_LOOP_PROG_N_OFFSET  0x0030
#define PCIE_DMA_READER_TABLE_LOOP_STATUS_OFFSET  0x0034
#define PCIE_DMA_READER_TABLE_LEVEL_OFFSET        0x0038
#define PCIE_DMA_READER_TABLE_FLUSH_OFFSET        0x003c
#define PCIE_DMA_LOOPBACK_ENABLE_OFFSET           0x0040
#define PCIE_DMA_BUFFERING_READER_FIFO_DEPTH_ADDR 0x0044
#define PCIE_DMA_BUFFERING_READER_FIFO_LEVEL_ADDR 0x0048
#define PCIE_DMA_BUFFERING_WRITER_FIFO_DEPTH_ADDR 0x004c
#define PCIE_DMA_BUFFERING_WRITER_FIFO_LEVEL_ADDR 0x0050

/* /!\ Keep in sync with csr.h  /!\ */

#endif /* __HW_CONFIG_H */
