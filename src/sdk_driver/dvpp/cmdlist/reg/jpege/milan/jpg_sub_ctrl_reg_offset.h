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

#ifndef __JPG_SUB_CTRL_REG_OFFSET_H__
#define __JPG_SUB_CTRL_REG_OFFSET_H__

/* jpg_sub_ctrl Base addr of Module's Register */
#define SOC_jpg_sub_ctrl_BASE                       (0x0)

/******************************************************************************/
/*                      SOC jpg_sub_ctrl Registers' Definitions                            */
/******************************************************************************/

#define SOC_jpg_sub_ctrl_JPGENC_CRG_CFG0_REG        (SOC_jpg_sub_ctrl_BASE + 0x100) /* CRG configure register for clk */
#define SOC_jpg_sub_ctrl_JPGENC_CRG_CFG1_REG        (SOC_jpg_sub_ctrl_BASE + 0x104) /* CRG configure register for reset */
#define SOC_jpg_sub_ctrl_JPGENC_MEM_CFG_REG         (SOC_jpg_sub_ctrl_BASE + 0x108) /* SRAM configure register for jpgenc */
#define SOC_jpg_sub_ctrl_JPEG_CMDLST0_STATUS_REG    (SOC_jpg_sub_ctrl_BASE + 0x10C) /* CMDLST0 status register */
#define SOC_jpg_sub_ctrl_JPGENC_IRQ_REG0_REG        (SOC_jpg_sub_ctrl_BASE + 0x110) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_IRQ_REG1_REG        (SOC_jpg_sub_ctrl_BASE + 0x114) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_IRQ_REG2_REG        (SOC_jpg_sub_ctrl_BASE + 0x118) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWADDR_REG     (SOC_jpg_sub_ctrl_BASE + 0x11C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARADDR_REG     (SOC_jpg_sub_ctrl_BASE + 0x120) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWUSER_0_REG   (SOC_jpg_sub_ctrl_BASE + 0x124) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWUSER_1_REG   (SOC_jpg_sub_ctrl_BASE + 0x128) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWUSER_2_REG   (SOC_jpg_sub_ctrl_BASE + 0x12C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARUSER_0_REG   (SOC_jpg_sub_ctrl_BASE + 0x130) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARUSER_1_REG   (SOC_jpg_sub_ctrl_BASE + 0x134) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARUSER_2_REG   (SOC_jpg_sub_ctrl_BASE + 0x138) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWCACHE_REG    (SOC_jpg_sub_ctrl_BASE + 0x13C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARCACHE_REG    (SOC_jpg_sub_ctrl_BASE + 0x140) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_CTRL_REG       (SOC_jpg_sub_ctrl_BASE + 0x144) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGCMDLST0_SOFT_RST_REG    (SOC_jpg_sub_ctrl_BASE + 0x148) /* JPEG CMDLST0 soft reset */
#define SOC_jpg_sub_ctrl_JPGCMDLST0_CLK_EN_REG      (SOC_jpg_sub_ctrl_BASE + 0x14C) /* JPEG CMDLST0 clk gate */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_AWUSER_3_REG   (SOC_jpg_sub_ctrl_BASE + 0x150) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGENC_SHIM_ARUSER_3_REG   (SOC_jpg_sub_ctrl_BASE + 0x154) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPEG_CMDLST1_STATUS_REG    (SOC_jpg_sub_ctrl_BASE + 0x158) /* CMDLST1 status register */
#define SOC_jpg_sub_ctrl_JPEG_CMDLST2_STATUS_REG    (SOC_jpg_sub_ctrl_BASE + 0x15C) /* CMDLST2 status register */
#define SOC_jpg_sub_ctrl_JPGCMDLST1_SOFT_RST_REG    (SOC_jpg_sub_ctrl_BASE + 0x160) /* JPEG CMDLST1 soft reset */
#define SOC_jpg_sub_ctrl_JPGCMDLST2_SOFT_RST_REG    (SOC_jpg_sub_ctrl_BASE + 0x164) /* JPEG CMDLST2 soft reset */
#define SOC_jpg_sub_ctrl_JPGCMDLST1_CLK_EN_REG      (SOC_jpg_sub_ctrl_BASE + 0x168) /* JPEG CMDLST1 clk gate */
#define SOC_jpg_sub_ctrl_JPGCMDLST2_CLK_EN_REG      (SOC_jpg_sub_ctrl_BASE + 0x16C) /* JPEG CMDLST2 clk gate */
#define SOC_jpg_sub_ctrl_CMDLIST0_IN_INT_CTRL_REG   (SOC_jpg_sub_ctrl_BASE + 0x170) /* command list input interrupt (eop) control */
#define SOC_jpg_sub_ctrl_CMDLIST1_IN_INT_CTRL_REG   (SOC_jpg_sub_ctrl_BASE + 0x174) /* command list input interrupt (eop) control */
#define SOC_jpg_sub_ctrl_CMDLIST2_IN_INT_CTRL_REG   (SOC_jpg_sub_ctrl_BASE + 0x178) /* command list input interrupt (eop) control */
#define SOC_jpg_sub_ctrl_JPGDEC_CRG_CFG0_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x200) /* CRG config register for clk */
#define SOC_jpg_sub_ctrl_JPGDEC_CRG_CFG0_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x260) /* CRG config register for clk */
#define SOC_jpg_sub_ctrl_JPGDEC_CRG_CFG1_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x204) /* CRG configure register for reset */
#define SOC_jpg_sub_ctrl_JPGDEC_CRG_CFG1_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x264) /* CRG configure register for reset */
#define SOC_jpg_sub_ctrl_JPGDEC_MEM_CFG0_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x208) /* SRAM configure register for jpgdec */
#define SOC_jpg_sub_ctrl_JPGDEC_MEM_CFG0_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x268) /* SRAM configure register for jpgdec */
#define SOC_jpg_sub_ctrl_JPGDEC_MEM_CFG1_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x20C) /* SRAM configure register group2 for jpgdec */
#define SOC_jpg_sub_ctrl_JPGDEC_MEM_CFG1_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x26C) /* SRAM configure register group2 for jpgdec */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG0_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x210) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG0_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x270) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG1_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x214) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG1_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x274) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG2_0_REG      (SOC_jpg_sub_ctrl_BASE + 0x218) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_IRQ_REG2_1_REG      (SOC_jpg_sub_ctrl_BASE + 0x278) /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWADDR_0_REG   (SOC_jpg_sub_ctrl_BASE + 0x21C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWADDR_1_REG   (SOC_jpg_sub_ctrl_BASE + 0x27C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARADDR_0_REG   (SOC_jpg_sub_ctrl_BASE + 0x220) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARADDR_1_REG   (SOC_jpg_sub_ctrl_BASE + 0x280) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_0_0_REG (SOC_jpg_sub_ctrl_BASE + 0x224) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_0_1_REG (SOC_jpg_sub_ctrl_BASE + 0x284) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_1_0_REG (SOC_jpg_sub_ctrl_BASE + 0x228) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_1_1_REG (SOC_jpg_sub_ctrl_BASE + 0x288) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_2_0_REG (SOC_jpg_sub_ctrl_BASE + 0x22C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_2_1_REG (SOC_jpg_sub_ctrl_BASE + 0x28C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_0_0_REG (SOC_jpg_sub_ctrl_BASE + 0x230) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_0_1_REG (SOC_jpg_sub_ctrl_BASE + 0x290) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_1_0_REG (SOC_jpg_sub_ctrl_BASE + 0x234) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_1_1_REG (SOC_jpg_sub_ctrl_BASE + 0x294) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_2_0_REG (SOC_jpg_sub_ctrl_BASE + 0x238) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_2_1_REG (SOC_jpg_sub_ctrl_BASE + 0x298) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWCACHE_0_REG  (SOC_jpg_sub_ctrl_BASE + 0x23C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWCACHE_1_REG  (SOC_jpg_sub_ctrl_BASE + 0x29C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARCACHE_0_REG  (SOC_jpg_sub_ctrl_BASE + 0x240) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARCACHE_1_REG  (SOC_jpg_sub_ctrl_BASE + 0x2A0) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_CTRL_0_REG     (SOC_jpg_sub_ctrl_BASE + 0x244) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_CTRL_1_REG     (SOC_jpg_sub_ctrl_BASE + 0x2A4) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_3_0_REG (SOC_jpg_sub_ctrl_BASE + 0x248) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_AWUSER_3_1_REG (SOC_jpg_sub_ctrl_BASE + 0x2A8) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_3_0_REG (SOC_jpg_sub_ctrl_BASE + 0x24C) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_JPGDEC_SHIM_ARUSER_3_1_REG (SOC_jpg_sub_ctrl_BASE + 0x2AC) /* SHIM related cfg register */
#define SOC_jpg_sub_ctrl_TOP_AXI_CFG0_REG           (SOC_jpg_sub_ctrl_BASE + 0x0)   /* configure register for top axi path */
#define SOC_jpg_sub_ctrl_CVDR_MEM_CFG_REG           (SOC_jpg_sub_ctrl_BASE + 0x40)  /* SRAM configure register for CVDR */
#define SOC_jpg_sub_ctrl_CVDR_IRQ_REG0_REG          (SOC_jpg_sub_ctrl_BASE + 0x44)  /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_CVDR_IRQ_REG1_REG          (SOC_jpg_sub_ctrl_BASE + 0x48)  /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_CVDR_IRQ_REG2_REG          (SOC_jpg_sub_ctrl_BASE + 0x4C)  /* IRQ related cfg register */
#define SOC_jpg_sub_ctrl_DMA_CRG_CFG1_REG           (SOC_jpg_sub_ctrl_BASE + 0x50)  /* CRG configure register for reset */
#define SOC_jpg_sub_ctrl_JPG_RO_STATE_REG           (SOC_jpg_sub_ctrl_BASE + 0x80)  /* some read only state */
#define SOC_jpg_sub_ctrl_JPGD0_CMDLST_INT_MASK_REG  (SOC_jpg_sub_ctrl_BASE + 0x84)  /* jpgd0 mask cmdlst eop start */
#define SOC_jpg_sub_ctrl_JPGD1_CMDLST_INT_MASK_REG  (SOC_jpg_sub_ctrl_BASE + 0x88)  /* jpgd1 mask cmdlst eop start */
#define SOC_jpg_sub_ctrl_JPGE_CMDLST_INT_MASK_REG   (SOC_jpg_sub_ctrl_BASE + 0x8C)  /* jpge mask cmdlst eop start */
#define SOC_jpg_sub_ctrl_CVDR_CMDLST_INT_MAST_REG   (SOC_jpg_sub_ctrl_BASE + 0x90)  /* cvdr mask cmdlst eop start */
#define SOC_jpg_sub_ctrl_JPG_DEBUG_0_REG            (SOC_jpg_sub_ctrl_BASE + 0x400) /* debug register 0 */
#define SOC_jpg_sub_ctrl_JPG_DEBUG_1_REG            (SOC_jpg_sub_ctrl_BASE + 0x404) /* debug register 1 */
#define SOC_jpg_sub_ctrl_JPG_DEBUG_2_REG            (SOC_jpg_sub_ctrl_BASE + 0x408) /* debug register 2 */
#define SOC_jpg_sub_ctrl_JPG_DEBUG_3_REG            (SOC_jpg_sub_ctrl_BASE + 0x40C) /* debug register 3 */
#define SOC_jpg_sub_ctrl_JPGD0_FRAM_CNT_REG         (SOC_jpg_sub_ctrl_BASE + 0x410) /* jpgd0 frame counter */
#define SOC_jpg_sub_ctrl_JPGD1_FRAM_CNT_REG         (SOC_jpg_sub_ctrl_BASE + 0x414) /* jpgd1 frame counter */
#define SOC_jpg_sub_ctrl_JPGE_FRAM_CNT_REG          (SOC_jpg_sub_ctrl_BASE + 0x418) /* jpge frame counter */
#define SOC_jpg_sub_ctrl_JPG_FRAM_CNT_CLR_REG       (SOC_jpg_sub_ctrl_BASE + 0x41C) /* jpg frame counter clear */

#endif // __JPG_SUB_CTRL_REG_OFFSET_H__
