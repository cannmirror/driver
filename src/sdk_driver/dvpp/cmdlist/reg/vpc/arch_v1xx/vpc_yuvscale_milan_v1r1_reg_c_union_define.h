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

#ifndef VPC_YUVSCALER_MILAN_V1R1_REG_C_UNION_DEFINE_H
#define VPC_YUVSCALER_MILAN_V1R1_REG_C_UNION_DEFINE_H

/* Define the union U_IHLEFT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ihleft                : 29  ; /* [28..0]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IHLEFT;

/* Define the union U_IHRIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ihright               : 29  ; /* [28..0]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IHRIGHT;

/* Define the union U_UV_HOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    uv_hoffset            : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_UV_HOFFSET;

/* Define the union U_IVTOP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ivtop                 : 29  ; /* [28..0]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IVTOP;

/* Define the union U_IVBOTTOM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ivbottom              : 29  ; /* [28..0]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IVBOTTOM;

/* Define the union U_UV_VOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    uv_voffset            : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_UV_VOFFSET;

/* Define the union U_IHINC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ihinc                 : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IHINC;

/* Define the union U_IVINC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ivinc                 : 20  ; /* [19..0]  */
        unsigned int    halflinemode          : 1   ; /* [20]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IVINC;

/* Define the union U_BYPASS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bypass                : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_BYPASS;

/* Define the union U_FORMAT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    outformat             : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 1   ; /* [2]  */
        unsigned int    swapout               : 1   ; /* [3]  */
        unsigned int    swapin                : 1   ; /* [4]  */
        unsigned int    informat              : 1   ; /* [5]  */
        unsigned int    yuv422_semi_planar    : 1   ; /* [6]  */
        unsigned int    swapout_uv            : 1   ; /* [7]  */
        unsigned int    swapin_uv             : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_FORMAT;

/* Define the union U_IWIDTH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iwidth                : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IWIDTH;

/* Define the union U_IHEIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iheight               : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IHEIGHT;

/* Define the union U_OWIDTH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    owidth                : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OWIDTH;

/* Define the union U_OHEIGHT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    oheight               : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OHEIGHT;

/* Define the union U_COEFF_H_Y0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hcoeff0y              : 9   ; /* [8..0]  */
        unsigned int    hcoeff1y              : 9   ; /* [17..9]  */
        unsigned int    hcoeff2y              : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_H_Y0;

/* Define the union U_COEFF_H_Y1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hcoeff3y              : 9   ; /* [8..0]  */
        unsigned int    hcoeff4y              : 9   ; /* [17..9]  */
        unsigned int    hcoeff5y              : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_H_Y1;

/* Define the union U_COEFF_V_Y0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcoeff0y              : 9   ; /* [8..0]  */
        unsigned int    vcoeff1y              : 9   ; /* [17..9]  */
        unsigned int    vcoeff2y              : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_V_Y0;

/* Define the union U_COEFF_V_Y1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcoeff3y              : 9   ; /* [8..0]  */
        unsigned int    vcoeff4y              : 9   ; /* [17..9]  */
        unsigned int    vcoeff5y              : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_V_Y1;

/* Define the union U_COEFF_H_UV0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hcoeff0uv             : 9   ; /* [8..0]  */
        unsigned int    hcoeff1uv             : 9   ; /* [17..9]  */
        unsigned int    hcoeff2uv             : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_H_UV0;

/* Define the union U_COEFF_H_UV1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hcoeff3uv             : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_H_UV1;

/* Define the union U_COEFF_V_UV0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcoeff0uv             : 9   ; /* [8..0]  */
        unsigned int    vcoeff1uv             : 9   ; /* [17..9]  */
        unsigned int    vcoeff2uv             : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_V_UV0;

/* Define the union U_COEFF_V_UV1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcoeff3uv             : 9   ; /* [8..0]  */
        unsigned int    vcoeff4uv             : 9   ; /* [17..9]  */
        unsigned int    vcoeff5uv             : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_COEFF_V_UV1;

/* Define the global struct */
typedef struct
{
    volatile U_IHLEFT               IHLEFT                           ; /* 0x0 */
    volatile U_IHRIGHT              IHRIGHT                          ; /* 0x4 */
    volatile U_UV_HOFFSET           UV_HOFFSET                       ; /* 0x8 */
    volatile U_IVTOP                IVTOP                            ; /* 0xc */
    volatile U_IVBOTTOM             IVBOTTOM                         ; /* 0x10 */
    volatile U_UV_VOFFSET           UV_VOFFSET                       ; /* 0x14 */
    volatile U_IHINC                IHINC                            ; /* 0x18 */
    volatile U_IVINC                IVINC                            ; /* 0x1c */
    volatile unsigned int           reserved_0                       ; /* 0x20 */
    volatile U_BYPASS               BYPASS                           ; /* 0x24 */
    volatile U_FORMAT               FORMAT                           ; /* 0x28 */
    volatile unsigned int           reserved_1                       ; /* 0x2c */
    volatile U_IWIDTH               IWIDTH                           ; /* 0x30 */
    volatile U_IHEIGHT              IHEIGHT                          ; /* 0x34 */
    volatile U_OWIDTH               OWIDTH                           ; /* 0x38 */
    volatile U_OHEIGHT              OHEIGHT                          ; /* 0x3c */
    volatile unsigned int           reserved_2[8]                    ; /* 0x40~0x5c */
    volatile U_COEFF_H_Y0           COEFF_H_Y0[8]                    ; /* 0x60~0x7c */
    volatile U_COEFF_H_Y1           COEFF_H_Y1[8]                    ; /* 0x80~0x9c */
    volatile U_COEFF_V_Y0           COEFF_V_Y0[8]                    ; /* 0xa0~0xbc */
    volatile U_COEFF_V_Y1           COEFF_V_Y1[8]                    ; /* 0xc0~0xdc */
    volatile U_COEFF_H_UV0          COEFF_H_UV0[8]                   ; /* 0xe0~0xfc */
    volatile U_COEFF_H_UV1          COEFF_H_UV1[8]                   ; /* 0x100~0x11c */
    volatile U_COEFF_V_UV0          COEFF_V_UV0[8]                   ; /* 0x120~0x13c */
    volatile U_COEFF_V_UV1          COEFF_V_UV1[8]                   ; /* 0x140~0x15c */
    volatile unsigned int           reserved_3[104]                  ; /* 0x160~0x2fc */
    volatile unsigned int           DEBUG0                           ; /* 0x300 */
    volatile unsigned int           DEBUG1                           ; /* 0x304 */

} S_ISP_YUVSC12P_REG_REGS_TYPE;

#endif /* VPC_YUVSCALER_MILAN_V1R1_REG_C_UNION_DEFINE_H */
