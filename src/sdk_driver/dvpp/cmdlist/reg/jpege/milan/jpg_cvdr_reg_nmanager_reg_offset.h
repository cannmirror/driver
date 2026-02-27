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

#ifndef __JPG_CVDR_REG_NMANAGER_REG_OFFSET_H__
#define __JPG_CVDR_REG_NMANAGER_REG_OFFSET_H__

/* jpg_cvdr_reg_nmanager Base addr of Module's Register */
#define SOC_jpg_cvdr_reg_nmanager_BASE                       (0x2000)

/******************************************************************************/
/*                      SOC jpg_cvdr_reg_nmanager Registers' Definitions                            */
/******************************************************************************/

#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_CFG_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x0)    /* CVDR config register. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_DEBUG_EN_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x4)    /* CVDR debug register enable. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_DEBUG_REG      (SOC_jpg_cvdr_reg_nmanager_BASE + 0x8)    /* CVDR debug register. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_WR_QOS_CFG_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0xC)    /* AXI Write QOS/Pressure configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_RD_QOS_CFG_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x10)   /* AXI Read QOS/Pressure configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_FORCE_CLK_REG       (SOC_jpg_cvdr_reg_nmanager_BASE + 0x14)   /* Force clock ON */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_OTHER_RO_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x20)   /* Spare Other RO. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_OTHER_RW_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x24)   /* Spare Other RW. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_CVDR_BUS_CFG_REG    (SOC_jpg_cvdr_reg_nmanager_BASE + 0x28)   /* CVDR CONFIG */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_SPARE_0_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1D30) /* Spare. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_SPARE_1_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1D34) /* Spare. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_SPARE_2_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1D38) /* Spare. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_SPARE_3_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1D3C) /* Spare. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_0_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F40) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_1_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F44) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_2_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F48) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_3_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F4C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_4_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F50) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_5_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F54) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_6_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F58) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_7_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F5C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_8_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F60) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_9_REG         (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F64) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_10_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F68) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_11_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F6C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_12_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F70) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_13_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F74) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_14_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F78) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_15_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F7C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_16_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F80) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_17_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F84) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_18_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F88) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_19_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F8C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_20_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F90) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_21_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F94) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_22_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F98) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_23_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1F9C) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_24_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FA0) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_25_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FA4) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_26_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FA8) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_27_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FAC) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_28_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FB0) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_29_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FB4) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_30_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FB8) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_DEBUG_31_REG        (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1FBC) /* DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_0_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1000) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_1_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1010) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_2_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1020) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_3_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1030) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_4_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1040) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_CFG_5_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1050) /* Initiator read Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_0_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1004) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_1_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1014) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_2_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1024) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_3_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1034) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_4_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1044) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_DEBUG_5_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1054) /* Non-Raster Read DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_0_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1008) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_1_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1018) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_2_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1028) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_3_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1038) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_4_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1048) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_RD_5_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1058) /* NR RD Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_0_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x100C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_1_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x101C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_2_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x102C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_3_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x103C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_4_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x104C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_RD_BRG_CFG_5_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x105C) /* NR RD Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_0_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1200) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_1_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1210) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_2_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1220) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_3_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1230) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_4_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1240) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_CFG_5_REG     (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1250) /* Initiator write Configuration. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_0_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1204) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_1_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1214) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_2_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1224) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_3_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1234) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_4_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1244) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_DEBUG_5_REG   (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1254) /* Non-Raster Write DEBUG information. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_0_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1208) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_1_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1218) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_2_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1228) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_3_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1238) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_4_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1248) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_LIMITER_NR_WR_5_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x1258) /* NR WR Access limiter. */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_0_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x120C) /* NR WR Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_1_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x121C) /* NR WR Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_2_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x122C) /* NR WR Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_3_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x123C) /* NR WR Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_4_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x124C) /* NR WR Bridge Configuration */
#define SOC_jpg_cvdr_reg_nmanager_AXI_JPEG_NR_WR_BRG_CFG_5_REG (SOC_jpg_cvdr_reg_nmanager_BASE + 0x125C) /* NR WR Bridge Configuration */

#endif // __JPG_CVDR_REG_NMANAGER_REG_OFFSET_H__
