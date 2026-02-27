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

#ifndef __JPGENC_REG_OFFSET_H__
#define __JPGENC_REG_OFFSET_H__

/* JPGENC Base addr of Module's Register */
#define SOC_JPGENC_BASE                       (0x8000)

/******************************************************************************/
/*                      SOC JPGENC Registers' Definitions                            */
/******************************************************************************/

#define SOC_JPGENC_JPE_ENCODE_REG           (SOC_JPGENC_BASE + 0x4)   /* Encode enable. */
#define SOC_JPGENC_JPE_INIT_REG             (SOC_JPGENC_BASE + 0x8)   /* SW force update update. */
#define SOC_JPGENC_JPE_ENC_HRIGHT1_REG      (SOC_JPGENC_BASE + 0x18)  /* JPEG codec horizontal image size for encoding. */
#define SOC_JPGENC_JPE_ENC_VBOTTOM_REG      (SOC_JPGENC_BASE + 0x1C)  /* JPEG codec vertical image size for encoding. */
#define SOC_JPGENC_JPE_PIC_FORMAT_REG       (SOC_JPGENC_BASE + 0x20)  /* JPEG picture encoding format. */
#define SOC_JPGENC_JPE_RESTART_INTERVAL_REG (SOC_JPGENC_BASE + 0x24)  /* restart marker insertion register. */
#define SOC_JPGENC_JPE_TQ_Y_SELECT_REG      (SOC_JPGENC_BASE + 0x28)  /* Q-table selector 0, quant table for Y component. */
#define SOC_JPGENC_JPE_TQ_U_SELECT_REG      (SOC_JPGENC_BASE + 0x2C)  /* Q-table selector 1, quant table for U component. */
#define SOC_JPGENC_JPE_TQ_V_SELECT_REG      (SOC_JPGENC_BASE + 0x30)  /* Q-table selector 2, quant table for V component. */
#define SOC_JPGENC_JPE_DC_TABLE_SELECT_REG  (SOC_JPGENC_BASE + 0x34)  /* Huffman table selector for DC values. */
#define SOC_JPGENC_JPE_AC_TABLE_SELECT_REG  (SOC_JPGENC_BASE + 0x38)  /* Huffman table selector for AC value. */
#define SOC_JPGENC_JPE_TABLE_DATA_REG       (SOC_JPGENC_BASE + 0x3C)  /* table programming register. */
#define SOC_JPGENC_JPE_TABLE_ID_REG         (SOC_JPGENC_BASE + 0x40)  /* table programming select register. */
#define SOC_JPGENC_JPE_TAC0_LEN_REG         (SOC_JPGENC_BASE + 0x44)  /* Huffman AC table 0 length. */
#define SOC_JPGENC_JPE_TDC0_LEN_REG         (SOC_JPGENC_BASE + 0x48)  /* Huffman DC table 0 length. */
#define SOC_JPGENC_JPE_TAC1_LEN_REG         (SOC_JPGENC_BASE + 0x4C)  /* Huffman AC table 1 length. */
#define SOC_JPGENC_JPE_TDC1_LEN_REG         (SOC_JPGENC_BASE + 0x50)  /* Huffman DC table 1 length. */
#define SOC_JPGENC_JPE_ENCODER_MODE_REG     (SOC_JPGENC_BASE + 0x60)  /* encode mode. */
#define SOC_JPGENC_JPE_DEBUG_REG            (SOC_JPGENC_BASE + 0x64)  /* debug information register. */
#define SOC_JPGENC_JPE_ERROR_IMR_REG        (SOC_JPGENC_BASE + 0x68)  /* JPEG error interrupt mask register. */
#define SOC_JPGENC_JPE_ERROR_RIS_REG        (SOC_JPGENC_BASE + 0x6C)  /* JPEG error raw interrupt status register. */
#define SOC_JPGENC_JPE_ERROR_MIS_REG        (SOC_JPGENC_BASE + 0x70)  /* JPEG error masked interrupt status register. */
#define SOC_JPGENC_JPE_ERROR_ICR_REG        (SOC_JPGENC_BASE + 0x74)  /* JPEG error interrupt clear regisger. */
#define SOC_JPGENC_JPE_ERROR_ISR_REG        (SOC_JPGENC_BASE + 0x78)  /* JPEG error interrupt set register. */
#define SOC_JPGENC_JPE_STATUS_IMR_REG       (SOC_JPGENC_BASE + 0x7C)  /* JPEG status interrupt mask register. */
#define SOC_JPGENC_JPE_STATUS_RIS_REG       (SOC_JPGENC_BASE + 0x80)  /* JPEG status raw interrupt status register. */
#define SOC_JPGENC_JPE_STATUS_MIS_REG       (SOC_JPGENC_BASE + 0x84)  /* JPEG status masked interrupt status register. */
#define SOC_JPGENC_JPE_STATUS_ICR_REG       (SOC_JPGENC_BASE + 0x88)  /* JPEG status interrupt clear register. */
#define SOC_JPGENC_JPE_STATUS_ISR_REG       (SOC_JPGENC_BASE + 0x8C)  /* JPEG status interrrupt set register. */
#define SOC_JPGENC_JPE_CONFIG_REG           (SOC_JPGENC_BASE + 0x90)  /* JPEG configuration register. */
#define SOC_JPGENC_ADDRESS_Y_H_REG          (SOC_JPGENC_BASE + 0x94)  /* Y Buffer addr high 30bits. */
#define SOC_JPGENC_ADDRESS_Y_L_REG          (SOC_JPGENC_BASE + 0x98)  /* Y Buffer addr low 30bits. */
#define SOC_JPGENC_ADDRESS_UV_H_REG         (SOC_JPGENC_BASE + 0x9C)  /* UV Buffer addrs high 30bits. */
#define SOC_JPGENC_ADDRESS_UV_L_REG         (SOC_JPGENC_BASE + 0xA0)  /* UV Buffer addrs low 30bits. */
#define SOC_JPGENC_STRIDE_REG               (SOC_JPGENC_BASE + 0xA4)  /* Address stride in bytes. */
#define SOC_JPGENC_OUT_ADDR_H_REG           (SOC_JPGENC_BASE + 0xA8)  /* Output stream addr high 30bits. */
#define SOC_JPGENC_OUT_ADDR_L_REG           (SOC_JPGENC_BASE + 0xAC)  /* Output stream addr low 30bits. */
#define SOC_JPGENC_SYNCCFG_REG              (SOC_JPGENC_BASE + 0x100) /* Source Synchronization configuration. */
#define SOC_JPGENC_JPE_ENC_HRIGHT2_REG      (SOC_JPGENC_BASE + 0x104) /* Picture from pipe2 Hsize. */
#define SOC_JPGENC_JPG_BYTE_CNT_REG         (SOC_JPGENC_BASE + 0x108) /* Number of encoded bytes sent to video port. */
#define SOC_JPGENC_PREFETCH_REG             (SOC_JPGENC_BASE + 0x10C) /* Prefetch configuration. */
#define SOC_JPGENC_PREFETCH_IDY0_REG        (SOC_JPGENC_BASE + 0x110) /* Prefetch ID configuration (Y Buffer). */
#define SOC_JPGENC_PREFETCH_IDY1_REG        (SOC_JPGENC_BASE + 0x114) /* Prefetch ID configuration (Y Buffer). */
#define SOC_JPGENC_PREFETCH_IDUV0_REG       (SOC_JPGENC_BASE + 0x118) /* Prefetch ID configuration (UV Buffer). */
#define SOC_JPGENC_PREFETCH_IDUVY_REG       (SOC_JPGENC_BASE + 0x11C) /* Prefetch ID configuration (UV Buffer). */
#define SOC_JPGENC_PREREAD_REG              (SOC_JPGENC_BASE + 0x120) /* Number of preread MCU configuration. */
#define SOC_JPGENC_INPUT_SWAP_REG           (SOC_JPGENC_BASE + 0x124) /* swap pixel component at input. */
#define SOC_JPGENC_FORCE_CLK_ON_CFG_REG     (SOC_JPGENC_BASE + 0x130) /* used to force the clock which is generally controlled by HW. */
#define SOC_JPGENC_DBG_0_REG                (SOC_JPGENC_BASE + 0x200) /* debug regiser0. */
#define SOC_JPGENC_DBG_1_REG                (SOC_JPGENC_BASE + 0x204) /* debug regiser1. */
#define SOC_JPGENC_DBG_2_REG                (SOC_JPGENC_BASE + 0x208) /* debug register2. */
#define SOC_JPGENC_DBG_3_REG                (SOC_JPGENC_BASE + 0x20C) /* debug register3. */
#define SOC_JPGENC_DBG_4_REG                (SOC_JPGENC_BASE + 0x210) /* debug register4. */
#define SOC_JPGENC_DBG_5_REG                (SOC_JPGENC_BASE + 0x214) /* debug register5. */
#define SOC_JPGENC_DBG_6_REG                (SOC_JPGENC_BASE + 0x218) /* debug register6. */
#define SOC_JPGENC_DBG_7_REG                (SOC_JPGENC_BASE + 0x21C) /* debug register7. */
#define SOC_JPGENC_DBG_8_REG                (SOC_JPGENC_BASE + 0x220) /* debug register8. */
#define SOC_JPGENC_DBG_9_REG                (SOC_JPGENC_BASE + 0x224) /* debug register9. */
#define SOC_JPGENC_DBG_10_REG               (SOC_JPGENC_BASE + 0x228) /* debug register10. */
#define SOC_JPGENC_DBG_11_REG               (SOC_JPGENC_BASE + 0x22C) /* debug register11. */
#define SOC_JPGENC_DBG_12_REG               (SOC_JPGENC_BASE + 0x230) /* debug register12. */
#define SOC_JPGENC_DBG_13_REG               (SOC_JPGENC_BASE + 0x234) /* debug register13. */
#define SOC_JPGENC_DBG_14_REG               (SOC_JPGENC_BASE + 0x238) /* debug register14. */
#define SOC_JPGENC_DBG_15_REG               (SOC_JPGENC_BASE + 0x23C) /* debug register15. */
#define SOC_JPGENC_DBG_RW_0_REG             (SOC_JPGENC_BASE + 0x300) /* debug writable register. */
#define SOC_JPGENC_JPEGE_FRM_CYCLE_CNT_REG  (SOC_JPGENC_BASE + 0x304) /* jpege frame cycle cnt */

#endif // __JPGENC_REG_OFFSET_H__
