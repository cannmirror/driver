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

#ifndef VPC_PIPE_MOSAIC_COVER_OSD_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MOSAIC_COVER_OSD_REG_C_UNION_DEFINE_H

typedef union {
    struct {
        unsigned int in_width                      : 16 ; /* [15:0] */
        unsigned int in_height                     : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_REGION_SIZE;

typedef union {
    struct {
        unsigned int cover_align_mode              : 1  ; /* [0] */
        unsigned int reserved_0                    : 31 ; /* [31:1] */
    } bits;
    unsigned int u32;
} U_VPC_REGION_CTRL;

typedef union {
    struct {
        unsigned int mosaic_s0_en                  : 1  ; /* [0] */
        unsigned int mosaic_s1_en                  : 1  ; /* [1] */
        unsigned int mosaic_s2_en                  : 1  ; /* [2] */
        unsigned int mosaic_s3_en                  : 1  ; /* [3] */
        unsigned int reserved_0                    : 28 ; /* [31:4] */
    } bits;
    unsigned int u32;
} U_VPC_MOSAIC_CTRL;

typedef union {
    struct {
        unsigned int mosaic_block                  : 2  ; /* [1:0] */
        unsigned int reserved_0                    : 30 ; /* [31:2] */
    } bits;
    unsigned int u32;
} U_VPC_MOSAIC_BLOCK;

typedef union {
    struct {
        unsigned int mosaic_hmax                   : 16 ; /* [15:0] */
        unsigned int mosaic_hmin                   : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_MOSAIC_HPOS;

typedef union {
    struct
    {
        unsigned int mosaic_vmax                   : 16 ; /* [15:0] */
        unsigned int mosaic_vmin                   : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_MOSAIC_VPOS;

typedef union {
    struct {
        unsigned int cover_s0_en                   : 1  ; /* [0] */
        unsigned int cover_s1_en                   : 1  ; /* [1] */
        unsigned int cover_s2_en                   : 1  ; /* [2] */
        unsigned int cover_s3_en                   : 1  ; /* [3] */
        unsigned int cover_s4_en                   : 1  ; /* [4] */
        unsigned int cover_s5_en                   : 1  ; /* [5] */
        unsigned int cover_s6_en                   : 1  ; /* [6] */
        unsigned int cover_s7_en                   : 1  ; /* [7] */
        unsigned int reserved_0                    : 24 ; /* [31:8] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_CTRL;

typedef union {
    struct {
        unsigned int cover_value                   : 24 ; /* [23:0] */
        unsigned int reserved_0                    : 8  ; /* [31:24] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_VALUE;

typedef union {
    struct {
        unsigned int cover_x0                      : 16 ; /* [15:0] */
        unsigned int cover_y0                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_POS0;

typedef union {
    struct {
        unsigned int cover_x1                      : 16 ; /* [15:0] */
        unsigned int cover_y1                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_POS1;

typedef union {
    struct {
        unsigned int cover_x2                      : 16 ; /* [15:0] */
        unsigned int cover_y2                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_POS2;

typedef union {
    struct {
        unsigned int cover_x3                      : 16 ; /* [15:0] */
        unsigned int cover_y3                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_POS3;

typedef union {
    struct {
        unsigned int cover_kk01                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK01;

typedef union {
    struct {
        unsigned int cover_kk02                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK02;

typedef union {
    struct {
        unsigned int cover_kk03                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK03;

typedef union {
    struct {
        unsigned int cover_kk12                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK12;

typedef union {
    struct {
        unsigned int cover_kk13                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK13;

typedef union {
    struct {
        unsigned int cover_kk23                    : 31 ; /* [30:0] */
        unsigned int reserved_0                    : 1  ; /* [31] */
    } bits;
    unsigned int u32;
} U_VPC_COVER_KK23;

typedef union {
    struct {
        unsigned int osd_s0_en                     : 1  ; /* [0] */
        unsigned int osd_s1_en                     : 1  ; /* [1] */
        unsigned int osd_s2_en                     : 1  ; /* [2] */
        unsigned int osd_s3_en                     : 1  ; /* [3] */
        unsigned int osd_s4_en                     : 1  ; /* [4] */
        unsigned int osd_s5_en                     : 1  ; /* [5] */
        unsigned int osd_s6_en                     : 1  ; /* [6] */
        unsigned int osd_s7_en                     : 1  ; /* [7] */
        unsigned int reserved_0                    : 24 ; /* [31:8] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CTRL;

typedef union {
    struct {
        unsigned int osd_img_addr_low       : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_ADDR_L;

typedef union {
    struct {
        unsigned int osd_img_addr_hight     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_ADDR_H;

typedef union {
    struct {
        unsigned int osd_img_stride         : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_STRIDE;

typedef union {
    struct {
        unsigned int osd_img_width                 : 16 ; /* [15:0] */
        unsigned int osd_img_height                : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_SIZE;

typedef union {
    struct {
        unsigned int osd_hmax                      : 16 ; /* [15:0] */
        unsigned int osd_hmin                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_HPOS;

typedef union {
    struct {
        unsigned int osd_vmax                      : 16 ; /* [15:0] */
        unsigned int osd_vmin                      : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_VPOS;

typedef union {
    struct {
        unsigned int osd_format                    : 3  ; /* [2:0] */
        unsigned int reserved_0                    : 29 ; /* [31:3] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_IMG_FORMAT;

typedef union {
    struct {
        unsigned int osd_alpha0                    : 8  ; /* [7:0] */
        unsigned int osd_alpha1                    : 8  ; /* [15:8] */
        unsigned int osd_palpha_en                 : 1  ; /* [16] */
        unsigned int osd_bit_ext_mode              : 2  ; /* [18:17] */
        unsigned int reserved_0                    : 5  ; /* [23:19] */
        unsigned int osd_global_alpha              : 8  ; /* [31:24] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CTRL_MODE;

typedef union {
    struct {
        unsigned int osd_rgb_rev                   : 1  ; /* [0] */
        unsigned int osd_alpha_rev                 : 1  ; /* [1] */
        unsigned int reserved_0                    : 30 ; /* [31:2] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_REV_MODE;

typedef union {
    struct {
        unsigned int osd_img_clut2_argb     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CLUT2_LAB;

typedef union {
    struct {
        unsigned int osd_img_clut4_argb     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CLUT4_LAB;

typedef union {
    struct {
        unsigned int osd_csc_en                    : 1  ; /* [0] */
        unsigned int reserved_0                    : 31 ; /* [31:1] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CTRL;

typedef union {
    struct {
        unsigned int osd_csc_coeff0_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_0;

typedef union {
    struct {
        unsigned int osd_csc_coeff0_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_1;

typedef union {
    struct {
        unsigned int osd_csc_coeff1_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_2;

typedef union {
    struct {
        unsigned int osd_csc_coeff1_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_3;

typedef union {
    struct {
        unsigned int osd_csc_coeff2_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_4;

typedef union {
    struct {
        unsigned int osd_csc_coeff2_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_5;

typedef union {
    struct {
        unsigned int osd_csc_coeff3_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_6;

typedef union {
    struct {
        unsigned int osd_csc_coeff3_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_7;

typedef union {
    struct {
        unsigned int osd_csc_coeff4_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_8;

typedef union {
    struct {
        unsigned int osd_csc_coeff4_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_9;

typedef union {
    struct {
        unsigned int osd_csc_coeff5_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_10;

typedef union {
    struct {
        unsigned int osd_csc_coeff5_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_11;

typedef union {
    struct {
        unsigned int osd_csc_coeff6_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_12;

typedef union {
    struct {
        unsigned int osd_csc_coeff6_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_13;

typedef union {
    struct {
        unsigned int osd_csc_coeff7_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_14;

typedef union {
    struct {
        unsigned int osd_csc_coeff7_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_15;

typedef union {
    struct {
        unsigned int osd_csc_coeff8_low     : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_16;

typedef union {
    struct {
        unsigned int osd_csc_coeff8_high           : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_17;

typedef union {
    struct {
        unsigned int osd_csc_offset0_low    : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_18;

typedef union {
    struct {
        unsigned int osd_csc_offset0_high          : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_19;

typedef union {
    struct {
        unsigned int osd_csc_offset1_low    : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_20;

typedef union {
    struct {
        unsigned int osd_csc_offset1_high          : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_21;

typedef union {
    struct {
        unsigned int osd_csc_offset2_low    : 32  ; /* [31:0] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_22;

typedef union {
    struct {
        unsigned int osd_csc_offset2_high          : 8  ; /* [7:0] */
        unsigned int reserved_0                    : 24 ; /* [31:08] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_23;

typedef union {
    struct {
        unsigned int osd_csc_in_low_thr0           : 16 ; /* [15:0] */
        unsigned int osd_csc_in_hig_thr0           : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_IN_THRESHOLD0;

typedef union {
    struct {
        unsigned int osd_csc_in_low_thr1           : 16 ; /* [15:0] */
        unsigned int osd_csc_in_hig_thr1           : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_IN_THRESHOLD1;

typedef union {
    struct {
        unsigned int osd_csc_in_low_thr2           : 16 ; /* [15:0] */
        unsigned int osd_csc_in_hig_thr2           : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_IN_THRESHOLD2;

typedef union {
    struct {
        unsigned int osd_csc_out_low_thr0          : 16 ; /* [15:0] */
        unsigned int osd_csc_out_hig_thr0          : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD0;

typedef union {
    struct {
        unsigned int osd_csc_out_low_thr1          : 16 ; /* [15:0] */
        unsigned int osd_csc_out_hig_thr1          : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD1;

typedef union {
    struct {
        unsigned int osd_csc_out_low_thr2          : 16 ; /* [15:0] */
        unsigned int osd_csc_out_hig_thr2          : 16 ; /* [31:16] */
    } bits;
    unsigned int u32;
} U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD2;

typedef struct VPC_PIPELINE_MOSAIC_COVER_OSD_REGS_TYPE
{
    volatile U_VPC_REGION_SIZE              VPC_REGION_SIZE;
    volatile U_VPC_REGION_CTRL              VPC_REGION_CTRL;
    volatile U_VPC_MOSAIC_CTRL              VPC_MOSAIC_CTRL;
    volatile U_VPC_MOSAIC_BLOCK             VPC_MOSAIC_BLOCK;
    volatile U_VPC_MOSAIC_HPOS              VPC_MOSAIC_HPOS[4];
    volatile U_VPC_MOSAIC_VPOS              VPC_MOSAIC_VPOS[4];
    volatile U_VPC_COVER_CTRL               VPC_COVER_CTRL;
    volatile U_VPC_COVER_VALUE              VPC_COVER_VALUE[8];
    volatile U_VPC_COVER_POS0               VPC_COVER_POS0[8];
    volatile U_VPC_COVER_POS1               VPC_COVER_POS1[8];
    volatile U_VPC_COVER_POS2               VPC_COVER_POS2[8];
    volatile U_VPC_COVER_POS3               VPC_COVER_POS3[8];
    volatile U_VPC_COVER_KK01               VPC_COVER_KK01[8];
    volatile U_VPC_COVER_KK02               VPC_COVER_KK02[8];
    volatile U_VPC_COVER_KK03               VPC_COVER_KK03[8];
    volatile U_VPC_COVER_KK12               VPC_COVER_KK12[8];
    volatile U_VPC_COVER_KK13               VPC_COVER_KK13[8];
    volatile U_VPC_COVER_KK23               VPC_COVER_KK23[8];
    volatile U_VPC_OSD_CTRL                 VPC_OSD_CTRL;
    volatile unsigned int                   VPC_OSD_ADDR_L[8];
    volatile unsigned int                   VPC_OSD_ADDR_H[8];
    volatile unsigned int                   VPC_OSD_STRIDE[8];
    volatile U_VPC_OSD_SIZE                 VPC_OSD_SIZE[8];
    volatile U_VPC_OSD_HPOS                 VPC_OSD_HPOS[8];
    volatile U_VPC_OSD_VPOS                 VPC_OSD_VPOS[8];
    volatile U_VPC_OSD_IMG_FORMAT           VPC_OSD_IMG_FORMAT[8];
    volatile U_VPC_OSD_CTRL_MODE            VPC_OSD_CTRL_MODE[8];
    volatile U_VPC_OSD_REV_MODE             VPC_OSD_REV_MODE[8];
    volatile unsigned int                   VPC_OSD_CLUT2_LAB[4];
    volatile unsigned int                   VPC_OSD_CLUT4_LAB[16];
    volatile U_VPC_OSD_CSC_CTRL             VPC_OSD_CSC_CTRL;
    volatile unsigned int                   VPC_OSD_CSC_0;
    volatile U_VPC_OSD_CSC_1                VPC_OSD_CSC_1;
    volatile unsigned int                   VPC_OSD_CSC_2;
    volatile U_VPC_OSD_CSC_3                VPC_OSD_CSC_3;
    volatile unsigned int                   VPC_OSD_CSC_4;
    volatile U_VPC_OSD_CSC_5                VPC_OSD_CSC_5;
    volatile unsigned int                   VPC_OSD_CSC_6;
    volatile U_VPC_OSD_CSC_7                VPC_OSD_CSC_7;
    volatile unsigned int                   VPC_OSD_CSC_8;
    volatile U_VPC_OSD_CSC_9                VPC_OSD_CSC_9;
    volatile unsigned int                   VPC_OSD_CSC_10;
    volatile U_VPC_OSD_CSC_11               VPC_OSD_CSC_11;
    volatile unsigned int                   VPC_OSD_CSC_12;
    volatile U_VPC_OSD_CSC_13               VPC_OSD_CSC_13;
    volatile unsigned int                   VPC_OSD_CSC_14;
    volatile U_VPC_OSD_CSC_15               VPC_OSD_CSC_15;
    volatile unsigned int                   VPC_OSD_CSC_16;
    volatile U_VPC_OSD_CSC_17               VPC_OSD_CSC_17;
    volatile unsigned int                   VPC_OSD_CSC_18;
    volatile U_VPC_OSD_CSC_19               VPC_OSD_CSC_19;
    volatile unsigned int                   VPC_OSD_CSC_20;
    volatile U_VPC_OSD_CSC_21               VPC_OSD_CSC_21;
    volatile unsigned int                   VPC_OSD_CSC_22;
    volatile U_VPC_OSD_CSC_23               VPC_OSD_CSC_23;
    volatile U_VPC_OSD_CSC_CLIP_IN_THRESHOLD0 VPC_OSD_CSC_CLIP_IN_THRESHOLD0;
    volatile U_VPC_OSD_CSC_CLIP_IN_THRESHOLD1 VPC_OSD_CSC_CLIP_IN_THRESHOLD1;
    volatile U_VPC_OSD_CSC_CLIP_IN_THRESHOLD2 VPC_OSD_CSC_CLIP_IN_THRESHOLD2;
    volatile U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD0 VPC_OSD_CSC_CLIP_OUT_THRESHOLD0;
    volatile U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD1 VPC_OSD_CSC_CLIP_OUT_THRESHOLD1;
    volatile U_VPC_OSD_CSC_CLIP_OUT_THRESHOLD2 VPC_OSD_CSC_CLIP_OUT_THRESHOLD2;
} S_VPC_PIPELINE_MOSAIC_COVER_OSD_REGS_TYPE;

#endif // #ifndef VPC_PIPE_MOSAIC_COVER_OSD_REG_C_UNION_DEFINE_H