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

#ifndef VPC_PIPE_MILAN_AFFINE_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_AFFINE_REG_C_UNION_DEFINE_H

/* Define the union U_VPC_AFFINE_OUT_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    affine_out_width      : 16  ; /* [15..0]  */
        unsigned int    affine_out_height     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_AFFINE_OUT_SIZE;

/* Define the union U_VPC_AFFINE_SRC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    affine_src_width      : 16  ; /* [15..0]  */
        unsigned int    affine_src_height     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_AFFINE_SRC_SIZE;

/* Define the union U_VPC_AFFINE_LUT_BASE_ADDR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int lut_base_addr_h        : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_LUT_BASE_ADDR_H;
/* Define the union U_VPC_AFFINE_LUT_BASE_ADDR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int lut_base_addr_l        : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_LUT_BASE_ADDR_L;
/* Define the union U_VPC_AFFINE_LUT_STRIDE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int lut_stride             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_LUT_STRIDE;
/* Define the union U_VPC_AFFINE_OUT_BASE_ADDR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int wr_base_addr_h         : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_OUT_BASE_ADDR_H;
/* Define the union U_VPC_AFFINE_OUT_BASE_ADDR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int wr_base_addr_l         : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_OUT_BASE_ADDR_L;
/* Define the union U_VPC_AFFINE_OUT_STRIDE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int wr_stride              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_OUT_STRIDE;
/* Define the union U_VPC_AFFINE_BLK_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    blk_width             : 16  ; /* [15..0]  */
        unsigned int    blk_height            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_AFFINE_BLK_SIZE;

/* Define the union U_VPC_AFFINE_AFFINE_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    calc_mode             : 4   ; /* [3..0]  */
        unsigned int    padding_mode          : 4   ; /* [7..4]  */
        unsigned int    lut_fmt               : 8   ; /* [15..8]  */
        unsigned int    lut_round_mode        : 8   ; /* [23..16]  */
        unsigned int    coor_sel              : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_AFFINE_AFFINE_MODE;

typedef union
{
    /* Dvd Define the struct bits */
    struct
    {
        unsigned int    calc_mode             : 4   ; /* [3..0]  */
        unsigned int    padding_mode          : 4   ; /* [7..4]  */
        unsigned int    view_fmt              : 3   ; /* [10..8]  */
        unsigned int    lut_fmt               : 5   ; /* [15..11]  */
        unsigned int    lut_round_mode        : 8   ; /* [23..16]  */
        unsigned int    out_mode              : 2   ; /* [25..24]  */
        unsigned int    coor_sel              : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_VPC_AFFINE_AFFINE_MODE_V2;

/* Define the union U_VPC_AFFINE_MATRIX0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix0                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX0;
/* Define the union U_VPC_AFFINE_MATRIX1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix1                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX1;
/* Define the union U_VPC_AFFINE_MATRIX2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix2                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX2;
/* Define the union U_VPC_AFFINE_MATRIX3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix3                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX3;
/* Define the union U_VPC_AFFINE_MATRIX4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix4                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX4;
/* Define the union U_VPC_AFFINE_MATRIX5 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix5                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX5;
/* Define the union U_VPC_AFFINE_INVALID_PIX_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int invalid_pix_h          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_INVALID_PIX_H;
/* Define the union U_VPC_AFFINE_INVALID_PIX_M */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int invalid_pix_m          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_INVALID_PIX_M;
/* Define the union U_VPC_AFFINE_INVALID_PIX_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int invalid_pix_l          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_INVALID_PIX_L;
/* Define the union U_VPC_AFFINE_3D_MODE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int mode_3d                : 1   ; /* [0]  */
        unsigned int reserved_0             : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_3D_MODE;
/* Define the union U_VPC_AFFINE_3D_MODE_DEPTH */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int affine_src_depth        : 16  ; /* [15..0]  */
        unsigned int affine_out_depth        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_3D_MODE_DEPTH;
/* Define the union U_VPC_AFFINE_MATRIX6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix6                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX6;
/* Define the union U_VPC_AFFINE_MATRIX7 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix7                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX7;
/* Define the union U_VPC_AFFINE_MATRIX8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix8                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX8;
/* Define the union U_VPC_AFFINE_MATRIX9 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix9                : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX9;
/* Define the union U_VPC_AFFINE_MATRIX10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix10               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX10;
/* Define the union U_VPC_AFFINE_MATRIX11 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int matrix11               : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_AFFINE_MATRIX11;

/* Define the global struct */
typedef struct
{
    U_VPC_AFFINE_OUT_SIZE           VPC_AFFINE_OUT_SIZE              ; /* 0x0 */
    U_VPC_AFFINE_SRC_SIZE           VPC_AFFINE_SRC_SIZE              ; /* 0x4 */
    U_VPC_AFFINE_LUT_BASE_ADDR_H    VPC_AFFINE_LUT_BASE_ADDR_H       ; /* 0x8 */
    U_VPC_AFFINE_LUT_BASE_ADDR_L    VPC_AFFINE_LUT_BASE_ADDR_L       ; /* 0xc */
    U_VPC_AFFINE_LUT_STRIDE         VPC_AFFINE_LUT_STRIDE            ; /* 0x10 */
    U_VPC_AFFINE_OUT_BASE_ADDR_H    VPC_AFFINE_OUT_BASE_ADDR_H       ; /* 0x14 */
    U_VPC_AFFINE_OUT_BASE_ADDR_L    VPC_AFFINE_OUT_BASE_ADDR_L       ; /* 0x18 */
    U_VPC_AFFINE_OUT_STRIDE         VPC_AFFINE_OUT_STRIDE            ; /* 0x1c */
    U_VPC_AFFINE_BLK_SIZE           VPC_AFFINE_BLK_SIZE              ; /* 0x20 */
    unsigned int                    reserved_0                       ; /* 0x24 */
    U_VPC_AFFINE_AFFINE_MODE        VPC_AFFINE_AFFINE_MODE           ; /* 0x28 */
    U_VPC_AFFINE_MATRIX0            VPC_AFFINE_MATRIX0               ; /* 0x2c */
    U_VPC_AFFINE_MATRIX1            VPC_AFFINE_MATRIX1               ; /* 0x30 */
    U_VPC_AFFINE_MATRIX2            VPC_AFFINE_MATRIX2               ; /* 0x34 */
    U_VPC_AFFINE_MATRIX3            VPC_AFFINE_MATRIX3               ; /* 0x38 */
    U_VPC_AFFINE_MATRIX4            VPC_AFFINE_MATRIX4               ; /* 0x3c */
    U_VPC_AFFINE_MATRIX5            VPC_AFFINE_MATRIX5               ; /* 0x40 */
    U_VPC_AFFINE_INVALID_PIX_H      VPC_AFFINE_INVALID_PIX_H         ; /* 0x44 */
    U_VPC_AFFINE_INVALID_PIX_M      VPC_AFFINE_INVALID_PIX_M         ; /* 0x48 */
    U_VPC_AFFINE_INVALID_PIX_L      VPC_AFFINE_INVALID_PIX_L         ; /* 0x4c */
    U_VPC_AFFINE_3D_MODE            VPC_AFFINE_3D_MODE               ; /* 0x50 */
    U_VPC_AFFINE_3D_MODE_DEPTH      VPC_AFFINE_3D_MODE_DEPTH         ; /* 0x54 */
    U_VPC_AFFINE_MATRIX6            VPC_AFFINE_MATRIX6               ; /* 0x58 */
    U_VPC_AFFINE_MATRIX7            VPC_AFFINE_MATRIX7               ; /* 0x5c */
    U_VPC_AFFINE_MATRIX8            VPC_AFFINE_MATRIX8               ; /* 0x60 */
    U_VPC_AFFINE_MATRIX9            VPC_AFFINE_MATRIX9               ; /* 0x64 */
    U_VPC_AFFINE_MATRIX10           VPC_AFFINE_MATRIX10              ; /* 0x68 */
    U_VPC_AFFINE_MATRIX11           VPC_AFFINE_MATRIX11              ; /* 0x6c */

} S_VPC_AFFINE_REGS_REGS_TYPE;

/* Declare the struct pointor of the module VPC_AFFINE_REGS */
extern S_VPC_AFFINE_REGS_REGS_TYPE *gopVPC_AFFINE_REGSAllReg;


#endif  // #ifndef VPC_PIPE_MILAN_AFFINE_REG_C_UNION_DEFINE_H
