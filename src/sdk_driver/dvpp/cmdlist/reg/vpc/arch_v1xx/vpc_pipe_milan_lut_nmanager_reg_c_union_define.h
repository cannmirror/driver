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

#ifndef VPC_PIPE_MILAN_LUT_NMANAGER_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_LUT_NMANAGER_REG_C_UNION_DEFINE_H

/* Define the union U_GLOBAL_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    enable                : 1   ; /* [0]  */
        unsigned int    index_windows         : 1   ; /* [1]  */
        unsigned int    debug_lut             : 2   ; /* [3..2]  */
        unsigned int    channel_en            : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GLOBAL_CTRL;

/* Define the union U_INPUT0_PIC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_imgwidth_pix      : 16  ; /* [15..0]  */
        unsigned int    in0_imgheight_pix     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INPUT0_PIC_SIZE;

/* Define the union U_INPUT1_PIC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_imgwidth_pix      : 16  ; /* [15..0]  */
        unsigned int    in1_imgheight_pix     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INPUT1_PIC_SIZE;

/* Define the union U_LUT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_en                : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_CTRL;

/* Define the union U_GAIN_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_en               : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_CTRL;

/* Define the union U_POSTERIZE_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_en          : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_CTRL;

/* Define the union U_THRESHOLD_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_en          : 4   ; /* [3..0]  */
        unsigned int    threshold_mode        : 4   ; /* [7..4]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_CTRL;

/* Define the union U_CUTOUT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout0_en            : 3   ; /* [2..0]  */
        unsigned int    cutout1_en            : 3   ; /* [5..3]  */
        unsigned int    cutout2_en            : 3   ; /* [8..6]  */
        unsigned int    cutout3_en            : 3   ; /* [11..9]  */
        unsigned int    cutout_mode           : 2   ; /* [13..12]  */
        unsigned int    reserved_0            : 18  ; /* [31..14]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_CTRL;

/* Define the union U_LUT_WIN0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win0_hmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win0_hmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN0_H;

/* Define the union U_LUT_WIN0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win0_vmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win0_vmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN0_V;

/* Define the union U_LUT_WIN1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win1_hmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win1_hmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN1_H;

/* Define the union U_LUT_WIN1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win1_vmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win1_vmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN1_V;

/* Define the union U_LUT_WIN2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win2_hmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win2_hmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN2_H;

/* Define the union U_LUT_WIN2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win2_vmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win2_vmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN2_V;

/* Define the union U_LUT_WIN3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win3_hmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win3_hmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN3_H;

/* Define the union U_LUT_WIN3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lut_win3_vmax         : 16  ; /* [15..0]  */
        unsigned int    lut_win3_vmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LUT_WIN3_V;

/* Define the union U_GAIN0_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain0_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN0_VALUE;

/* Define the union U_GAIN1_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain1_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN1_VALUE;

/* Define the union U_GAIN2_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain2_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN2_VALUE;

/* Define the union U_GAIN3_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain3_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN3_VALUE;

/* Define the union U_GAIN4_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain4_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN4_VALUE;

/* Define the union U_GAIN5_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain5_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN5_VALUE;

/* Define the union U_GAIN6_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain6_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN6_VALUE;

/* Define the union U_GAIN7_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain7_value           : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN7_VALUE;

/* Define the union U_GAIN_WIN0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win0_hmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win0_hmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN0_H;

/* Define the union U_GAIN_WIN0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win0_vmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win0_vmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN0_V;

/* Define the union U_GAIN_WIN1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win1_hmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win1_hmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN1_H;

/* Define the union U_GAIN_WIN1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win1_vmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win1_vmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN1_V;

/* Define the union U_GAIN_WIN2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win2_hmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win2_hmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN2_H;

/* Define the union U_GAIN_WIN2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win2_vmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win2_vmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN2_V;

/* Define the union U_GAIN_WIN3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win3_hmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win3_hmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN3_H;

/* Define the union U_GAIN_WIN3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gain_win3_vmax        : 16  ; /* [15..0]  */
        unsigned int    gain_win3_vmin        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GAIN_WIN3_V;

/* Define the union U_POSTERIZE0_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize0_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE0_VALUE;

/* Define the union U_POSTERIZE1_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize1_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE1_VALUE;

/* Define the union U_POSTERIZE2_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize2_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE2_VALUE;

/* Define the union U_POSTERIZE3_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize3_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE3_VALUE;

/* Define the union U_POSTERIZE_WIN0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win0_hmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win0_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN0_H;

/* Define the union U_POSTERIZE_WIN0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win0_vmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win0_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN0_V;

/* Define the union U_POSTERIZE_WIN1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win1_hmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win1_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN1_H;

/* Define the union U_POSTERIZE_WIN1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win1_vmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win1_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN1_V;

/* Define the union U_POSTERIZE_WIN2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win2_hmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win2_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN2_H;

/* Define the union U_POSTERIZE_WIN2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win2_vmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win2_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN2_V;

/* Define the union U_POSTERIZE_WIN3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win3_hmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win3_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN3_H;

/* Define the union U_POSTERIZE_WIN3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    posterize_win3_vmax   : 16  ; /* [15..0]  */
        unsigned int    posterize_win3_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTERIZE_WIN3_V;

/* Define the union U_THRESHOLD0_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold0_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD0_VALUE;

/* Define the union U_THRESHOLD1_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold1_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD1_VALUE;

/* Define the union U_THRESHOLD2_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold2_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD2_VALUE;

/* Define the union U_THRESHOLD3_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold3_value      : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD3_VALUE;

/* Define the union U_THRESHOLD_WIN0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win0_hmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win0_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN0_H;

/* Define the union U_THRESHOLD_WIN0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win0_vmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win0_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN0_V;

/* Define the union U_THRESHOLD_WIN1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win1_hmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win1_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN1_H;

/* Define the union U_THRESHOLD_WIN1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win1_vmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win1_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN1_V;

/* Define the union U_THRESHOLD_WIN2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win2_hmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win2_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN2_H;

/* Define the union U_THRESHOLD_WIN2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win2_vmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win2_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN2_V;

/* Define the union U_THRESHOLD_WIN3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win3_hmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win3_hmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN3_H;

/* Define the union U_THRESHOLD_WIN3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    threshold_win3_vmax   : 16  ; /* [15..0]  */
        unsigned int    threshold_win3_vmin   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_THRESHOLD_WIN3_V;

/* Define the union U_CUTOUT0_R */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout0_r              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT0_R;
/* Define the union U_CUTOUT0_G */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout0_g              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT0_G;
/* Define the union U_CUTOUT0_B */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout0_b              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT0_B;
/* Define the union U_CUTOUT1_R */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout1_r              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT1_R;
/* Define the union U_CUTOUT1_G */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout1_g              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT1_G;
/* Define the union U_CUTOUT1_B */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout1_b              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT1_B;
/* Define the union U_CUTOUT2_R */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout2_r              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT2_R;
/* Define the union U_CUTOUT2_G */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout2_g              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT2_G;
/* Define the union U_CUTOUT2_B */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout2_b              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT2_B;
/* Define the union U_CUTOUT3_R */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout3_r              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT3_R;
/* Define the union U_CUTOUT3_G */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout3_g              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT3_G;
/* Define the union U_CUTOUT3_B */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cutout3_b              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CUTOUT3_B;
/* Define the union U_CUTOUT_WIN0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win0_hmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win0_hmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN0_H;

/* Define the union U_CUTOUT_WIN0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win0_vmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win0_vmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN0_V;

/* Define the union U_CUTOUT_WIN1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win1_hmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win1_hmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN1_H;

/* Define the union U_CUTOUT_WIN1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win1_vmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win1_vmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN1_V;

/* Define the union U_CUTOUT_WIN2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win2_hmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win2_hmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN2_H;

/* Define the union U_CUTOUT_WIN2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win2_vmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win2_vmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN2_V;

/* Define the union U_CUTOUT_WIN3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win3_hmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win3_hmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN3_H;

/* Define the union U_CUTOUT_WIN3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cutout_win3_vmax      : 16  ; /* [15..0]  */
        unsigned int    cutout_win3_vmin      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CUTOUT_WIN3_V;

//==============================================================================
/* Define the global struct */
typedef struct
{
    U_GLOBAL_CTRL                   GLOBAL_CTRL                      ; /* 0x0 */
    U_INPUT0_PIC_SIZE               INPUT0_PIC_SIZE                  ; /* 0x4 */
    U_INPUT1_PIC_SIZE               INPUT1_PIC_SIZE                  ; /* 0x8 */
    U_LUT_CTRL                      LUT_CTRL                         ; /* 0xc */
    U_GAIN_CTRL                     GAIN_CTRL                        ; /* 0x10 */
    U_POSTERIZE_CTRL                POSTERIZE_CTRL                   ; /* 0x14 */
    U_THRESHOLD_CTRL                THRESHOLD_CTRL                   ; /* 0x18 */
    U_CUTOUT_CTRL                   CUTOUT_CTRL                      ; /* 0x1c */
    U_LUT_WIN0_H                    LUT_WIN0_H                       ; /* 0x20 */
    U_LUT_WIN0_V                    LUT_WIN0_V                       ; /* 0x24 */
    U_LUT_WIN1_H                    LUT_WIN1_H                       ; /* 0x28 */
    U_LUT_WIN1_V                    LUT_WIN1_V                       ; /* 0x2c */
    U_LUT_WIN2_H                    LUT_WIN2_H                       ; /* 0x30 */
    U_LUT_WIN2_V                    LUT_WIN2_V                       ; /* 0x34 */
    U_LUT_WIN3_H                    LUT_WIN3_H                       ; /* 0x38 */
    U_LUT_WIN3_V                    LUT_WIN3_V                       ; /* 0x3c */
    U_GAIN0_VALUE                   GAIN0_VALUE                      ; /* 0x40 */
    U_GAIN1_VALUE                   GAIN1_VALUE                      ; /* 0x44 */
    U_GAIN2_VALUE                   GAIN2_VALUE                      ; /* 0x48 */
    U_GAIN3_VALUE                   GAIN3_VALUE                      ; /* 0x4c */
    U_GAIN4_VALUE                   GAIN4_VALUE                      ; /* 0x50 */
    U_GAIN5_VALUE                   GAIN5_VALUE                      ; /* 0x54 */
    U_GAIN6_VALUE                   GAIN6_VALUE                      ; /* 0x58 */
    U_GAIN7_VALUE                   GAIN7_VALUE                      ; /* 0x5c */
    U_GAIN_WIN0_H                   GAIN_WIN0_H                      ; /* 0x60 */
    U_GAIN_WIN0_V                   GAIN_WIN0_V                      ; /* 0x64 */
    U_GAIN_WIN1_H                   GAIN_WIN1_H                      ; /* 0x68 */
    U_GAIN_WIN1_V                   GAIN_WIN1_V                      ; /* 0x6c */
    U_GAIN_WIN2_H                   GAIN_WIN2_H                      ; /* 0x70 */
    U_GAIN_WIN2_V                   GAIN_WIN2_V                      ; /* 0x74 */
    U_GAIN_WIN3_H                   GAIN_WIN3_H                      ; /* 0x78 */
    U_GAIN_WIN3_V                   GAIN_WIN3_V                      ; /* 0x7c */
    U_POSTERIZE0_VALUE              POSTERIZE0_VALUE                 ; /* 0x80 */
    U_POSTERIZE1_VALUE              POSTERIZE1_VALUE                 ; /* 0x84 */
    U_POSTERIZE2_VALUE              POSTERIZE2_VALUE                 ; /* 0x88 */
    U_POSTERIZE3_VALUE              POSTERIZE3_VALUE                 ; /* 0x8c */
    U_POSTERIZE_WIN0_H              POSTERIZE_WIN0_H                 ; /* 0x90 */
    U_POSTERIZE_WIN0_V              POSTERIZE_WIN0_V                 ; /* 0x94 */
    U_POSTERIZE_WIN1_H              POSTERIZE_WIN1_H                 ; /* 0x98 */
    U_POSTERIZE_WIN1_V              POSTERIZE_WIN1_V                 ; /* 0x9c */
    U_POSTERIZE_WIN2_H              POSTERIZE_WIN2_H                 ; /* 0xa0 */
    U_POSTERIZE_WIN2_V              POSTERIZE_WIN2_V                 ; /* 0xa4 */
    U_POSTERIZE_WIN3_H              POSTERIZE_WIN3_H                 ; /* 0xa8 */
    U_POSTERIZE_WIN3_V              POSTERIZE_WIN3_V                 ; /* 0xac */
    U_THRESHOLD0_VALUE              THRESHOLD0_VALUE                 ; /* 0xb0 */
    U_THRESHOLD1_VALUE              THRESHOLD1_VALUE                 ; /* 0xb4 */
    U_THRESHOLD2_VALUE              THRESHOLD2_VALUE                 ; /* 0xb8 */
    U_THRESHOLD3_VALUE              THRESHOLD3_VALUE                 ; /* 0xbc */
    U_THRESHOLD_WIN0_H              THRESHOLD_WIN0_H                 ; /* 0xc0 */
    U_THRESHOLD_WIN0_V              THRESHOLD_WIN0_V                 ; /* 0xc4 */
    U_THRESHOLD_WIN1_H              THRESHOLD_WIN1_H                 ; /* 0xc8 */
    U_THRESHOLD_WIN1_V              THRESHOLD_WIN1_V                 ; /* 0xcc */
    U_THRESHOLD_WIN2_H              THRESHOLD_WIN2_H                 ; /* 0xd0 */
    U_THRESHOLD_WIN2_V              THRESHOLD_WIN2_V                 ; /* 0xd4 */
    U_THRESHOLD_WIN3_H              THRESHOLD_WIN3_H                 ; /* 0xd8 */
    U_THRESHOLD_WIN3_V              THRESHOLD_WIN3_V                 ; /* 0xdc */
    U_CUTOUT0_R                     CUTOUT0_R                        ; /* 0xe0 */
    U_CUTOUT0_G                     CUTOUT0_G                        ; /* 0xe4 */
    U_CUTOUT0_B                     CUTOUT0_B                        ; /* 0xe8 */
    U_CUTOUT1_R                     CUTOUT1_R                        ; /* 0xec */
    U_CUTOUT1_G                     CUTOUT1_G                        ; /* 0xf0 */
    U_CUTOUT1_B                     CUTOUT1_B                        ; /* 0xf4 */
    U_CUTOUT2_R                     CUTOUT2_R                        ; /* 0xf8 */
    U_CUTOUT2_G                     CUTOUT2_G                        ; /* 0xfc */
    U_CUTOUT2_B                     CUTOUT2_B                        ; /* 0x100 */
    U_CUTOUT3_R                     CUTOUT3_R                        ; /* 0x104 */
    U_CUTOUT3_G                     CUTOUT3_G                        ; /* 0x108 */
    U_CUTOUT3_B                     CUTOUT3_B                        ; /* 0x10c */
    U_CUTOUT_WIN0_H                 CUTOUT_WIN0_H                    ; /* 0x110 */
    U_CUTOUT_WIN0_V                 CUTOUT_WIN0_V                    ; /* 0x114 */
    U_CUTOUT_WIN1_H                 CUTOUT_WIN1_H                    ; /* 0x118 */
    U_CUTOUT_WIN1_V                 CUTOUT_WIN1_V                    ; /* 0x11c */
    U_CUTOUT_WIN2_H                 CUTOUT_WIN2_H                    ; /* 0x120 */
    U_CUTOUT_WIN2_V                 CUTOUT_WIN2_V                    ; /* 0x124 */
    U_CUTOUT_WIN3_H                 CUTOUT_WIN3_H                    ; /* 0x128 */
    U_CUTOUT_WIN3_V                 CUTOUT_WIN3_V                    ; /* 0x12c */
    unsigned int                    reserved[180]                    ; /* 0x130~0x39c */
    unsigned int                    LUT_REMAPPING_Y_OR_R[256]               ; /* 0x400~0x7ff */
    unsigned int                    LUT_REMAPPING_U_OR_G[256]               ; /* 0x800~0xBff */
    unsigned int                    LUT_REMAPPING_V_OR_B[256]               ; /* 0xC00~0xfff */
} S_VPC_LUT_NMANAGER_REGS_TYPE;

#endif /* VPC_PIPE_MILAN_LUT_NMANAGER_REG_C_UNION_DEFINE_H */
