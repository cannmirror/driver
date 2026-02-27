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
#ifndef VPC_PIPELINE_RESIZE_NMANAGER_REG_C_UNION_DEFINE_H
#define VPC_PIPELINE_RESIZE_NMANAGER_REG_C_UNION_DEFINE_H

/* Define the union U_RESIZE_IWIDTH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iwidth                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_IWIDTH;

/* Define the union U_RESIZE_IHEIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iheight               : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_IHEIGHT;

/* Define the union U_RESIZE_OWIDTH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    owidth                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_OWIDTH;

/* Define the union U_RESIZE_OHEIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    oheight               : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_OHEIGHT;

/* Define the union U_RESIZE_INDEX_ILEFT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_ileft           : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_ILEFT;

/* Define the union U_RESIZE_INDEX_IRIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_iright          : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_IRIGHT;

/* Define the union U_RESIZE_INDEX_ITOP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_itop            : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_ITOP;

/* Define the union U_RESIZE_INDEX_IBOTTOM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_ibottom         : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_IBOTTOM;

/* Define the union U_RESIZE_INDEX_OLEFT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_oleft           : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_OLEFT;

/* Define the union U_RESIZE_INDEX_ORIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_oright          : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_ORIGHT;

/* Define the union U_RESIZE_INDEX_OTOP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_otop            : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_OTOP;

/* Define the union U_RESIZE_INDEX_OBOTTOM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    index_obottom         : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_INDEX_OBOTTOM;

/* Define the union U_RESIZE_IHINC_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int ihinc_l                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_IHINC_L;
/* Define the union U_RESIZE_IHINC_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int ihinc_h                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_IHINC_H;
/* Define the union U_RESIZE_IVINC_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int ivinc_l                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_IVINC_L;
/* Define the union U_RESIZE_IVINC_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int ivinc_h                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_IVINC_H;
/* Define the union U_RESIZE_BIAS_HA_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_ha_l              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HA_L;
/* Define the union U_RESIZE_BIAS_HA_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_ha_h              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HA_H;
/* Define the union U_RESIZE_BIAS_HB_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_hb_l              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HB_L;
/* Define the union U_RESIZE_BIAS_HB_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_hb_h              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HB_H;
/* Define the union U_RESIZE_BIAS_VA_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_va_l              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_VA_L;
/* Define the union U_RESIZE_BIAS_VA_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_va_h              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_VA_H;
/* Define the union U_RESIZE_BIAS_VB_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_vb_l              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_VB_L;
/* Define the union U_RESIZE_BIAS_VB_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_vb_h              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_VB_H;
/* Define the union U_RESIZE_BIAS_HA_UV_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_ha_uv_l           : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HA_UV_L;
/* Define the union U_RESIZE_BIAS_HA_UV_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_ha_uv_h           : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HA_UV_H;
/* Define the union U_RESIZE_BIAS_HB_UV_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_hb_uv_l           : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HB_UV_L;
/* Define the union U_RESIZE_BIAS_HB_UV_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int bias_hb_uv_h           : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_BIAS_HB_UV_H;
/* Define the union U_RESIZE_CUBIC_A */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cubic_a                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_CUBIC_A;
/* Define the union U_RESIZE_MISC_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bypass                : 1   ; /* [0]  */
        unsigned int    reserved_0            : 1   ; /* [1]  */
        unsigned int    func_type             : 3   ; /* [4..2]  */
        unsigned int    split_mode            : 1   ; /* [5]  */
        unsigned int    align_mode            : 1   ; /* [6]  */
        unsigned int    bias_src              : 1   ; /* [7]  */
        unsigned int    inc_src               : 1   ; /* [8]  */
        unsigned int    inc_type              : 2   ; /* [10..9]  */
        unsigned int    reserved_1            : 5   ; /* [15..11]  */
        unsigned int    pos_type              : 2   ; /* [17..16]  */
        unsigned int    reserved_2            : 13  ; /* [30..18]  */
        unsigned int    force_clk_on          : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_MISC_CTRL;

/* Define the union U_RESIZE_RND_CTRL0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rnd_ctrl              : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_RND_CTRL0;

/* Define the union U_RESIZE_RND_CTRL1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hpos_rnd              : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    hcoe_rnd              : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 1   ; /* [7]  */
        unsigned int    hmac_rnd              : 3   ; /* [10..8]  */
        unsigned int    reserved_2            : 5   ; /* [15..11]  */
        unsigned int    hmac_rnd_num          : 5   ; /* [20..16]  */
        unsigned int    reserved_3            : 5   ; /* [25..21]  */
        unsigned int    hcoe_num              : 5   ; /* [30..26]  */
        unsigned int    hcoe_bound            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_RND_CTRL1;

/* Define the union U_RESIZE_RND_CTRL2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpos_rnd              : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    vcoe_rnd              : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 1   ; /* [7]  */
        unsigned int    vmac_rnd              : 3   ; /* [10..8]  */
        unsigned int    reserved_2            : 5   ; /* [15..11]  */
        unsigned int    vmac_rnd_num          : 5   ; /* [20..16]  */
        unsigned int    vmac_shf_num          : 5   ; /* [25..21]  */
        unsigned int    vcoe_num              : 5   ; /* [30..26]  */
        unsigned int    vcoe_bound            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_RESIZE_RND_CTRL2;

/* Define the union U_RESIZE_DEBUG_RO0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug0_ro              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_DEBUG_RO0;
/* Define the union U_RESIZE_DEBUG_RO1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug1_ro              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_DEBUG_RO1;
/* Define the union U_RESIZE_DEBUG_RO2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int debug2_ro              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_RESIZE_DEBUG_RO2;

/* Define the global struct */
typedef struct
{
    U_RESIZE_IWIDTH                 RESIZE_IWIDTH                    ; /* 0x0 */
    U_RESIZE_IHEIGHT                RESIZE_IHEIGHT                   ; /* 0x4 */
    U_RESIZE_OWIDTH                 RESIZE_OWIDTH                    ; /* 0x8 */
    U_RESIZE_OHEIGHT                RESIZE_OHEIGHT                   ; /* 0xc */
    U_RESIZE_INDEX_ILEFT            RESIZE_INDEX_ILEFT               ; /* 0x10 */
    U_RESIZE_INDEX_IRIGHT           RESIZE_INDEX_IRIGHT              ; /* 0x14 */
    U_RESIZE_INDEX_ITOP             RESIZE_INDEX_ITOP                ; /* 0x18 */
    U_RESIZE_INDEX_IBOTTOM          RESIZE_INDEX_IBOTTOM             ; /* 0x1c */
    U_RESIZE_INDEX_OLEFT            RESIZE_INDEX_OLEFT               ; /* 0x20 */
    U_RESIZE_INDEX_ORIGHT           RESIZE_INDEX_ORIGHT              ; /* 0x24 */
    U_RESIZE_INDEX_OTOP             RESIZE_INDEX_OTOP                ; /* 0x28 */
    U_RESIZE_INDEX_OBOTTOM          RESIZE_INDEX_OBOTTOM             ; /* 0x2c */
    U_RESIZE_IHINC_L                RESIZE_IHINC_L                   ; /* 0x30 */
    U_RESIZE_IHINC_H                RESIZE_IHINC_H                   ; /* 0x34 */
    U_RESIZE_IVINC_L                RESIZE_IVINC_L                   ; /* 0x38 */
    U_RESIZE_IVINC_H                RESIZE_IVINC_H                   ; /* 0x3c */
    U_RESIZE_BIAS_HA_L              RESIZE_BIAS_HA_L                 ; /* 0x40 */
    U_RESIZE_BIAS_HA_H              RESIZE_BIAS_HA_H                 ; /* 0x44 */
    U_RESIZE_BIAS_HB_L              RESIZE_BIAS_HB_L                 ; /* 0x48 */
    U_RESIZE_BIAS_HB_H              RESIZE_BIAS_HB_H                 ; /* 0x4c */
    U_RESIZE_BIAS_VA_L              RESIZE_BIAS_VA_L                 ; /* 0x50 */
    U_RESIZE_BIAS_VA_H              RESIZE_BIAS_VA_H                 ; /* 0x54 */
    U_RESIZE_BIAS_VB_L              RESIZE_BIAS_VB_L                 ; /* 0x58 */
    U_RESIZE_BIAS_VB_H              RESIZE_BIAS_VB_H                 ; /* 0x5c */
    U_RESIZE_BIAS_HA_UV_L           RESIZE_BIAS_HA_UV_L              ; /* 0x60 */
    U_RESIZE_BIAS_HA_UV_H           RESIZE_BIAS_HA_UV_H              ; /* 0x64 */
    U_RESIZE_BIAS_HB_UV_L           RESIZE_BIAS_HB_UV_L              ; /* 0x68 */
    U_RESIZE_BIAS_HB_UV_H           RESIZE_BIAS_HB_UV_H              ; /* 0x6c */
    U_RESIZE_CUBIC_A                RESIZE_CUBIC_A                   ; /* 0x70 */
    unsigned int                    reserved_0[35]                   ; /* 0x74~0xfc */
    U_RESIZE_MISC_CTRL              RESIZE_MISC_CTRL                 ; /* 0x100 */
    unsigned int                    reserved_1[3]                    ; /* 0x104~0x10c */
    U_RESIZE_RND_CTRL0              RESIZE_RND_CTRL0                 ; /* 0x110 */
    U_RESIZE_RND_CTRL1              RESIZE_RND_CTRL1                 ; /* 0x114 */
    U_RESIZE_RND_CTRL2              RESIZE_RND_CTRL2                 ; /* 0x118 */
    unsigned int                    reserved_2[57]                   ; /* 0x11c~0x1fc */
    U_RESIZE_DEBUG_RO0              RESIZE_DEBUG_RO0                 ; /* 0x200 */
    U_RESIZE_DEBUG_RO1              RESIZE_DEBUG_RO1                 ; /* 0x204 */
    U_RESIZE_DEBUG_RO2              RESIZE_DEBUG_RO2                 ; /* 0x208 */

} S_VPC_RESIZE_REGS_REGS_TYPE;

/* Declare the struct pointor of the module VPC_RESIZE_REGS */
extern S_VPC_RESIZE_REGS_REGS_TYPE *gopVPC_RESIZE_REGSAllReg;


#endif // #ifndef VPC_PIPELINE_RESIZE_NMANAGER_REG_C_UNION_DEFINE_H