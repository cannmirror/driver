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

#ifndef VPC_PIPE_MILAN_HISTOGRAM_NMANAGER_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_HISTOGRAM_NMANAGER_REG_C_UNION_DEFINE_H

/* Define the union U_AREA0_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM;

/* Define the union U_AREA_HISTOGRAM_Y1Y2_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_y2_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_y2_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_y1_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_y1_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_Y1Y2_AREA;

/* Define the union U_AREA_HISTOGRAM_Y3Y4_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_y4_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_y4_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_y3_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_y3_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_Y3Y4_AREA;

/* Define the union U_AREA_HISTOGRAM_U1U2_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_u2_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_u2_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_u1_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_u1_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_U1U2_AREA;

/* Define the union U_AREA_HISTOGRAM_U3U4_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_u4_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_u4_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_u3_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_u3_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_U3U4_AREA;

/* Define the union U_AREA_HISTOGRAM_V1V2_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_v2_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_v2_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_v1_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_v1_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_V1V2_AREA;

/* Define the union U_AREA_HISTOGRAM_V3V4_AREA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_v4_low      : 8   ; /* [7..0]  */
        unsigned int    histogram_v4_high     : 8   ; /* [15..8]  */
        unsigned int    histogram_v3_low      : 8   ; /* [23..16]  */
        unsigned int    histogram_v3_high     : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA_HISTOGRAM_V3V4_AREA;

/* Define the union U_AREA0_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA0_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA0_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA0_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA0_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_U1_CNT;

/* Define the union U_AREA0_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_U2_CNT;

/* Define the union U_AREA0_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_U3_CNT;

/* Define the union U_AREA0_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_U4_CNT;

/* Define the union U_AREA0_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_V1_CNT;

/* Define the union U_AREA0_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_V2_CNT;

/* Define the union U_AREA0_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_V3_CNT;

/* Define the union U_AREA0_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_HISTOGRAM_V4_CNT;

/* Define the union U_AREA0_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area0_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA0_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA0_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA0_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area0_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA0_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA0_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA0_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area0_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA0_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA0_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_hmin            : 16  ; /* [15..0]  */
        unsigned int    area0_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_H;

/* Define the union U_AREA0_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area0_vmin            : 16  ; /* [15..0]  */
        unsigned int    area0_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA0_V;

/* Define the union U_HISTOGRAM_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_en          : 1   ; /* [0]  */
        unsigned int    histogram_mode        : 2   ; /* [2..1]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HISTOGRAM_MODE;

// DVD版本使用
typedef union {
    struct {
        unsigned int    histogram_en          : 1   ; /* [0] */
        unsigned int    histogram_mode        : 2   ; /* [2..1] */
        unsigned int    histogram_maxmin_en   : 1   ; /* [3] */
        unsigned int    reserved_0            : 12  ; /* [15..4] */
        unsigned int    histogram_speed_mode  : 1   ; /* [16] */
        unsigned int    reserved_1            : 15  ; /* [31..17] */
    } bits;
    unsigned int    u32;
} U_HISTOGRAM_MODE_V2;

/* Define the union U_HISTOGRAM_CLEAR_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    histogram_clr         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HISTOGRAM_CLEAR_MODE;

/* Define the union U_FRAME_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int frame_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_FRAME_SUMSTATE_Y_CNT_LOW;
/* Define the union U_FRAME_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    frame_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_FRAME_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_FRAME_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int frame_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_FRAME_SUMSTATE_U_CNT_LOW;
/* Define the union U_FRAME_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    frame_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_FRAME_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_FRAME_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int frame_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_FRAME_SUMSTATE_V_CNT_LOW;
/* Define the union U_FRAME_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    frame_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_FRAME_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_STITCH_AREA_MASK0_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask0          : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask1          : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask2          : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask3          : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK0_3;

/* Define the union U_STITCH_AREA_MASK4_7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask4          : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask5          : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask6          : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask7          : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK4_7;

/* Define the union U_STITCH_AREA_MASK8_11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask8          : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask9          : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask10         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask11         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK8_11;

/* Define the union U_STITCH_AREA_MASK12_15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask12         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask13         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask14         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask15         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK12_15;

/* Define the union U_STITCH_AREA_MASK16_19 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask16         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask17         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask18         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask19         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK16_19;

/* Define the union U_STITCH_AREA_MASK20_23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask20         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask21         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask22         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask23         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK20_23;

/* Define the union U_STITCH_AREA_MASK24_27 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask24         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask25         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask26         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask27         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK24_27;

/* Define the union U_STITCH_AREA_MASK28_31 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask28         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask29         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask30         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask31         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK28_31;

/* Define the union U_STITCH_AREA_MASK32_35 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_mask32         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 2   ; /* [7..6]  */
        unsigned int    stitch_mask33         : 6   ; /* [13..8]  */
        unsigned int    reserved_1            : 2   ; /* [15..14]  */
        unsigned int    stitch_mask34         : 6   ; /* [21..16]  */
        unsigned int    reserved_2            : 2   ; /* [23..22]  */
        unsigned int    stitch_mask35         : 6   ; /* [29..24]  */
        unsigned int    reserved_3            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_MASK32_35;

/* Define the union U_STITCH_AREA_AVERAGEDATA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stitch_v_average      : 8   ; /* [7..0]  */
        unsigned int    stitch_u_average      : 8   ; /* [15..8]  */
        unsigned int    stitch_y_average      : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_STITCH_AREA_AVERAGEDATA;

/* Define the union U_AREA1_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM;

/* Define the union U_AREA1_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA1_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA1_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA1_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA1_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_U1_CNT;

/* Define the union U_AREA1_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_U2_CNT;

/* Define the union U_AREA1_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_U3_CNT;

/* Define the union U_AREA1_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_U4_CNT;

/* Define the union U_AREA1_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_V1_CNT;

/* Define the union U_AREA1_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_V2_CNT;

/* Define the union U_AREA1_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_V3_CNT;

/* Define the union U_AREA1_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_HISTOGRAM_V4_CNT;

/* Define the union U_AREA1_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area1_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA1_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA1_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA1_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area1_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA1_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA1_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA1_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area1_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA1_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA1_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_hmin            : 16  ; /* [15..0]  */
        unsigned int    area1_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_H;

/* Define the union U_AREA1_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area1_vmin            : 16  ; /* [15..0]  */
        unsigned int    area1_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA1_V;

/* Define the union U_AREA2_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM;

/* Define the union U_AREA2_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA2_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA2_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA2_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA2_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_U1_CNT;

/* Define the union U_AREA2_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_U2_CNT;

/* Define the union U_AREA2_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_U3_CNT;

/* Define the union U_AREA2_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_U4_CNT;

/* Define the union U_AREA2_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_V1_CNT;

/* Define the union U_AREA2_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_V2_CNT;

/* Define the union U_AREA2_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_V3_CNT;

/* Define the union U_AREA2_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_HISTOGRAM_V4_CNT;

/* Define the union U_AREA2_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area2_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA2_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA2_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA2_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area2_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA2_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA2_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA2_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area2_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA2_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA2_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_hmin            : 16  ; /* [15..0]  */
        unsigned int    area2_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_H;

/* Define the union U_AREA2_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area2_vmin            : 16  ; /* [15..0]  */
        unsigned int    area2_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA2_V;

/* Define the union U_AREA3_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM;

/* Define the union U_AREA3_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA3_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA3_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA3_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA3_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_U1_CNT;

/* Define the union U_AREA3_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_U2_CNT;

/* Define the union U_AREA3_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_U3_CNT;

/* Define the union U_AREA3_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_U4_CNT;

/* Define the union U_AREA3_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_V1_CNT;

/* Define the union U_AREA3_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_V2_CNT;

/* Define the union U_AREA3_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_V3_CNT;

/* Define the union U_AREA3_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_HISTOGRAM_V4_CNT;

/* Define the union U_AREA3_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area3_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA3_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA3_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA3_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area3_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA3_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA3_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA3_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area3_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA3_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA3_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_hmin            : 16  ; /* [15..0]  */
        unsigned int    area3_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_H;

/* Define the union U_AREA3_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area3_vmin            : 16  ; /* [15..0]  */
        unsigned int    area3_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA3_V;

/* Define the union U_AREA4_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM;

/* Define the union U_AREA4_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA4_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA4_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA4_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA4_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_U1_CNT;

/* Define the union U_AREA4_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_U2_CNT;

/* Define the union U_AREA4_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_U3_CNT;

/* Define the union U_AREA4_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_U4_CNT;

/* Define the union U_AREA4_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_V1_CNT;

/* Define the union U_AREA4_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_V2_CNT;

/* Define the union U_AREA4_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_V3_CNT;

/* Define the union U_AREA4_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_HISTOGRAM_V4_CNT;

/* Define the union U_AREA4_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area4_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA4_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA4_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA4_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area4_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA4_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA4_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA4_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area4_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA4_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA4_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA4_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_hmin            : 16  ; /* [15..0]  */
        unsigned int    area4_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_H;

/* Define the union U_AREA4_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area4_vmin            : 16  ; /* [15..0]  */
        unsigned int    area4_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA4_V;

/* Define the union U_AREA5_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM;

/* Define the union U_AREA5_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA5_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA5_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA5_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA5_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_U1_CNT;

/* Define the union U_AREA5_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_U2_CNT;

/* Define the union U_AREA5_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_U3_CNT;

/* Define the union U_AREA5_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_U4_CNT;

/* Define the union U_AREA5_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_V1_CNT;

/* Define the union U_AREA5_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_V2_CNT;

/* Define the union U_AREA5_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_V3_CNT;

/* Define the union U_AREA5_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_HISTOGRAM_V4_CNT;

/* Define the union U_AREA5_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area5_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA5_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA5_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA5_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area5_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA5_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA5_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA5_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area5_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA5_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA5_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA5_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_hmin            : 16  ; /* [15..0]  */
        unsigned int    area5_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_H;

/* Define the union U_AREA5_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area5_vmin            : 16  ; /* [15..0]  */
        unsigned int    area5_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA5_V;

/* Define the union U_AREA6_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM;

/* Define the union U_AREA6_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA6_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA6_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA6_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA6_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_U1_CNT;

/* Define the union U_AREA6_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_U2_CNT;

/* Define the union U_AREA6_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_U3_CNT;

/* Define the union U_AREA6_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_U4_CNT;

/* Define the union U_AREA6_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_V1_CNT;

/* Define the union U_AREA6_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_V2_CNT;

/* Define the union U_AREA6_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_V3_CNT;

/* Define the union U_AREA6_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_HISTOGRAM_V4_CNT;

/* Define the union U_AREA6_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area6_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA6_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA6_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA6_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area6_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA6_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA6_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA6_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area6_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA6_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA6_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA6_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_hmin            : 16  ; /* [15..0]  */
        unsigned int    area6_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_H;

/* Define the union U_AREA6_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area6_vmin            : 16  ; /* [15..0]  */
        unsigned int    area6_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA6_V;

/* Define the union U_AREA7_HISTOGRAM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_cnt             : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM;

/* Define the union U_AREA7_HISTOGRAM_Y1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_y1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_Y1_CNT;

/* Define the union U_AREA7_HISTOGRAM_Y2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_y2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_Y2_CNT;

/* Define the union U_AREA7_HISTOGRAM_Y3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_y3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_Y3_CNT;

/* Define the union U_AREA7_HISTOGRAM_Y4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_y4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_Y4_CNT;

/* Define the union U_AREA7_HISTOGRAM_U1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_u1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_U1_CNT;

/* Define the union U_AREA7_HISTOGRAM_U2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_u2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_U2_CNT;

/* Define the union U_AREA7_HISTOGRAM_U3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_u3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_U3_CNT;

/* Define the union U_AREA7_HISTOGRAM_U4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_u4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_U4_CNT;

/* Define the union U_AREA7_HISTOGRAM_V1_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_v1_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_V1_CNT;

/* Define the union U_AREA7_HISTOGRAM_V2_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_v2_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_V2_CNT;

/* Define the union U_AREA7_HISTOGRAM_V3_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_v3_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_V3_CNT;

/* Define the union U_AREA7_HISTOGRAM_V4_CNT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_histogram_v4_cnt : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_HISTOGRAM_V4_CNT;

/* Define the union U_AREA7_SUMSTATE_Y_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area7_sumstate_y_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA7_SUMSTATE_Y_CNT_LOW;
/* Define the union U_AREA7_SUMSTATE_Y_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_sumstate_y_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_SUMSTATE_Y_CNT_HIGHT;

/* Define the union U_AREA7_SUMSTATE_U_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area7_sumstate_u_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA7_SUMSTATE_U_CNT_LOW;
/* Define the union U_AREA7_SUMSTATE_U_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_sumstate_u_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_SUMSTATE_U_CNT_HIGHT;

/* Define the union U_AREA7_SUMSTATE_V_CNT_LOW */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int area7_sumstate_v_cnt_low : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_AREA7_SUMSTATE_V_CNT_LOW;
/* Define the union U_AREA7_SUMSTATE_V_CNT_HIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_sumstate_v_cnt_hight : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_SUMSTATE_V_CNT_HIGHT;

/* Define the union U_AREA7_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_hmin            : 16  ; /* [15..0]  */
        unsigned int    area7_hmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_H;

/* Define the union U_AREA7_V */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    area7_vmin            : 16  ; /* [15..0]  */
        unsigned int    area7_vmax            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_AREA7_V;

/* Define the global struct */
typedef struct
{
    U_AREA0_HISTOGRAM               AREA0_HISTOGRAM[768]             ; /* 0x0~0xbfc */
    U_AREA_HISTOGRAM_Y1Y2_AREA      AREA_HISTOGRAM_Y1Y2_AREA         ; /* 0xc00 */
    U_AREA_HISTOGRAM_Y3Y4_AREA      AREA_HISTOGRAM_Y3Y4_AREA         ; /* 0xc04 */
    U_AREA_HISTOGRAM_U1U2_AREA      AREA_HISTOGRAM_U1U2_AREA         ; /* 0xc08 */
    U_AREA_HISTOGRAM_U3U4_AREA      AREA_HISTOGRAM_U3U4_AREA         ; /* 0xc0c */
    U_AREA_HISTOGRAM_V1V2_AREA      AREA_HISTOGRAM_V1V2_AREA         ; /* 0xc10 */
    U_AREA_HISTOGRAM_V3V4_AREA      AREA_HISTOGRAM_V3V4_AREA         ; /* 0xc14 */
    U_AREA0_HISTOGRAM_Y1_CNT        AREA0_HISTOGRAM_Y1_CNT           ; /* 0xc18 */
    U_AREA0_HISTOGRAM_Y2_CNT        AREA0_HISTOGRAM_Y2_CNT           ; /* 0xc1c */
    U_AREA0_HISTOGRAM_Y3_CNT        AREA0_HISTOGRAM_Y3_CNT           ; /* 0xc20 */
    U_AREA0_HISTOGRAM_Y4_CNT        AREA0_HISTOGRAM_Y4_CNT           ; /* 0xc24 */
    U_AREA0_HISTOGRAM_U1_CNT        AREA0_HISTOGRAM_U1_CNT           ; /* 0xc28 */
    U_AREA0_HISTOGRAM_U2_CNT        AREA0_HISTOGRAM_U2_CNT           ; /* 0xc2c */
    U_AREA0_HISTOGRAM_U3_CNT        AREA0_HISTOGRAM_U3_CNT           ; /* 0xc30 */
    U_AREA0_HISTOGRAM_U4_CNT        AREA0_HISTOGRAM_U4_CNT           ; /* 0xc34 */
    U_AREA0_HISTOGRAM_V1_CNT        AREA0_HISTOGRAM_V1_CNT           ; /* 0xc38 */
    U_AREA0_HISTOGRAM_V2_CNT        AREA0_HISTOGRAM_V2_CNT           ; /* 0xc3c */
    U_AREA0_HISTOGRAM_V3_CNT        AREA0_HISTOGRAM_V3_CNT           ; /* 0xc40 */
    U_AREA0_HISTOGRAM_V4_CNT        AREA0_HISTOGRAM_V4_CNT           ; /* 0xc44 */
    U_AREA0_SUMSTATE_Y_CNT_LOW      AREA0_SUMSTATE_Y_CNT_LOW         ; /* 0xc48 */
    U_AREA0_SUMSTATE_Y_CNT_HIGHT    AREA0_SUMSTATE_Y_CNT_HIGHT       ; /* 0xc4c */
    U_AREA0_SUMSTATE_U_CNT_LOW      AREA0_SUMSTATE_U_CNT_LOW         ; /* 0xc50 */
    U_AREA0_SUMSTATE_U_CNT_HIGHT    AREA0_SUMSTATE_U_CNT_HIGHT       ; /* 0xc54 */
    U_AREA0_SUMSTATE_V_CNT_LOW      AREA0_SUMSTATE_V_CNT_LOW         ; /* 0xc58 */
    U_AREA0_SUMSTATE_V_CNT_HIGHT    AREA0_SUMSTATE_V_CNT_HIGHT       ; /* 0xc5c */
    U_AREA0_H                       AREA0_H                          ; /* 0xc60 */
    U_AREA0_V                       AREA0_V                          ; /* 0xc64 */
    unsigned int                    reserved_0[38]                   ; /* 0xc68~0xcfc */
    U_HISTOGRAM_MODE                HISTOGRAM_MODE                   ; /* 0xd00 */
    U_HISTOGRAM_CLEAR_MODE          HISTOGRAM_CLEAR_MODE             ; /* 0xd04 */
    unsigned int                    reserved_1[2]                    ; /* 0xd08~0xd0c */
    U_FRAME_SUMSTATE_Y_CNT_LOW      FRAME_SUMSTATE_Y_CNT_LOW         ; /* 0xd10 */
    U_FRAME_SUMSTATE_Y_CNT_HIGHT    FRAME_SUMSTATE_Y_CNT_HIGHT       ; /* 0xd14 */
    U_FRAME_SUMSTATE_U_CNT_LOW      FRAME_SUMSTATE_U_CNT_LOW         ; /* 0xd18 */
    U_FRAME_SUMSTATE_U_CNT_HIGHT    FRAME_SUMSTATE_U_CNT_HIGHT       ; /* 0xd1c */
    U_FRAME_SUMSTATE_V_CNT_LOW      FRAME_SUMSTATE_V_CNT_LOW         ; /* 0xd20 */
    U_FRAME_SUMSTATE_V_CNT_HIGHT    FRAME_SUMSTATE_V_CNT_HIGHT       ; /* 0xd24 */
    unsigned int                    reserved_2[6]                    ; /* 0xd28~0xd3c */
    U_STITCH_AREA_MASK0_3           STITCH_AREA_MASK0_3              ; /* 0xd40 */
    U_STITCH_AREA_MASK4_7           STITCH_AREA_MASK4_7              ; /* 0xd44 */
    U_STITCH_AREA_MASK8_11          STITCH_AREA_MASK8_11             ; /* 0xd48 */
    U_STITCH_AREA_MASK12_15         STITCH_AREA_MASK12_15            ; /* 0xd4c */
    U_STITCH_AREA_MASK16_19         STITCH_AREA_MASK16_19            ; /* 0xd50 */
    U_STITCH_AREA_MASK20_23         STITCH_AREA_MASK20_23            ; /* 0xd54 */
    U_STITCH_AREA_MASK24_27         STITCH_AREA_MASK24_27            ; /* 0xd58 */
    U_STITCH_AREA_MASK28_31         STITCH_AREA_MASK28_31            ; /* 0xd5c */
    U_STITCH_AREA_MASK32_35         STITCH_AREA_MASK32_35            ; /* 0xd60 */
    unsigned int                    reserved_3[39]                   ; /* 0xd64~0xdfc */
    U_STITCH_AREA_AVERAGEDATA       STITCH_AREA_AVERAGEDATA[36]      ; /* 0xe00~0xe8c */
    unsigned int                    reserved_4[92]                   ; /* 0xe90~0xffc */
    U_AREA1_HISTOGRAM               AREA1_HISTOGRAM[768]             ; /* 0x1000~0x1bfc */
    unsigned int                    reserved_5[6]                    ; /* 0x1c00~0x1c14 */
    U_AREA1_HISTOGRAM_Y1_CNT        AREA1_HISTOGRAM_Y1_CNT           ; /* 0x1c18 */
    U_AREA1_HISTOGRAM_Y2_CNT        AREA1_HISTOGRAM_Y2_CNT           ; /* 0x1c1c */
    U_AREA1_HISTOGRAM_Y3_CNT        AREA1_HISTOGRAM_Y3_CNT           ; /* 0x1c20 */
    U_AREA1_HISTOGRAM_Y4_CNT        AREA1_HISTOGRAM_Y4_CNT           ; /* 0x1c24 */
    U_AREA1_HISTOGRAM_U1_CNT        AREA1_HISTOGRAM_U1_CNT           ; /* 0x1c28 */
    U_AREA1_HISTOGRAM_U2_CNT        AREA1_HISTOGRAM_U2_CNT           ; /* 0x1c2c */
    U_AREA1_HISTOGRAM_U3_CNT        AREA1_HISTOGRAM_U3_CNT           ; /* 0x1c30 */
    U_AREA1_HISTOGRAM_U4_CNT        AREA1_HISTOGRAM_U4_CNT           ; /* 0x1c34 */
    U_AREA1_HISTOGRAM_V1_CNT        AREA1_HISTOGRAM_V1_CNT           ; /* 0x1c38 */
    U_AREA1_HISTOGRAM_V2_CNT        AREA1_HISTOGRAM_V2_CNT           ; /* 0x1c3c */
    U_AREA1_HISTOGRAM_V3_CNT        AREA1_HISTOGRAM_V3_CNT           ; /* 0x1c40 */
    U_AREA1_HISTOGRAM_V4_CNT        AREA1_HISTOGRAM_V4_CNT           ; /* 0x1c44 */
    U_AREA1_SUMSTATE_Y_CNT_LOW      AREA1_SUMSTATE_Y_CNT_LOW         ; /* 0x1c48 */
    U_AREA1_SUMSTATE_Y_CNT_HIGHT    AREA1_SUMSTATE_Y_CNT_HIGHT       ; /* 0x1c4c */
    U_AREA1_SUMSTATE_U_CNT_LOW      AREA1_SUMSTATE_U_CNT_LOW         ; /* 0x1c50 */
    U_AREA1_SUMSTATE_U_CNT_HIGHT    AREA1_SUMSTATE_U_CNT_HIGHT       ; /* 0x1c54 */
    U_AREA1_SUMSTATE_V_CNT_LOW      AREA1_SUMSTATE_V_CNT_LOW         ; /* 0x1c58 */
    U_AREA1_SUMSTATE_V_CNT_HIGHT    AREA1_SUMSTATE_V_CNT_HIGHT       ; /* 0x1c5c */
    U_AREA1_H                       AREA1_H                          ; /* 0x1c60 */
    U_AREA1_V                       AREA1_V                          ; /* 0x1c64 */
    unsigned int                    reserved_6[230]                  ; /* 0x1c68~0x1ffc */
    U_AREA2_HISTOGRAM               AREA2_HISTOGRAM[768]             ; /* 0x2000~0x2bfc */
    unsigned int                    reserved_7[6]                    ; /* 0x2c00~0x2c14 */
    U_AREA2_HISTOGRAM_Y1_CNT        AREA2_HISTOGRAM_Y1_CNT           ; /* 0x2c18 */
    U_AREA2_HISTOGRAM_Y2_CNT        AREA2_HISTOGRAM_Y2_CNT           ; /* 0x2c1c */
    U_AREA2_HISTOGRAM_Y3_CNT        AREA2_HISTOGRAM_Y3_CNT           ; /* 0x2c20 */
    U_AREA2_HISTOGRAM_Y4_CNT        AREA2_HISTOGRAM_Y4_CNT           ; /* 0x2c24 */
    U_AREA2_HISTOGRAM_U1_CNT        AREA2_HISTOGRAM_U1_CNT           ; /* 0x2c28 */
    U_AREA2_HISTOGRAM_U2_CNT        AREA2_HISTOGRAM_U2_CNT           ; /* 0x2c2c */
    U_AREA2_HISTOGRAM_U3_CNT        AREA2_HISTOGRAM_U3_CNT           ; /* 0x2c30 */
    U_AREA2_HISTOGRAM_U4_CNT        AREA2_HISTOGRAM_U4_CNT           ; /* 0x2c34 */
    U_AREA2_HISTOGRAM_V1_CNT        AREA2_HISTOGRAM_V1_CNT           ; /* 0x2c38 */
    U_AREA2_HISTOGRAM_V2_CNT        AREA2_HISTOGRAM_V2_CNT           ; /* 0x2c3c */
    U_AREA2_HISTOGRAM_V3_CNT        AREA2_HISTOGRAM_V3_CNT           ; /* 0x2c40 */
    U_AREA2_HISTOGRAM_V4_CNT        AREA2_HISTOGRAM_V4_CNT           ; /* 0x2c44 */
    U_AREA2_SUMSTATE_Y_CNT_LOW      AREA2_SUMSTATE_Y_CNT_LOW         ; /* 0x2c48 */
    U_AREA2_SUMSTATE_Y_CNT_HIGHT    AREA2_SUMSTATE_Y_CNT_HIGHT       ; /* 0x2c4c */
    U_AREA2_SUMSTATE_U_CNT_LOW      AREA2_SUMSTATE_U_CNT_LOW         ; /* 0x2c50 */
    U_AREA2_SUMSTATE_U_CNT_HIGHT    AREA2_SUMSTATE_U_CNT_HIGHT       ; /* 0x2c54 */
    U_AREA2_SUMSTATE_V_CNT_LOW      AREA2_SUMSTATE_V_CNT_LOW         ; /* 0x2c58 */
    U_AREA2_SUMSTATE_V_CNT_HIGHT    AREA2_SUMSTATE_V_CNT_HIGHT       ; /* 0x2c5c */
    U_AREA2_H                       AREA2_H                          ; /* 0x2c60 */
    U_AREA2_V                       AREA2_V                          ; /* 0x2c64 */
    unsigned int                    reserved_8[230]                  ; /* 0x2c68~0x2ffc */
    U_AREA3_HISTOGRAM               AREA3_HISTOGRAM[768]             ; /* 0x3000~0x3bfc */
    unsigned int                    reserved_9[6]                    ; /* 0x3c00~0x3c14 */
    U_AREA3_HISTOGRAM_Y1_CNT        AREA3_HISTOGRAM_Y1_CNT           ; /* 0x3c18 */
    U_AREA3_HISTOGRAM_Y2_CNT        AREA3_HISTOGRAM_Y2_CNT           ; /* 0x3c1c */
    U_AREA3_HISTOGRAM_Y3_CNT        AREA3_HISTOGRAM_Y3_CNT           ; /* 0x3c20 */
    U_AREA3_HISTOGRAM_Y4_CNT        AREA3_HISTOGRAM_Y4_CNT           ; /* 0x3c24 */
    U_AREA3_HISTOGRAM_U1_CNT        AREA3_HISTOGRAM_U1_CNT           ; /* 0x3c28 */
    U_AREA3_HISTOGRAM_U2_CNT        AREA3_HISTOGRAM_U2_CNT           ; /* 0x3c2c */
    U_AREA3_HISTOGRAM_U3_CNT        AREA3_HISTOGRAM_U3_CNT           ; /* 0x3c30 */
    U_AREA3_HISTOGRAM_U4_CNT        AREA3_HISTOGRAM_U4_CNT           ; /* 0x3c34 */
    U_AREA3_HISTOGRAM_V1_CNT        AREA3_HISTOGRAM_V1_CNT           ; /* 0x3c38 */
    U_AREA3_HISTOGRAM_V2_CNT        AREA3_HISTOGRAM_V2_CNT           ; /* 0x3c3c */
    U_AREA3_HISTOGRAM_V3_CNT        AREA3_HISTOGRAM_V3_CNT           ; /* 0x3c40 */
    U_AREA3_HISTOGRAM_V4_CNT        AREA3_HISTOGRAM_V4_CNT           ; /* 0x3c44 */
    U_AREA3_SUMSTATE_Y_CNT_LOW      AREA3_SUMSTATE_Y_CNT_LOW         ; /* 0x3c48 */
    U_AREA3_SUMSTATE_Y_CNT_HIGHT    AREA3_SUMSTATE_Y_CNT_HIGHT       ; /* 0x3c4c */
    U_AREA3_SUMSTATE_U_CNT_LOW      AREA3_SUMSTATE_U_CNT_LOW         ; /* 0x3c50 */
    U_AREA3_SUMSTATE_U_CNT_HIGHT    AREA3_SUMSTATE_U_CNT_HIGHT       ; /* 0x3c54 */
    U_AREA3_SUMSTATE_V_CNT_LOW      AREA3_SUMSTATE_V_CNT_LOW         ; /* 0x3c58 */
    U_AREA3_SUMSTATE_V_CNT_HIGHT    AREA3_SUMSTATE_V_CNT_HIGHT       ; /* 0x3c5c */
    U_AREA3_H                       AREA3_H                          ; /* 0x3c60 */
    U_AREA3_V                       AREA3_V                          ; /* 0x3c64 */
    unsigned int                    reserved_10[230]                 ; /* 0x3c68~0x3ffc */
    U_AREA4_HISTOGRAM               AREA4_HISTOGRAM[768]             ; /* 0x4000~0x4bfc */
    unsigned int                    reserved_11[6]                   ; /* 0x4c00~0x4c14 */
    U_AREA4_HISTOGRAM_Y1_CNT        AREA4_HISTOGRAM_Y1_CNT           ; /* 0x4c18 */
    U_AREA4_HISTOGRAM_Y2_CNT        AREA4_HISTOGRAM_Y2_CNT           ; /* 0x4c1c */
    U_AREA4_HISTOGRAM_Y3_CNT        AREA4_HISTOGRAM_Y3_CNT           ; /* 0x4c20 */
    U_AREA4_HISTOGRAM_Y4_CNT        AREA4_HISTOGRAM_Y4_CNT           ; /* 0x4c24 */
    U_AREA4_HISTOGRAM_U1_CNT        AREA4_HISTOGRAM_U1_CNT           ; /* 0x4c28 */
    U_AREA4_HISTOGRAM_U2_CNT        AREA4_HISTOGRAM_U2_CNT           ; /* 0x4c2c */
    U_AREA4_HISTOGRAM_U3_CNT        AREA4_HISTOGRAM_U3_CNT           ; /* 0x4c30 */
    U_AREA4_HISTOGRAM_U4_CNT        AREA4_HISTOGRAM_U4_CNT           ; /* 0x4c34 */
    U_AREA4_HISTOGRAM_V1_CNT        AREA4_HISTOGRAM_V1_CNT           ; /* 0x4c38 */
    U_AREA4_HISTOGRAM_V2_CNT        AREA4_HISTOGRAM_V2_CNT           ; /* 0x4c3c */
    U_AREA4_HISTOGRAM_V3_CNT        AREA4_HISTOGRAM_V3_CNT           ; /* 0x4c40 */
    U_AREA4_HISTOGRAM_V4_CNT        AREA4_HISTOGRAM_V4_CNT           ; /* 0x4c44 */
    U_AREA4_SUMSTATE_Y_CNT_LOW      AREA4_SUMSTATE_Y_CNT_LOW         ; /* 0x4c48 */
    U_AREA4_SUMSTATE_Y_CNT_HIGHT    AREA4_SUMSTATE_Y_CNT_HIGHT       ; /* 0x4c4c */
    U_AREA4_SUMSTATE_U_CNT_LOW      AREA4_SUMSTATE_U_CNT_LOW         ; /* 0x4c50 */
    U_AREA4_SUMSTATE_U_CNT_HIGHT    AREA4_SUMSTATE_U_CNT_HIGHT       ; /* 0x4c54 */
    U_AREA4_SUMSTATE_V_CNT_LOW      AREA4_SUMSTATE_V_CNT_LOW         ; /* 0x4c58 */
    U_AREA4_SUMSTATE_V_CNT_HIGHT    AREA4_SUMSTATE_V_CNT_HIGHT       ; /* 0x4c5c */
    U_AREA4_H                       AREA4_H                          ; /* 0x4c60 */
    U_AREA4_V                       AREA4_V                          ; /* 0x4c64 */
    unsigned int                    reserved_12[230]                 ; /* 0x4c68~0x4ffc */
    U_AREA5_HISTOGRAM               AREA5_HISTOGRAM[768]             ; /* 0x5000~0x5bfc */
    unsigned int                    reserved_13[6]                   ; /* 0x5c00~0x5c14 */
    U_AREA5_HISTOGRAM_Y1_CNT        AREA5_HISTOGRAM_Y1_CNT           ; /* 0x5c18 */
    U_AREA5_HISTOGRAM_Y2_CNT        AREA5_HISTOGRAM_Y2_CNT           ; /* 0x5c1c */
    U_AREA5_HISTOGRAM_Y3_CNT        AREA5_HISTOGRAM_Y3_CNT           ; /* 0x5c20 */
    U_AREA5_HISTOGRAM_Y4_CNT        AREA5_HISTOGRAM_Y4_CNT           ; /* 0x5c24 */
    U_AREA5_HISTOGRAM_U1_CNT        AREA5_HISTOGRAM_U1_CNT           ; /* 0x5c28 */
    U_AREA5_HISTOGRAM_U2_CNT        AREA5_HISTOGRAM_U2_CNT           ; /* 0x5c2c */
    U_AREA5_HISTOGRAM_U3_CNT        AREA5_HISTOGRAM_U3_CNT           ; /* 0x5c30 */
    U_AREA5_HISTOGRAM_U4_CNT        AREA5_HISTOGRAM_U4_CNT           ; /* 0x5c34 */
    U_AREA5_HISTOGRAM_V1_CNT        AREA5_HISTOGRAM_V1_CNT           ; /* 0x5c38 */
    U_AREA5_HISTOGRAM_V2_CNT        AREA5_HISTOGRAM_V2_CNT           ; /* 0x5c3c */
    U_AREA5_HISTOGRAM_V3_CNT        AREA5_HISTOGRAM_V3_CNT           ; /* 0x5c40 */
    U_AREA5_HISTOGRAM_V4_CNT        AREA5_HISTOGRAM_V4_CNT           ; /* 0x5c44 */
    U_AREA5_SUMSTATE_Y_CNT_LOW      AREA5_SUMSTATE_Y_CNT_LOW         ; /* 0x5c48 */
    U_AREA5_SUMSTATE_Y_CNT_HIGHT    AREA5_SUMSTATE_Y_CNT_HIGHT       ; /* 0x5c4c */
    U_AREA5_SUMSTATE_U_CNT_LOW      AREA5_SUMSTATE_U_CNT_LOW         ; /* 0x5c50 */
    U_AREA5_SUMSTATE_U_CNT_HIGHT    AREA5_SUMSTATE_U_CNT_HIGHT       ; /* 0x5c54 */
    U_AREA5_SUMSTATE_V_CNT_LOW      AREA5_SUMSTATE_V_CNT_LOW         ; /* 0x5c58 */
    U_AREA5_SUMSTATE_V_CNT_HIGHT    AREA5_SUMSTATE_V_CNT_HIGHT       ; /* 0x5c5c */
    U_AREA5_H                       AREA5_H                          ; /* 0x5c60 */
    U_AREA5_V                       AREA5_V                          ; /* 0x5c64 */
    unsigned int                    reserved_14[230]                 ; /* 0x5c68~0x5ffc */
    U_AREA6_HISTOGRAM               AREA6_HISTOGRAM[768]             ; /* 0x6000~0x6bfc */
    unsigned int                    reserved_15[6]                   ; /* 0x6c00~0x6c14 */
    U_AREA6_HISTOGRAM_Y1_CNT        AREA6_HISTOGRAM_Y1_CNT           ; /* 0x6c18 */
    U_AREA6_HISTOGRAM_Y2_CNT        AREA6_HISTOGRAM_Y2_CNT           ; /* 0x6c1c */
    U_AREA6_HISTOGRAM_Y3_CNT        AREA6_HISTOGRAM_Y3_CNT           ; /* 0x6c20 */
    U_AREA6_HISTOGRAM_Y4_CNT        AREA6_HISTOGRAM_Y4_CNT           ; /* 0x6c24 */
    U_AREA6_HISTOGRAM_U1_CNT        AREA6_HISTOGRAM_U1_CNT           ; /* 0x6c28 */
    U_AREA6_HISTOGRAM_U2_CNT        AREA6_HISTOGRAM_U2_CNT           ; /* 0x6c2c */
    U_AREA6_HISTOGRAM_U3_CNT        AREA6_HISTOGRAM_U3_CNT           ; /* 0x6c30 */
    U_AREA6_HISTOGRAM_U4_CNT        AREA6_HISTOGRAM_U4_CNT           ; /* 0x6c34 */
    U_AREA6_HISTOGRAM_V1_CNT        AREA6_HISTOGRAM_V1_CNT           ; /* 0x6c38 */
    U_AREA6_HISTOGRAM_V2_CNT        AREA6_HISTOGRAM_V2_CNT           ; /* 0x6c3c */
    U_AREA6_HISTOGRAM_V3_CNT        AREA6_HISTOGRAM_V3_CNT           ; /* 0x6c40 */
    U_AREA6_HISTOGRAM_V4_CNT        AREA6_HISTOGRAM_V4_CNT           ; /* 0x6c44 */
    U_AREA6_SUMSTATE_Y_CNT_LOW      AREA6_SUMSTATE_Y_CNT_LOW         ; /* 0x6c48 */
    U_AREA6_SUMSTATE_Y_CNT_HIGHT    AREA6_SUMSTATE_Y_CNT_HIGHT       ; /* 0x6c4c */
    U_AREA6_SUMSTATE_U_CNT_LOW      AREA6_SUMSTATE_U_CNT_LOW         ; /* 0x6c50 */
    U_AREA6_SUMSTATE_U_CNT_HIGHT    AREA6_SUMSTATE_U_CNT_HIGHT       ; /* 0x6c54 */
    U_AREA6_SUMSTATE_V_CNT_LOW      AREA6_SUMSTATE_V_CNT_LOW         ; /* 0x6c58 */
    U_AREA6_SUMSTATE_V_CNT_HIGHT    AREA6_SUMSTATE_V_CNT_HIGHT       ; /* 0x6c5c */
    U_AREA6_H                       AREA6_H                          ; /* 0x6c60 */
    U_AREA6_V                       AREA6_V                          ; /* 0x6c64 */
    unsigned int                    reserved_16[230]                 ; /* 0x6c68~0x6ffc */
    U_AREA7_HISTOGRAM               AREA7_HISTOGRAM[768]             ; /* 0x7000~0x7bfc */
    unsigned int                    reserved_17[6]                   ; /* 0x7c00~0x7c14 */
    U_AREA7_HISTOGRAM_Y1_CNT        AREA7_HISTOGRAM_Y1_CNT           ; /* 0x7c18 */
    U_AREA7_HISTOGRAM_Y2_CNT        AREA7_HISTOGRAM_Y2_CNT           ; /* 0x7c1c */
    U_AREA7_HISTOGRAM_Y3_CNT        AREA7_HISTOGRAM_Y3_CNT           ; /* 0x7c20 */
    U_AREA7_HISTOGRAM_Y4_CNT        AREA7_HISTOGRAM_Y4_CNT           ; /* 0x7c24 */
    U_AREA7_HISTOGRAM_U1_CNT        AREA7_HISTOGRAM_U1_CNT           ; /* 0x7c28 */
    U_AREA7_HISTOGRAM_U2_CNT        AREA7_HISTOGRAM_U2_CNT           ; /* 0x7c2c */
    U_AREA7_HISTOGRAM_U3_CNT        AREA7_HISTOGRAM_U3_CNT           ; /* 0x7c30 */
    U_AREA7_HISTOGRAM_U4_CNT        AREA7_HISTOGRAM_U4_CNT           ; /* 0x7c34 */
    U_AREA7_HISTOGRAM_V1_CNT        AREA7_HISTOGRAM_V1_CNT           ; /* 0x7c38 */
    U_AREA7_HISTOGRAM_V2_CNT        AREA7_HISTOGRAM_V2_CNT           ; /* 0x7c3c */
    U_AREA7_HISTOGRAM_V3_CNT        AREA7_HISTOGRAM_V3_CNT           ; /* 0x7c40 */
    U_AREA7_HISTOGRAM_V4_CNT        AREA7_HISTOGRAM_V4_CNT           ; /* 0x7c44 */
    U_AREA7_SUMSTATE_Y_CNT_LOW      AREA7_SUMSTATE_Y_CNT_LOW         ; /* 0x7c48 */
    U_AREA7_SUMSTATE_Y_CNT_HIGHT    AREA7_SUMSTATE_Y_CNT_HIGHT       ; /* 0x7c4c */
    U_AREA7_SUMSTATE_U_CNT_LOW      AREA7_SUMSTATE_U_CNT_LOW         ; /* 0x7c50 */
    U_AREA7_SUMSTATE_U_CNT_HIGHT    AREA7_SUMSTATE_U_CNT_HIGHT       ; /* 0x7c54 */
    U_AREA7_SUMSTATE_V_CNT_LOW      AREA7_SUMSTATE_V_CNT_LOW         ; /* 0x7c58 */
    U_AREA7_SUMSTATE_V_CNT_HIGHT    AREA7_SUMSTATE_V_CNT_HIGHT       ; /* 0x7c5c */
    U_AREA7_H                       AREA7_H                          ; /* 0x7c60 */
    U_AREA7_V                       AREA7_V                          ; /* 0x7c64 */

} S_VPC_HISTOGRAM_NMANAGER_REGS_TYPE;

/* Declare the struct pointor of the module VPC_HISTOGRAM_NMANAGER */
extern S_VPC_HISTOGRAM_NMANAGER_REGS_TYPE *gopVPC_HISTOGRAM_NMANAGERAllReg;


#endif /* VPC_PIPE_MILAN_HISTOGRAM_NMANAGER_REG_C_UNION_DEFINE_H */
