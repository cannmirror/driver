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

#ifndef VPC_VLC_MILAN_REG_C_UNION_DEFINE_H
#define VPC_VLC_MILAN_REG_C_UNION_DEFINE_H

// define reg id enum, and reg access macro {{{
#define VPC_VLC_BASE    (0x30000)
#define VPC_CVDR_CFG              (VPC_VLC_BASE + 0x0)    /* CVDR config register. */
#define VPC_CVDR_DEBUG_EN         (VPC_VLC_BASE + 0x4)    /* CVDR debug register enable. */
#define VPC_CVDR_DEBUG            (VPC_VLC_BASE + 0x8)    /* CVDR debug register. */
#define VPC_CVDR_WR_QOS_CFG       (VPC_VLC_BASE + 0xC)    /* AXI Write QOS/Pressure configuration. */
#define VPC_CVDR_RD_QOS_CFG       (VPC_VLC_BASE + 0x10)   /* AXI Read QOS/Pressure configuration. */
#define VPC_FORCE_CLK             (VPC_VLC_BASE + 0x14)   /* Force clock ON */
#define VPC_OTHER_RO              (VPC_VLC_BASE + 0x20)   /* Spare Other RO. */
#define VPC_OTHER_RW              (VPC_VLC_BASE + 0x24)   /* Spare Other RW. */
#define VPC_CVDR_BUS_CFG          (VPC_VLC_BASE + 0x28)   /* CVDR CONFIG */
#define VPC_VP_WR_CFG_0           (VPC_VLC_BASE + 0x30)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_1           (VPC_VLC_BASE + 0x50)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_2           (VPC_VLC_BASE + 0x70)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_3           (VPC_VLC_BASE + 0x90)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_4           (VPC_VLC_BASE + 0xB0)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_5           (VPC_VLC_BASE + 0xD0)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_6           (VPC_VLC_BASE + 0xF0)   /* Video port write Configuration. */
#define VPC_VP_WR_CFG_7           (VPC_VLC_BASE + 0x110)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_8           (VPC_VLC_BASE + 0x130)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_9           (VPC_VLC_BASE + 0x150)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_10          (VPC_VLC_BASE + 0x170)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_11          (VPC_VLC_BASE + 0x190)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_12          (VPC_VLC_BASE + 0x1B0)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_13          (VPC_VLC_BASE + 0x1D0)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_14          (VPC_VLC_BASE + 0x1F0)  /* Video port write Configuration. */
#define VPC_VP_WR_CFG_15          (VPC_VLC_BASE + 0x210)  /* Video port write Configuration. */
#define VPC_VP_WR_AXI_FS_0        (VPC_VLC_BASE + 0x34)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_1        (VPC_VLC_BASE + 0x54)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_2        (VPC_VLC_BASE + 0x74)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_3        (VPC_VLC_BASE + 0x94)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_4        (VPC_VLC_BASE + 0xB4)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_5        (VPC_VLC_BASE + 0xD4)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_6        (VPC_VLC_BASE + 0xF4)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_7        (VPC_VLC_BASE + 0x114)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_8        (VPC_VLC_BASE + 0x134)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_9        (VPC_VLC_BASE + 0x154)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_10       (VPC_VLC_BASE + 0x174)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_11       (VPC_VLC_BASE + 0x194)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_12       (VPC_VLC_BASE + 0x1B4)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_13       (VPC_VLC_BASE + 0x1D4)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_14       (VPC_VLC_BASE + 0x1F4)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_15       (VPC_VLC_BASE + 0x214)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_0   (VPC_VLC_BASE + 0x38)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_1   (VPC_VLC_BASE + 0x58)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_2   (VPC_VLC_BASE + 0x78)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_3   (VPC_VLC_BASE + 0x98)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_4   (VPC_VLC_BASE + 0xB8)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_5   (VPC_VLC_BASE + 0xD8)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_6   (VPC_VLC_BASE + 0xF8)   /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_7   (VPC_VLC_BASE + 0x118)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_8   (VPC_VLC_BASE + 0x138)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_9   (VPC_VLC_BASE + 0x158)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_10  (VPC_VLC_BASE + 0x178)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_11  (VPC_VLC_BASE + 0x198)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_12  (VPC_VLC_BASE + 0x1B8)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_13  (VPC_VLC_BASE + 0x1D8)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_14  (VPC_VLC_BASE + 0x1F8)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_FS_HIGH_15  (VPC_VLC_BASE + 0x218)  /* AXI addr Frame start. */
#define VPC_VP_WR_AXI_LINE_0      (VPC_VLC_BASE + 0x3C)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_1      (VPC_VLC_BASE + 0x5C)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_2      (VPC_VLC_BASE + 0x7C)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_3      (VPC_VLC_BASE + 0x9C)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_4      (VPC_VLC_BASE + 0xBC)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_5      (VPC_VLC_BASE + 0xDC)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_6      (VPC_VLC_BASE + 0xFC)   /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_7      (VPC_VLC_BASE + 0x11C)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_8      (VPC_VLC_BASE + 0x13C)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_9      (VPC_VLC_BASE + 0x15C)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_10     (VPC_VLC_BASE + 0x17C)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_11     (VPC_VLC_BASE + 0x19C)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_12     (VPC_VLC_BASE + 0x1BC)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_13     (VPC_VLC_BASE + 0x1DC)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_14     (VPC_VLC_BASE + 0x1FC)  /* VP wr line stride. */
#define VPC_VP_WR_AXI_LINE_15     (VPC_VLC_BASE + 0x21C)  /* VP wr line stride. */
#define VPC_VP_WR_LWG_0           (VPC_VLC_BASE + 0x40)   /* Line width generation. */
#define VPC_VP_WR_LWG_1           (VPC_VLC_BASE + 0x60)   /* Line width generation. */
#define VPC_VP_WR_LWG_2           (VPC_VLC_BASE + 0x80)   /* Line width generation. */
#define VPC_VP_WR_LWG_3           (VPC_VLC_BASE + 0xA0)   /* Line width generation. */
#define VPC_VP_WR_LWG_4           (VPC_VLC_BASE + 0xC0)   /* Line width generation. */
#define VPC_VP_WR_LWG_5           (VPC_VLC_BASE + 0xE0)   /* Line width generation. */
#define VPC_VP_WR_LWG_6           (VPC_VLC_BASE + 0x100)  /* Line width generation. */
#define VPC_VP_WR_LWG_7           (VPC_VLC_BASE + 0x120)  /* Line width generation. */
#define VPC_VP_WR_LWG_8           (VPC_VLC_BASE + 0x140)  /* Line width generation. */
#define VPC_VP_WR_LWG_9           (VPC_VLC_BASE + 0x160)  /* Line width generation. */
#define VPC_VP_WR_LWG_10          (VPC_VLC_BASE + 0x180)  /* Line width generation. */
#define VPC_VP_WR_LWG_11          (VPC_VLC_BASE + 0x1A0)  /* Line width generation. */
#define VPC_VP_WR_LWG_12          (VPC_VLC_BASE + 0x1C0)  /* Line width generation. */
#define VPC_VP_WR_LWG_13          (VPC_VLC_BASE + 0x1E0)  /* Line width generation. */
#define VPC_VP_WR_LWG_14          (VPC_VLC_BASE + 0x200)  /* Line width generation. */
#define VPC_VP_WR_LWG_15          (VPC_VLC_BASE + 0x220)  /* Line width generation. */
#define VPC_VP_WR_IF_CFG_0        (VPC_VLC_BASE + 0x44)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_1        (VPC_VLC_BASE + 0x64)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_2        (VPC_VLC_BASE + 0x84)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_3        (VPC_VLC_BASE + 0xA4)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_4        (VPC_VLC_BASE + 0xC4)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_5        (VPC_VLC_BASE + 0xE4)   /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_6        (VPC_VLC_BASE + 0x104)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_7        (VPC_VLC_BASE + 0x124)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_8        (VPC_VLC_BASE + 0x144)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_9        (VPC_VLC_BASE + 0x164)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_10       (VPC_VLC_BASE + 0x184)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_11       (VPC_VLC_BASE + 0x1A4)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_12       (VPC_VLC_BASE + 0x1C4)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_13       (VPC_VLC_BASE + 0x1E4)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_14       (VPC_VLC_BASE + 0x204)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_IF_CFG_15       (VPC_VLC_BASE + 0x224)  /* Video port write interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_WR_DEBUG_0         (VPC_VLC_BASE + 0x48)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_1         (VPC_VLC_BASE + 0x68)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_2         (VPC_VLC_BASE + 0x88)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_3         (VPC_VLC_BASE + 0xA8)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_4         (VPC_VLC_BASE + 0xC8)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_5         (VPC_VLC_BASE + 0xE8)   /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_6         (VPC_VLC_BASE + 0x108)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_7         (VPC_VLC_BASE + 0x128)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_8         (VPC_VLC_BASE + 0x148)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_9         (VPC_VLC_BASE + 0x168)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_10        (VPC_VLC_BASE + 0x188)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_11        (VPC_VLC_BASE + 0x1A8)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_12        (VPC_VLC_BASE + 0x1C8)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_13        (VPC_VLC_BASE + 0x1E8)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_14        (VPC_VLC_BASE + 0x208)  /* Video Port Write DEBUG information. */
#define VPC_VP_WR_DEBUG_15        (VPC_VLC_BASE + 0x228)  /* Video Port Write DEBUG information. */
#define VPC_LIMITER_VP_WR_0       (VPC_VLC_BASE + 0x4C)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_1       (VPC_VLC_BASE + 0x6C)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_2       (VPC_VLC_BASE + 0x8C)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_3       (VPC_VLC_BASE + 0xAC)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_4       (VPC_VLC_BASE + 0xCC)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_5       (VPC_VLC_BASE + 0xEC)   /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_6       (VPC_VLC_BASE + 0x10C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_7       (VPC_VLC_BASE + 0x12C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_8       (VPC_VLC_BASE + 0x14C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_9       (VPC_VLC_BASE + 0x16C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_10      (VPC_VLC_BASE + 0x18C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_11      (VPC_VLC_BASE + 0x1AC)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_12      (VPC_VLC_BASE + 0x1CC)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_13      (VPC_VLC_BASE + 0x1EC)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_14      (VPC_VLC_BASE + 0x20C)  /* Video port write Access limiter. */
#define VPC_LIMITER_VP_WR_15      (VPC_VLC_BASE + 0x22C)  /* Video port write Access limiter. */
#define VPC_VP_RD_CFG_0           (VPC_VLC_BASE + 0xA30)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_1           (VPC_VLC_BASE + 0xA58)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_2           (VPC_VLC_BASE + 0xA80)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_3           (VPC_VLC_BASE + 0xAA8)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_4           (VPC_VLC_BASE + 0xAD0)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_5           (VPC_VLC_BASE + 0xAF8)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_6           (VPC_VLC_BASE + 0xB20)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_7           (VPC_VLC_BASE + 0xB48)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_8           (VPC_VLC_BASE + 0xB70)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_9           (VPC_VLC_BASE + 0xB98)  /* Video port read Configuration. */
#define VPC_VP_RD_CFG_10          (VPC_VLC_BASE + 0xBC0)  /* Video port read Configuration. */
#define VPC_VP_RD_LWG_0           (VPC_VLC_BASE + 0xA34)  /* Line width generation. */
#define VPC_VP_RD_LWG_1           (VPC_VLC_BASE + 0xA5C)  /* Line width generation. */
#define VPC_VP_RD_LWG_2           (VPC_VLC_BASE + 0xA84)  /* Line width generation. */
#define VPC_VP_RD_LWG_3           (VPC_VLC_BASE + 0xAAC)  /* Line width generation. */
#define VPC_VP_RD_LWG_4           (VPC_VLC_BASE + 0xAD4)  /* Line width generation. */
#define VPC_VP_RD_LWG_5           (VPC_VLC_BASE + 0xAFC)  /* Line width generation. */
#define VPC_VP_RD_LWG_6           (VPC_VLC_BASE + 0xB24)  /* Line width generation. */
#define VPC_VP_RD_LWG_7           (VPC_VLC_BASE + 0xB4C)  /* Line width generation. */
#define VPC_VP_RD_LWG_8           (VPC_VLC_BASE + 0xB74)  /* Line width generation. */
#define VPC_VP_RD_LWG_9           (VPC_VLC_BASE + 0xB9C)  /* Line width generation. */
#define VPC_VP_RD_LWG_10          (VPC_VLC_BASE + 0xBC4)  /* Line width generation. */
#define VPC_VP_RD_FHG_0           (VPC_VLC_BASE + 0xA38)  /* Frame height generation. */
#define VPC_VP_RD_FHG_1           (VPC_VLC_BASE + 0xA60)  /* Frame height generation. */
#define VPC_VP_RD_FHG_2           (VPC_VLC_BASE + 0xA88)  /* Frame height generation. */
#define VPC_VP_RD_FHG_3           (VPC_VLC_BASE + 0xAB0)  /* Frame height generation. */
#define VPC_VP_RD_FHG_4           (VPC_VLC_BASE + 0xAD8)  /* Frame height generation. */
#define VPC_VP_RD_FHG_5           (VPC_VLC_BASE + 0xB00)  /* Frame height generation. */
#define VPC_VP_RD_FHG_6           (VPC_VLC_BASE + 0xB28)  /* Frame height generation. */
#define VPC_VP_RD_FHG_7           (VPC_VLC_BASE + 0xB50)  /* Frame height generation. */
#define VPC_VP_RD_FHG_8           (VPC_VLC_BASE + 0xB78)  /* Frame height generation. */
#define VPC_VP_RD_FHG_9           (VPC_VLC_BASE + 0xBA0)  /* Frame height generation. */
#define VPC_VP_RD_FHG_10          (VPC_VLC_BASE + 0xBC8)  /* Frame height generation. */
#define VPC_VP_RD_AXI_FS_0        (VPC_VLC_BASE + 0xA3C)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_1        (VPC_VLC_BASE + 0xA64)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_2        (VPC_VLC_BASE + 0xA8C)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_3        (VPC_VLC_BASE + 0xAB4)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_4        (VPC_VLC_BASE + 0xADC)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_5        (VPC_VLC_BASE + 0xB04)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_6        (VPC_VLC_BASE + 0xB2C)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_7        (VPC_VLC_BASE + 0xB54)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_8        (VPC_VLC_BASE + 0xB7C)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_9        (VPC_VLC_BASE + 0xBA4)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_10       (VPC_VLC_BASE + 0xBCC)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_0   (VPC_VLC_BASE + 0xA40)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_1   (VPC_VLC_BASE + 0xA68)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_2   (VPC_VLC_BASE + 0xA90)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_3   (VPC_VLC_BASE + 0xAB8)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_4   (VPC_VLC_BASE + 0xAE0)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_5   (VPC_VLC_BASE + 0xB08)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_6   (VPC_VLC_BASE + 0xB30)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_7   (VPC_VLC_BASE + 0xB58)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_8   (VPC_VLC_BASE + 0xB80)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_9   (VPC_VLC_BASE + 0xBA8)  /* AXI frame start. */
#define VPC_VP_RD_AXI_FS_HIGH_10  (VPC_VLC_BASE + 0xBD0)  /* AXI frame start. */
#define VPC_VP_RD_AXI_LINE_0      (VPC_VLC_BASE + 0xA44)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_1      (VPC_VLC_BASE + 0xA6C)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_2      (VPC_VLC_BASE + 0xA94)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_3      (VPC_VLC_BASE + 0xABC)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_4      (VPC_VLC_BASE + 0xAE4)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_5      (VPC_VLC_BASE + 0xB0C)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_6      (VPC_VLC_BASE + 0xB34)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_7      (VPC_VLC_BASE + 0xB5C)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_8      (VPC_VLC_BASE + 0xB84)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_9      (VPC_VLC_BASE + 0xBAC)  /* VP rd line stride */
#define VPC_VP_RD_AXI_LINE_10     (VPC_VLC_BASE + 0xBD4)  /* VP rd line stride */
#define VPC_VP_RD_IF_CFG_0        (VPC_VLC_BASE + 0xA48)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_1        (VPC_VLC_BASE + 0xA70)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_2        (VPC_VLC_BASE + 0xA98)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_3        (VPC_VLC_BASE + 0xAC0)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_4        (VPC_VLC_BASE + 0xAE8)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_5        (VPC_VLC_BASE + 0xB10)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_6        (VPC_VLC_BASE + 0xB38)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_7        (VPC_VLC_BASE + 0xB60)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_8        (VPC_VLC_BASE + 0xB88)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_9        (VPC_VLC_BASE + 0xBB0)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_IF_CFG_10       (VPC_VLC_BASE + 0xBD8)  /* Video port read interface configuration: prefetch or reset or stall capability. */
#define VPC_VP_RD_DEBUG_0         (VPC_VLC_BASE + 0xA4C)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_1         (VPC_VLC_BASE + 0xA74)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_2         (VPC_VLC_BASE + 0xA9C)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_3         (VPC_VLC_BASE + 0xAC4)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_4         (VPC_VLC_BASE + 0xAEC)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_5         (VPC_VLC_BASE + 0xB14)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_6         (VPC_VLC_BASE + 0xB3C)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_7         (VPC_VLC_BASE + 0xB64)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_8         (VPC_VLC_BASE + 0xB8C)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_9         (VPC_VLC_BASE + 0xBB4)  /* Video Port Read DEBUG information. */
#define VPC_VP_RD_DEBUG_10        (VPC_VLC_BASE + 0xBDC)  /* Video Port Read DEBUG information. */
#define VPC_LIMITER_VP_RD_0       (VPC_VLC_BASE + 0xA50)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_1       (VPC_VLC_BASE + 0xA78)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_2       (VPC_VLC_BASE + 0xAA0)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_3       (VPC_VLC_BASE + 0xAC8)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_4       (VPC_VLC_BASE + 0xAF0)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_5       (VPC_VLC_BASE + 0xB18)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_6       (VPC_VLC_BASE + 0xB40)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_7       (VPC_VLC_BASE + 0xB68)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_8       (VPC_VLC_BASE + 0xB90)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_9       (VPC_VLC_BASE + 0xBB8)  /* Video port read Access limiter. */
#define VPC_LIMITER_VP_RD_10      (VPC_VLC_BASE + 0xBE0)  /* Video port read Access limiter. */
#define VPC_SPARE_0               (VPC_VLC_BASE + 0x1D30) /* Spare. */
#define VPC_SPARE_1               (VPC_VLC_BASE + 0x1D34) /* Spare. */
#define VPC_SPARE_2               (VPC_VLC_BASE + 0x1D38) /* Spare. */
#define VPC_SPARE_3               (VPC_VLC_BASE + 0x1D3C) /* Spare. */
#define VPC_DEBUG_0               (VPC_VLC_BASE + 0x1F40) /* DEBUG information. */
#define VPC_DEBUG_1               (VPC_VLC_BASE + 0x1F44) /* DEBUG information. */
#define VPC_DEBUG_2               (VPC_VLC_BASE + 0x1F48) /* DEBUG information. */
#define VPC_DEBUG_3               (VPC_VLC_BASE + 0x1F4C) /* DEBUG information. */
#define VPC_DEBUG_4               (VPC_VLC_BASE + 0x1F50) /* DEBUG information. */
#define VPC_DEBUG_5               (VPC_VLC_BASE + 0x1F54) /* DEBUG information. */
#define VPC_DEBUG_6               (VPC_VLC_BASE + 0x1F58) /* DEBUG information. */
#define VPC_DEBUG_7               (VPC_VLC_BASE + 0x1F5C) /* DEBUG information. */
#define VPC_DEBUG_8               (VPC_VLC_BASE + 0x1F60) /* DEBUG information. */
#define VPC_DEBUG_9               (VPC_VLC_BASE + 0x1F64) /* DEBUG information. */
#define VPC_DEBUG_10              (VPC_VLC_BASE + 0x1F68) /* DEBUG information. */
#define VPC_DEBUG_11              (VPC_VLC_BASE + 0x1F6C) /* DEBUG information. */
#define VPC_DEBUG_12              (VPC_VLC_BASE + 0x1F70) /* DEBUG information. */
#define VPC_DEBUG_13              (VPC_VLC_BASE + 0x1F74) /* DEBUG information. */
#define VPC_DEBUG_14              (VPC_VLC_BASE + 0x1F78) /* DEBUG information. */
#define VPC_DEBUG_15              (VPC_VLC_BASE + 0x1F7C) /* DEBUG information. */
#define VPC_DEBUG_16              (VPC_VLC_BASE + 0x1F80) /* DEBUG information. */
#define VPC_DEBUG_17              (VPC_VLC_BASE + 0x1F84) /* DEBUG information. */
#define VPC_DEBUG_18              (VPC_VLC_BASE + 0x1F88) /* DEBUG information. */
#define VPC_DEBUG_19              (VPC_VLC_BASE + 0x1F8C) /* DEBUG information. */
#define VPC_DEBUG_20              (VPC_VLC_BASE + 0x1F90) /* DEBUG information. */
#define VPC_DEBUG_21              (VPC_VLC_BASE + 0x1F94) /* DEBUG information. */
#define VPC_DEBUG_22              (VPC_VLC_BASE + 0x1F98) /* DEBUG information. */
#define VPC_DEBUG_23              (VPC_VLC_BASE + 0x1F9C) /* DEBUG information. */
#define VPC_DEBUG_24              (VPC_VLC_BASE + 0x1FA0) /* DEBUG information. */
#define VPC_DEBUG_25              (VPC_VLC_BASE + 0x1FA4) /* DEBUG information. */
#define VPC_DEBUG_26              (VPC_VLC_BASE + 0x1FA8) /* DEBUG information. */
#define VPC_DEBUG_27              (VPC_VLC_BASE + 0x1FAC) /* DEBUG information. */
#define VPC_DEBUG_28              (VPC_VLC_BASE + 0x1FB0) /* DEBUG information. */
#define VPC_DEBUG_29              (VPC_VLC_BASE + 0x1FB4) /* DEBUG information. */
#define VPC_DEBUG_30              (VPC_VLC_BASE + 0x1FB8) /* DEBUG information. */
#define VPC_DEBUG_31              (VPC_VLC_BASE + 0x1FBC) /* DEBUG information. */
#define VPC_NR_RD_CFG_0           (VPC_VLC_BASE + 0x1000) /* Initiator read Configuration. */
#define VPC_NR_RD_CFG_1           (VPC_VLC_BASE + 0x1010) /* Initiator read Configuration. */
#define VPC_NR_RD_CFG_2           (VPC_VLC_BASE + 0x1020) /* Initiator read Configuration. */
#define VPC_NR_RD_CFG_3           (VPC_VLC_BASE + 0x1030) /* Initiator read Configuration. */
#define VPC_NR_RD_DEBUG_0         (VPC_VLC_BASE + 0x1004) /* Non-Raster Read DEBUG information. */
#define VPC_NR_RD_DEBUG_1         (VPC_VLC_BASE + 0x1014) /* Non-Raster Read DEBUG information. */
#define VPC_NR_RD_DEBUG_2         (VPC_VLC_BASE + 0x1024) /* Non-Raster Read DEBUG information. */
#define VPC_NR_RD_DEBUG_3         (VPC_VLC_BASE + 0x1034) /* Non-Raster Read DEBUG information. */
#define VPC_LIMITER_NR_RD_0       (VPC_VLC_BASE + 0x1008) /* NR RD Access limiter. */
#define VPC_LIMITER_NR_RD_1       (VPC_VLC_BASE + 0x1018) /* NR RD Access limiter. */
#define VPC_LIMITER_NR_RD_2       (VPC_VLC_BASE + 0x1028) /* NR RD Access limiter. */
#define VPC_LIMITER_NR_RD_3       (VPC_VLC_BASE + 0x1038) /* NR RD Access limiter. */
#define VPC_NR_RD_BRG_CFG_0       (VPC_VLC_BASE + 0x100C) /* NR RD Bridge Configuration */
#define VPC_NR_RD_BRG_CFG_1       (VPC_VLC_BASE + 0x101C) /* NR RD Bridge Configuration */
#define VPC_NR_RD_BRG_CFG_2       (VPC_VLC_BASE + 0x102C) /* NR RD Bridge Configuration */
#define VPC_NR_RD_BRG_CFG_3       (VPC_VLC_BASE + 0x103C) /* NR RD Bridge Configuration */
#define VPC_NR_WR_CFG_0           (VPC_VLC_BASE + 0x1200) /* Initiator write Configuration. */
#define VPC_NR_WR_CFG_1           (VPC_VLC_BASE + 0x1210) /* Initiator write Configuration. */
#define VPC_NR_WR_DEBUG_0         (VPC_VLC_BASE + 0x1204) /* Non-Raster Write DEBUG information. */
#define VPC_NR_WR_DEBUG_1         (VPC_VLC_BASE + 0x1214) /* Non-Raster Write DEBUG information. */
#define VPC_LIMITER_NR_WR_0       (VPC_VLC_BASE + 0x1208) /* NR WR Access limiter. */
#define VPC_LIMITER_NR_WR_1       (VPC_VLC_BASE + 0x1218) /* NR WR Access limiter. */
#define VPC_NR_WR_BRG_CFG_0       (VPC_VLC_BASE + 0x120C) /* NR WR Bridge Configuration */
#define VPC_NR_WR_BRG_CFG_1       (VPC_VLC_BASE + 0x121C) /* NR WR Bridge Configuration */

#define  VPC_VP_WR_CFG(VP_WR_NBR)           (VPC_VLC_BASE + 0x0030 + 0x20 * (VP_WR_NBR))
#define  VPC_VP_WR_AXI_FS(VP_WR_NBR)        (VPC_VLC_BASE + 0x0034 + 0x20 * (VP_WR_NBR))
#define  VPC_VP_WR_AXI_FS_HIGH(VP_WR_NBR)   (VPC_VLC_BASE + 0x0038 + 0x20 * (VP_WR_NBR))
#define  VPC_VP_WR_AXI_LINE(VP_WR_NBR)      (VPC_VLC_BASE + 0x003c + 0x20 * (VP_WR_NBR))
#define  VPC_VP_WR_LWG(VP_WR_NBR)           (VPC_VLC_BASE + 0x0040 + 0x20 * (VP_WR_NBR))
#define  VPC_VP_WR_IF_CFG(VP_WR_NBR)        (VPC_VLC_BASE + 0x0044 + 0x20 * (VP_WR_NBR))
#define  VPC_LIMITER_VP_WR(VP_WR_NBR)       (VPC_VLC_BASE + 0x004c + 0x20 * (VP_WR_NBR))
/* -------------------------------------------------------------------------------- */

/* Define the union U_VPC_CVDR_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    axiwrite_du_threshold : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    du_threshold_reached  : 8   ; /* [15..8]  */
        unsigned int    max_axiread_id        : 8   ; /* [23..16]  */
        unsigned int    max_axiwrite_id       : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_CFG;

/* Define the union U_VPC_CVDR_DEBUG_EN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wr_peak_en            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 7   ; /* [7..1]  */
        unsigned int    rd_peak_en            : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_DEBUG_EN;

/* Define the union U_VPC_CVDR_DEBUG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wr_peak               : 8   ; /* [7..0]  */
        unsigned int    rd_peak               : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_DEBUG;

/* Define the union U_VPC_CVDR_WR_QOS_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wr_qos_threshold_01_stop : 4   ; /* [3..0]  */
        unsigned int    wr_qos_threshold_01_start : 4   ; /* [7..4]  */
        unsigned int    wr_qos_threshold_10_stop : 4   ; /* [11..8]  */
        unsigned int    wr_qos_threshold_10_start : 4   ; /* [15..12]  */
        unsigned int    wr_qos_threshold_11_stop : 4   ; /* [19..16]  */
        unsigned int    wr_qos_threshold_11_start : 4   ; /* [23..20]  */
        unsigned int    reserved_0            : 2   ; /* [25..24]  */
        unsigned int    wr_qos_min            : 2   ; /* [27..26]  */
        unsigned int    wr_qos_max            : 2   ; /* [29..28]  */
        unsigned int    wr_qos_sr             : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_WR_QOS_CFG;

/* Define the union U_VPC_CVDR_RD_QOS_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rd_qos_threshold_01_stop : 4   ; /* [3..0]  */
        unsigned int    rd_qos_threshold_01_start : 4   ; /* [7..4]  */
        unsigned int    rd_qos_threshold_10_stop : 4   ; /* [11..8]  */
        unsigned int    rd_qos_threshold_10_start : 4   ; /* [15..12]  */
        unsigned int    rd_qos_threshold_11_stop : 4   ; /* [19..16]  */
        unsigned int    rd_qos_threshold_11_start : 4   ; /* [23..20]  */
        unsigned int    reserved_0            : 2   ; /* [25..24]  */
        unsigned int    rd_qos_min            : 2   ; /* [27..26]  */
        unsigned int    rd_qos_max            : 2   ; /* [29..28]  */
        unsigned int    rd_qos_sr             : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_RD_QOS_CFG;

/* Define the union U_VPC_FORCE_CLK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    force_vprd_clk_on     : 1   ; /* [0]  */
        unsigned int    force_vpwr_clk_on     : 1   ; /* [1]  */
        unsigned int    force_nrrd_clk_on     : 1   ; /* [2]  */
        unsigned int    force_nrwr_clk_on     : 1   ; /* [3]  */
        unsigned int    force_axi_rd_clk_on   : 1   ; /* [4]  */
        unsigned int    force_axi_wr_clk_on   : 1   ; /* [5]  */
        unsigned int    force_du_rd_clk_on    : 1   ; /* [6]  */
        unsigned int    force_du_wr_clk_on    : 1   ; /* [7]  */
        unsigned int    force_cfg_clk_on      : 1   ; /* [8]  */
        unsigned int    reserved_0            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_FORCE_CLK;

/* Define the union U_VPC_OTHER_RO */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int other_ro               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_OTHER_RO;
/* Define the union U_VPC_OTHER_RW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int other_rw               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_OTHER_RW;
/* Define the union U_VPC_CVDR_BUS_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vp_rd_early_run_en    : 1   ; /* [0]  */
        unsigned int    axi_req_128align_sel  : 1   ; /* [1]  */
        unsigned int    smmu_no_ch_sel        : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CVDR_BUS_CFG;

/* Define the union U_VPC_VP_WR_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpwr_pixel_format     : 4   ; /* [3..0]  */
        unsigned int    vpwr_pixel_expansion  : 1   ; /* [4]  */
        unsigned int    reserved_0            : 8   ; /* [12..5]  */
        unsigned int    vpwr_last_page        : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_WR_CFG;

/* Define the union U_VPC_VP_WR_AXI_FS */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpwr_address_frame_start : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_WR_AXI_FS;
/* Define the union U_VPC_VP_WR_AXI_FS_HIGH */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpwr_address_frame_start_high : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_WR_AXI_FS_HIGH;
/* Define the union U_VPC_VP_WR_AXI_LINE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpwr_line_stride       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_WR_AXI_LINE;
/* Define the union U_VPC_VP_WR_LWG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpwr_line_size        : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 15  ; /* [30..16]  */
        unsigned int    vpwr_yflip_en         : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_WR_LWG;

/* Define the union U_VPC_VP_WR_IF_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vp_wr_stop_enable_du_threshold_reached : 1   ; /* [16]  */
        unsigned int    vp_wr_stop_enable_flux_ctrl : 1   ; /* [17]  */
        unsigned int    vp_wr_stop_enable_pressure : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [23..19]  */
        unsigned int    vp_wr_stop_ok         : 1   ; /* [24]  */
        unsigned int    vp_wr_stop            : 1   ; /* [25]  */
        unsigned int    reserved_2            : 5   ; /* [30..26]  */
        unsigned int    vpwr_prefetch_bypass  : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_WR_IF_CFG;

/* Define the union U_VPC_VP_WR_DEBUG */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vp_wr_debug            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_WR_DEBUG;
/* Define the union U_VPC_LIMITER_VP_WR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpwr_access_limiter_0 : 4   ; /* [3..0]  */
        unsigned int    vpwr_access_limiter_1 : 4   ; /* [7..4]  */
        unsigned int    vpwr_access_limiter_2 : 4   ; /* [11..8]  */
        unsigned int    vpwr_access_limiter_3 : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 8   ; /* [23..16]  */
        unsigned int    vpwr_access_limiter_reload : 4   ; /* [27..24]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_LIMITER_VP_WR;

/* Define the union U_VPC_VP_RD_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vprd_pixel_format     : 4   ; /* [3..0]  */
        unsigned int    vprd_pixel_expansion  : 1   ; /* [4]  */
        unsigned int    vprd_allocated_du     : 8   ; /* [12..5]  */
        unsigned int    vprd_last_page        : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_RD_CFG;

/* Define the union U_VPC_VP_RD_LWG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vprd_line_size        : 16  ; /* [15..0]  */
        unsigned int    vprd_horizontal_blanking : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 7   ; /* [30..24]  */
        unsigned int    vprd_yflip_en         : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_RD_LWG;

/* Define the union U_VPC_VP_RD_FHG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vprd_frame_size       : 16  ; /* [15..0]  */
        unsigned int    vprd_vertical_blanking : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_RD_FHG;

/* Define the union U_VPC_VP_RD_AXI_FS */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vprd_axi_frame_start   : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_RD_AXI_FS;
/* Define the union U_VPC_VP_RD_AXI_FS_HIGH */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vprd_axi_frame_start_high : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_RD_AXI_FS_HIGH;
/* Define the union U_VPC_VP_RD_AXI_LINE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vprd_line_stride       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_RD_AXI_LINE;
/* Define the union U_VPC_VP_RD_IF_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vp_rd_stop_enable_du_threshold_reached : 1   ; /* [16]  */
        unsigned int    vp_rd_stop_enable_flux_ctrl : 1   ; /* [17]  */
        unsigned int    vp_rd_stop_enable_pressure : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [23..19]  */
        unsigned int    vp_rd_stop_ok         : 1   ; /* [24]  */
        unsigned int    vp_rd_stop            : 1   ; /* [25]  */
        unsigned int    reserved_2            : 5   ; /* [30..26]  */
        unsigned int    vprd_prefetch_bypass  : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_VP_RD_IF_CFG;

/* Define the union U_VPC_VP_RD_DEBUG */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vp_rd_debug            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_VP_RD_DEBUG;
/* Define the union U_VPC_LIMITER_VP_RD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vprd_access_limiter_0 : 4   ; /* [3..0]  */
        unsigned int    vprd_access_limiter_1 : 4   ; /* [7..4]  */
        unsigned int    vprd_access_limiter_2 : 4   ; /* [11..8]  */
        unsigned int    vprd_access_limiter_3 : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 8   ; /* [23..16]  */
        unsigned int    vprd_access_limiter_reload : 4   ; /* [27..24]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_LIMITER_VP_RD;

/* Define the union U_VPC_SPARE_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int spare_0                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_SPARE_0;
/* Define the union U_VPC_SPARE_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int spare_1                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_SPARE_1;
/* Define the union U_VPC_SPARE_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int spare_2                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_SPARE_2;
/* Define the union U_VPC_SPARE_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int spare_3                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_SPARE_3;
/* Define the union U_VPC_DEBUG_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_0                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_0;
/* Define the union U_VPC_DEBUG_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_1                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_1;
/* Define the union U_VPC_DEBUG_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_2                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_2;
/* Define the union U_VPC_DEBUG_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_3                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_3;
/* Define the union U_VPC_DEBUG_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_4                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_4;
/* Define the union U_VPC_DEBUG_5 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_5                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_5;
/* Define the union U_VPC_DEBUG_6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_6                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_6;
/* Define the union U_VPC_DEBUG_7 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_7                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_7;
/* Define the union U_VPC_DEBUG_8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_8                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_8;
/* Define the union U_VPC_DEBUG_9 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_9                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_9;
/* Define the union U_VPC_DEBUG_10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_10               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_10;
/* Define the union U_VPC_DEBUG_11 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_11               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_11;
/* Define the union U_VPC_DEBUG_12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_12               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_12;
/* Define the union U_VPC_DEBUG_13 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_13               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_13;
/* Define the union U_VPC_DEBUG_14 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_14               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_14;
/* Define the union U_VPC_DEBUG_15 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_15               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_15;
/* Define the union U_VPC_DEBUG_16 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_16               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_16;
/* Define the union U_VPC_DEBUG_17 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_17               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_17;
/* Define the union U_VPC_DEBUG_18 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_18               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_18;
/* Define the union U_VPC_DEBUG_19 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_19               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_19;
/* Define the union U_VPC_DEBUG_20 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_20               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_20;
/* Define the union U_VPC_DEBUG_21 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_21               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_21;
/* Define the union U_VPC_DEBUG_22 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_22               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_22;
/* Define the union U_VPC_DEBUG_23 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_23               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_23;
/* Define the union U_VPC_DEBUG_24 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_24               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_24;
/* Define the union U_VPC_DEBUG_25 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_25               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_25;
/* Define the union U_VPC_DEBUG_26 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_26               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_26;
/* Define the union U_VPC_DEBUG_27 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_27               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_27;
/* Define the union U_VPC_DEBUG_28 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_28               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_28;
/* Define the union U_VPC_DEBUG_29 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_29               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_29;
/* Define the union U_VPC_DEBUG_30 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_30               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_30;
/* Define the union U_VPC_DEBUG_31 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug_31               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_DEBUG_31;
/* Define the union U_VPC_NR_RD_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 5   ; /* [4..0]  */
        unsigned int    nrrd_allocated_du     : 8   ; /* [12..5]  */
        unsigned int    reserved_1            : 3   ; /* [15..13]  */
        unsigned int    nr_rd_stop_enable_du_threshold_reached : 1   ; /* [16]  */
        unsigned int    nr_rd_stop_enable_flux_ctrl : 1   ; /* [17]  */
        unsigned int    nr_rd_stop_enable_pressure : 1   ; /* [18]  */
        unsigned int    reserved_2            : 5   ; /* [23..19]  */
        unsigned int    nr_rd_stop_ok         : 1   ; /* [24]  */
        unsigned int    nr_rd_stop            : 1   ; /* [25]  */
        unsigned int    reserved_3            : 5   ; /* [30..26]  */
        unsigned int    nrrd_enable           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NR_RD_CFG;

/* Define the union U_VPC_NR_RD_DEBUG */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int nr_rd_debug            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_NR_RD_DEBUG;
/* Define the union U_VPC_LIMITER_NR_RD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nrrd_access_limiter_0 : 4   ; /* [3..0]  */
        unsigned int    nrrd_access_limiter_1 : 4   ; /* [7..4]  */
        unsigned int    nrrd_access_limiter_2 : 4   ; /* [11..8]  */
        unsigned int    nrrd_access_limiter_3 : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 8   ; /* [23..16]  */
        unsigned int    nrrd_access_limiter_reload : 4   ; /* [27..24]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_LIMITER_NR_RD;

/* Define the union U_VPC_NR_RD_BRG_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nrrd_req_merge_timeout_trld : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 4   ; /* [7..4]  */
        unsigned int    nrrd_split_en         : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NR_RD_BRG_CFG;

/* Define the union U_VPC_NR_WR_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    nr_wr_stop_enable_du_threshold_reached : 1   ; /* [16]  */
        unsigned int    nr_wr_stop_enable_flux_ctrl : 1   ; /* [17]  */
        unsigned int    nr_wr_stop_enable_pressure : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [23..19]  */
        unsigned int    nr_wr_stop_ok         : 1   ; /* [24]  */
        unsigned int    nr_wr_stop            : 1   ; /* [25]  */
        unsigned int    reserved_2            : 5   ; /* [30..26]  */
        unsigned int    nrwr_enable           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NR_WR_CFG;

/* Define the union U_VPC_NR_WR_DEBUG */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int nr_wr_debug            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_NR_WR_DEBUG;
/* Define the union U_VPC_LIMITER_NR_WR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nrwr_access_limiter_0 : 4   ; /* [3..0]  */
        unsigned int    nrwr_access_limiter_1 : 4   ; /* [7..4]  */
        unsigned int    nrwr_access_limiter_2 : 4   ; /* [11..8]  */
        unsigned int    nrwr_access_limiter_3 : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 8   ; /* [23..16]  */
        unsigned int    nrwr_access_limiter_reload : 4   ; /* [27..24]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_LIMITER_NR_WR;

/* Define the union U_VPC_NR_WR_BRG_CFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nrwr_req_merge_timeout_trld : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 4   ; /* [7..4]  */
        unsigned int    nrwr_split_en         : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NR_WR_BRG_CFG;

#endif // #ifndef VPC_VLC_MILAN_REG_C_UNION_DEFINE_H

