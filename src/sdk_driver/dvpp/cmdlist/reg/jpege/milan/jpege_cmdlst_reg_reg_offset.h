/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2026. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef JPEGE_CMDLST_REG_REG_OFFSET_H
#define JPEGE_CMDLST_REG_REG_OFFSET_H

/* CMDLST_REG Base addr of Module's Register */
#define SOC_CMDLST_REG_BASE                       (0xd800)

/******************************************************************************/
/*                      SOC CMDLST_REG Registers' Definitions                            */
/******************************************************************************/

#define SOC_CMDLST_REG_CMDLST_CFG_REG                (SOC_CMDLST_REG_BASE + 0x0)  /* CMDLST config register. */
#define SOC_CMDLST_REG_CMDLST_SW_AXI_ADDR_H_REG      (SOC_CMDLST_REG_BASE + 0x8)  /* AXI addr Frame start high. */
#define SOC_CMDLST_REG_CMDLST_SW_AXI_ADDR_L_REG      (SOC_CMDLST_REG_BASE + 0x10) /* AXI addr Frame start low. */
#define SOC_CMDLST_REG_CMDLST_SW_BUF_LEN_REG         (SOC_CMDLST_REG_BASE + 0x14) /* CFG BUFFER length. */
#define SOC_CMDLST_REG_CMDLST_SW_CFG_REG             (SOC_CMDLST_REG_BASE + 0x18) /* CMDLST SW config register. */
#define SOC_CMDLST_REG_CMDLST_HW_AXI_ADDR_H_REG      (SOC_CMDLST_REG_BASE + 0x1C) /* AXI high addr Frame start. */
#define SOC_CMDLST_REG_CMDLST_HW_AXI_ADDR_L_REG      (SOC_CMDLST_REG_BASE + 0x20) /* AXI low addr Frame start. */
#define SOC_CMDLST_REG_CMDLST_HW_BUF_LEN_REG         (SOC_CMDLST_REG_BASE + 0x24) /* CFG BUFFER length. */
#define SOC_CMDLST_REG_CMDLST_HW_AXI_ADDR_DUMP_H_REG \
    (SOC_CMDLST_REG_BASE + 0x28) /* AXI high addr Frame start for dump. */
#define SOC_CMDLST_REG_CMDLST_HW_AXI_ADDR_DUMP_L_REG \
    (SOC_CMDLST_REG_BASE + 0x2C) /* AXI low addr Frame start for dump. */
#define SOC_CMDLST_REG_CMDLST_OTHER_RO0_REG          (SOC_CMDLST_REG_BASE + 0x34) /* debug RO state. */
#define SOC_CMDLST_REG_CMDLST_OTHER_RO1_REG          (SOC_CMDLST_REG_BASE + 0x38) /* debug RO state. */
#define SOC_CMDLST_REG_CMDLST_AXI_ADDR_RO_H_REG      \
    (SOC_CMDLST_REG_BASE + 0x3C) /* AXI high addr frame start for debug. */
#define SOC_CMDLST_REG_CMDLST_AXI_ADDR_RO_L_REG      \
    (SOC_CMDLST_REG_BASE + 0x40) /* AXI low addr frame start for debug. */

#endif // JPEGE_CMDLST_REG_REG_OFFSET_H
