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

#ifndef VPC_PIPE_MILAN_CACHE_NMANAGER_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_CACHE_NMANAGER_REG_C_UNION_DEFINE_H

/* Define the union U_run_mode */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    run_mode              : 8   ; /* [7..0]  */
        unsigned int    sram_wrap_en          : 1   ; /* [8]  */
        unsigned int    reserved_0            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_run_mode;

/* Define the union U_data_format */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    data_format           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_data_format;

/* Define the union U_channel0_image0_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image0_baddr_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image0_baddr_l;
/* Define the union U_channel0_image0_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image0_baddr_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image0_baddr_h;
/* Define the union U_channel0_image1_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image1_baddr_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image1_baddr_l;
/* Define the union U_channel0_image1_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image1_baddr_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image1_baddr_h;
/* Define the union U_channel0_image2_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image2_baddr_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image2_baddr_l;
/* Define the union U_channel0_image2_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int channel0_image2_baddr_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image2_baddr_h;
/* Define the union U_channel0_image3_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image3_baddr_l;
/* Define the union U_channel0_image3_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image3_baddr_h;
/* Define the union U_channel0_image4_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image4_baddr_l;
/* Define the union U_channel0_image4_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image4_baddr_h;
/* Define the union U_channel0_image5_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image5_baddr_l;
/* Define the union U_channel0_image5_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image5_baddr_h;
/* Define the union U_channel0_image6_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image6_baddr_l;
/* Define the union U_channel0_image6_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image6_baddr_h;
/* Define the union U_channel0_image7_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image7_baddr_l;
/* Define the union U_channel0_image7_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel0_image7_baddr_h;
/* Define the union U_channel1_image0_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image0_baddr_l;
/* Define the union U_channel1_image0_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image0_baddr_h;
/* Define the union U_channel1_image1_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image1_baddr_l;
/* Define the union U_channel1_image1_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image1_baddr_h;
/* Define the union U_channel1_image2_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image2_baddr_l;
/* Define the union U_channel1_image2_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image2_baddr_h;
/* Define the union U_channel1_image3_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image3_baddr_l;
/* Define the union U_channel1_image3_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image3_baddr_h;
/* Define the union U_channel1_image4_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image4_baddr_l;
/* Define the union U_channel1_image4_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image4_baddr_h;
/* Define the union U_channel1_image5_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image5_baddr_l;
/* Define the union U_channel1_image5_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image5_baddr_h;
/* Define the union U_channel1_image6_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image6_baddr_l;
/* Define the union U_channel1_image6_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image6_baddr_h;
/* Define the union U_channel1_image7_baddr_l */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image7_baddr_l;
/* Define the union U_channel1_image7_baddr_h */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_channel1_image7_baddr_h;
/* Define the union U_channel0_image0_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    channel0_image0_stride : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image0_stride;

/* Define the union U_channel0_image1_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    channel0_image1_stride : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image1_stride;

/* Define the union U_channel0_image2_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    channel0_image2_stride : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image2_stride;

/* Define the union U_channel0_image3_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image3_stride;

/* Define the union U_channel0_image4_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image4_stride;

/* Define the union U_channel0_image5_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image5_stride;

/* Define the union U_channel0_image6_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image6_stride;

/* Define the union U_channel0_image7_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel0_image7_stride;

/* Define the union U_channel1_image0_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image0_stride;

/* Define the union U_channel1_image1_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image1_stride;

/* Define the union U_channel1_image2_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image2_stride;

/* Define the union U_channel1_image3_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image3_stride;

/* Define the union U_channel1_image4_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image4_stride;

/* Define the union U_channel1_image5_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image5_stride;

/* Define the union U_channel1_image6_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image6_stride;

/* Define the union U_channel1_image7_stride */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 20  ; /* [19..0]  */
        unsigned int    reserved_1            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_channel1_image7_stride;

/* Define the union U_dfx_inf0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_coor_receive_count : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf0;
/* Define the union U_dfx_inf1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_vp_send_count      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf1;
/* Define the union U_dfx_inf2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_chl0_nr_send_count : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf2;
/* Define the union U_dfx_inf3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_chl0_nr_receive_count : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf3;
/* Define the union U_dfx_inf4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf4;
/* Define the union U_dfx_inf5 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf5;
/* Define the union U_dfx_inf6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 4   ; /* [3..0]  */
        unsigned int    dfx_chl0_buf_infomation : 4   ; /* [7..4]  */
        unsigned int    reserved_1            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_dfx_inf6;

/* Define the union U_dfx_inf7 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_chl0_judg_hit_cnt  : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf7;
/* Define the union U_dfx_inf8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_chl0_judg_miss_cnt : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf8;
/* Define the union U_dfx_inf9 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf9;
/* Define the union U_dfx_inf10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf10;
/* Define the union U_dfx_inf11 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int dfx_chl0_dplc_nr_cnt   : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf11;
/* Define the union U_dfx_inf12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf12;
/* Define the union U_dfx_inf13 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf13;
/* Define the union U_dfx_inf14 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf14;
/* Define the union U_dfx_inf15 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf15;
/* Define the union U_dfx_inf16 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf16;
/* Define the union U_dfx_inf17 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf17;
/* Define the union U_dfx_inf18 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf18;
/* Define the union U_dfx_inf19 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf19;
/* Define the union U_dfx_inf20 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf20;
/* Define the union U_dfx_inf21 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf21;
/* Define the union U_dfx_inf22 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf22;
/* Define the union U_dfx_inf23 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf23;
/* Define the union U_dfx_inf24 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf24;
/* Define the union U_dfx_inf25 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf25;
/* Define the union U_dfx_inf26 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf26;
/* Define the union U_dfx_inf27 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf27;
/* Define the union U_dfx_inf28 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf28;
/* Define the union U_dfx_inf29 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf29;
/* Define the union U_dfx_inf30 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf30;
/* Define the union U_dfx_inf31 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int reserved_0             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_dfx_inf31;

/* Define the global struct */
typedef struct
{
    U_run_mode                      run_mode                         ; /* 0x0 */
    U_data_format                   data_format                      ; /* 0x4 */
    U_channel0_image0_baddr_l       channel0_image0_baddr_l          ; /* 0x8 */
    U_channel0_image0_baddr_h       channel0_image0_baddr_h          ; /* 0xc */
    U_channel0_image1_baddr_l       channel0_image1_baddr_l          ; /* 0x10 */
    U_channel0_image1_baddr_h       channel0_image1_baddr_h          ; /* 0x14 */
    U_channel0_image2_baddr_l       channel0_image2_baddr_l          ; /* 0x18 */
    U_channel0_image2_baddr_h       channel0_image2_baddr_h          ; /* 0x1c */
    U_channel0_image3_baddr_l       channel0_image3_baddr_l          ; /* 0x20 */
    U_channel0_image3_baddr_h       channel0_image3_baddr_h          ; /* 0x24 */
    U_channel0_image4_baddr_l       channel0_image4_baddr_l          ; /* 0x28 */
    U_channel0_image4_baddr_h       channel0_image4_baddr_h          ; /* 0x2c */
    U_channel0_image5_baddr_l       channel0_image5_baddr_l          ; /* 0x30 */
    U_channel0_image5_baddr_h       channel0_image5_baddr_h          ; /* 0x34 */
    U_channel0_image6_baddr_l       channel0_image6_baddr_l          ; /* 0x38 */
    U_channel0_image6_baddr_h       channel0_image6_baddr_h          ; /* 0x3c */
    U_channel0_image7_baddr_l       channel0_image7_baddr_l          ; /* 0x40 */
    U_channel0_image7_baddr_h       channel0_image7_baddr_h          ; /* 0x44 */
    U_channel1_image0_baddr_l       channel1_image0_baddr_l          ; /* 0x48 */
    U_channel1_image0_baddr_h       channel1_image0_baddr_h          ; /* 0x4c */
    U_channel1_image1_baddr_l       channel1_image1_baddr_l          ; /* 0x50 */
    U_channel1_image1_baddr_h       channel1_image1_baddr_h          ; /* 0x54 */
    U_channel1_image2_baddr_l       channel1_image2_baddr_l          ; /* 0x58 */
    U_channel1_image2_baddr_h       channel1_image2_baddr_h          ; /* 0x5c */
    U_channel1_image3_baddr_l       channel1_image3_baddr_l          ; /* 0x60 */
    U_channel1_image3_baddr_h       channel1_image3_baddr_h          ; /* 0x64 */
    U_channel1_image4_baddr_l       channel1_image4_baddr_l          ; /* 0x68 */
    U_channel1_image4_baddr_h       channel1_image4_baddr_h          ; /* 0x6c */
    U_channel1_image5_baddr_l       channel1_image5_baddr_l          ; /* 0x70 */
    U_channel1_image5_baddr_h       channel1_image5_baddr_h          ; /* 0x74 */
    U_channel1_image6_baddr_l       channel1_image6_baddr_l          ; /* 0x78 */
    U_channel1_image6_baddr_h       channel1_image6_baddr_h          ; /* 0x7c */
    U_channel1_image7_baddr_l       channel1_image7_baddr_l          ; /* 0x80 */
    U_channel1_image7_baddr_h       channel1_image7_baddr_h          ; /* 0x84 */
    U_channel0_image0_stride        channel0_image0_stride           ; /* 0x88 */
    U_channel0_image1_stride        channel0_image1_stride           ; /* 0x8c */
    U_channel0_image2_stride        channel0_image2_stride           ; /* 0x90 */
    U_channel0_image3_stride        channel0_image3_stride           ; /* 0x94 */
    U_channel0_image4_stride        channel0_image4_stride           ; /* 0x98 */
    U_channel0_image5_stride        channel0_image5_stride           ; /* 0x9c */
    U_channel0_image6_stride        channel0_image6_stride           ; /* 0xa0 */
    U_channel0_image7_stride        channel0_image7_stride           ; /* 0xa4 */
    U_channel1_image0_stride        channel1_image0_stride           ; /* 0xa8 */
    U_channel1_image1_stride        channel1_image1_stride           ; /* 0xac */
    U_channel1_image2_stride        channel1_image2_stride           ; /* 0xb0 */
    U_channel1_image3_stride        channel1_image3_stride           ; /* 0xb4 */
    U_channel1_image4_stride        channel1_image4_stride           ; /* 0xb8 */
    U_channel1_image5_stride        channel1_image5_stride           ; /* 0xbc */
    U_channel1_image6_stride        channel1_image6_stride           ; /* 0xc0 */
    U_channel1_image7_stride        channel1_image7_stride           ; /* 0xc4 */
    U_dfx_inf0                      dfx_inf0                         ; /* 0xc8 */
    U_dfx_inf1                      dfx_inf1                         ; /* 0xcc */
    U_dfx_inf2                      dfx_inf2                         ; /* 0xd0 */
    U_dfx_inf3                      dfx_inf3                         ; /* 0xd4 */
    U_dfx_inf4                      dfx_inf4                         ; /* 0xd8 */
    U_dfx_inf5                      dfx_inf5                         ; /* 0xdc */
    U_dfx_inf6                      dfx_inf6                         ; /* 0xe0 */
    U_dfx_inf7                      dfx_inf7                         ; /* 0xe4 */
    U_dfx_inf8                      dfx_inf8                         ; /* 0xe8 */
    U_dfx_inf9                      dfx_inf9                         ; /* 0xec */
    U_dfx_inf10                     dfx_inf10                        ; /* 0xf0 */
    U_dfx_inf11                     dfx_inf11                        ; /* 0xf4 */
    U_dfx_inf12                     dfx_inf12                        ; /* 0xf8 */
    U_dfx_inf13                     dfx_inf13                        ; /* 0xfc */
    U_dfx_inf14                     dfx_inf14                        ; /* 0x100 */
    U_dfx_inf15                     dfx_inf15                        ; /* 0x104 */
    U_dfx_inf16                     dfx_inf16                        ; /* 0x108 */
    U_dfx_inf17                     dfx_inf17                        ; /* 0x10c */
    U_dfx_inf18                     dfx_inf18                        ; /* 0x110 */
    U_dfx_inf19                     dfx_inf19                        ; /* 0x114 */
    U_dfx_inf20                     dfx_inf20                        ; /* 0x118 */
    U_dfx_inf21                     dfx_inf21                        ; /* 0x11c */
    U_dfx_inf22                     dfx_inf22                        ; /* 0x120 */
    U_dfx_inf23                     dfx_inf23                        ; /* 0x124 */
    U_dfx_inf24                     dfx_inf24                        ; /* 0x128 */
    U_dfx_inf25                     dfx_inf25                        ; /* 0x12c */
    U_dfx_inf26                     dfx_inf26                        ; /* 0x130 */
    U_dfx_inf27                     dfx_inf27                        ; /* 0x134 */
    U_dfx_inf28                     dfx_inf28                        ; /* 0x138 */
    U_dfx_inf29                     dfx_inf29                        ; /* 0x13c */
    U_dfx_inf30                     dfx_inf30                        ; /* 0x140 */
    U_dfx_inf31                     dfx_inf31                        ; /* 0x144 */

} S_VPC_CACHE_NMANAGER_REGS_TYPE;

/* Declare the struct pointor of the module vlc_cache_nmanager */
extern S_VPC_CACHE_NMANAGER_REGS_TYPE *gopvlc_cache_nmanagerAllReg;

#endif // #ifndef VPC_PIPE_MILAN_CACHE_NMANAGER_REG_C_UNION_DEFINE_H
