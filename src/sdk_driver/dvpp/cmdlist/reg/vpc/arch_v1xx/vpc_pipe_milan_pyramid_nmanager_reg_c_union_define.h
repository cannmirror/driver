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
#ifndef VPC_PIPE_MILAN_PYRAMID_NMANAGER_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_PYRAMID_NMANAGER_REG_C_UNION_DEFINE_H

/* Define the union U_CTRL0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [0]  */
        unsigned int    clip_en               : 1   ; /* [1]  */
        unsigned int    reserved_1            : 2   ; /* [3..2]  */
        unsigned int    model_sel             : 2   ; /* [5..4]  */
        unsigned int    yfilter3x3_en         : 1   ; /* [6]  */
        unsigned int    xfilter3x3_en         : 1   ; /* [7]  */
        unsigned int    level                 : 4   ; /* [11..8]  */
        unsigned int    divisor_modify        : 1   ; /* [12]  */
        unsigned int    reserved_2            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CTRL0;

/* Define the union U_INSIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in_width              : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 3   ; /* [15..13]  */
        unsigned int    in_height             : 13  ; /* [28..16]  */
        unsigned int    reserved_1            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INSIZE;

/* Define the union U_PY_L1_COEFF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y0_x0    : 8   ; /* [7..0]  */
        unsigned int    py_f5x5_coef_y0_x1    : 8   ; /* [15..8]  */
        unsigned int    py_f5x5_coef_y0_x2    : 8   ; /* [23..16]  */
        unsigned int    py_f5x5_coef_y0_x3    : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF1;

/* Define the union U_PY_L1_COEFF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y0_x4    : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF2;

/* Define the union U_PY_L1_COEFF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y1_x0    : 8   ; /* [7..0]  */
        unsigned int    py_f5x5_coef_y1_x1    : 8   ; /* [15..8]  */
        unsigned int    py_f5x5_coef_y1_x2    : 8   ; /* [23..16]  */
        unsigned int    py_f5x5_coef_y1_x3    : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF3;

/* Define the union U_PY_L1_COEFF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y1_x4    : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF4;

/* Define the union U_PY_L1_COEFF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y2_x0    : 8   ; /* [7..0]  */
        unsigned int    py_f5x5_coef_y2_x1    : 8   ; /* [15..8]  */
        unsigned int    py_f5x5_coef_y2_x2    : 8   ; /* [23..16]  */
        unsigned int    py_f5x5_coef_y2_x3    : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF5;

/* Define the union U_PY_L1_COEFF6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y2_x4    : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF6;

/* Define the union U_PY_L1_COEFF7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y3_x0    : 8   ; /* [7..0]  */
        unsigned int    py_f5x5_coef_y3_x1    : 8   ; /* [15..8]  */
        unsigned int    py_f5x5_coef_y3_x2    : 8   ; /* [23..16]  */
        unsigned int    py_f5x5_coef_y3_x3    : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF7;

/* Define the union U_PY_L1_COEFF8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y3_x4    : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF8;

/* Define the union U_PY_L1_COEFF9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y4_x0    : 8   ; /* [7..0]  */
        unsigned int    py_f5x5_coef_y4_x1    : 8   ; /* [15..8]  */
        unsigned int    py_f5x5_coef_y4_x2    : 8   ; /* [23..16]  */
        unsigned int    py_f5x5_coef_y4_x3    : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF9;

/* Define the union U_PY_L1_COEFF10 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_f5x5_coef_y4_x4    : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_L1_COEFF10;

/* Define the union U_PY_DIV */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    divisor               : 16  ; /* [15..0]  */
        unsigned int    shifter               : 4   ; /* [19..16]  */
        unsigned int    reserved_0            : 4   ; /* [23..20]  */
        unsigned int    pre_filter_cap        : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_DIV;

/* Define the union U_PY_PADDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_v_padding_sel      : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    py_h_padding_sel      : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    py_dir_priority       : 1   ; /* [16]  */
        unsigned int    reserved_2            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_PADDING_MODE;

/* Define the union U_PY_H_PADDING_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_h_padding_value    : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_H_PADDING_VALUE;

/* Define the union U_PY_V_PADDING_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    py_v_padding_value    : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PY_V_PADDING_VALUE;

/* Define the union U_X_F3X3_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y0_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    x_f3x3_y0_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF0;

/* Define the union U_X_F3X3_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y0_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF1;

/* Define the union U_X_F3X3_COEF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y1_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    x_f3x3_y1_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF2;

/* Define the union U_X_F3X3_COEF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y1_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF3;

/* Define the union U_X_F3X3_COEF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y2_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    x_f3x3_y2_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF4;

/* Define the union U_X_F3X3_COEF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_f3x3_y2_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_F3X3_COEF5;

/* Define the union U_Y_F3X3_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y0_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    y_f3x3_y0_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF0;

/* Define the union U_Y_F3X3_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y0_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF1;

/* Define the union U_Y_F3X3_COEF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y1_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    y_f3x3_y1_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF2;

/* Define the union U_Y_F3X3_COEF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y1_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF3;

/* Define the union U_Y_F3X3_COEF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y2_x0          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 8   ; /* [15..8]  */
        unsigned int    y_f3x3_y2_x1          : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF4;

/* Define the union U_Y_F3X3_COEF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_f3x3_y2_x2          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_F3X3_COEF5;

/* Define the union U_XY_SHIFT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_shifter             : 4   ; /* [3..0]  */
        unsigned int    y_shifter             : 4   ; /* [7..4]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_XY_SHIFT;

/* Define the union U_X_PADDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_v_padding_sel       : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    x_h_padding_sel       : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    x_dir_priority        : 1   ; /* [16]  */
        unsigned int    reserved_2            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_PADDING_MODE;

/* Define the union U_X_PADDING_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_v_padding_value     : 8   ; /* [7..0]  */
        unsigned int    x_h_padding_value     : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_X_PADDING_VALUE;

/* Define the union U_Y_PADDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_v_padding_sel       : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    y_h_padding_sel       : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    y_dir_priority        : 1   ; /* [16]  */
        unsigned int    reserved_2            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_PADDING_MODE;

/* Define the union U_Y_PADDING_VALUE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_v_padding_value     : 8   ; /* [7..0]  */
        unsigned int    y_h_padding_value     : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_Y_PADDING_VALUE;

/* Define the union U_LINE_NUM_ADD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_num_add0         : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    line_num_add1         : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LINE_NUM_ADD;

/* Define the union U_SRC0_BASE_ADDR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int src0_base_addr_h       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_SRC0_BASE_ADDR_H;
/* Define the union U_SRC0_BASE_ADDR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int src0_base_addr_l       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_SRC0_BASE_ADDR_L;
/* Define the union U_SRC0_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    src0_stride           : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_SRC0_STRIDE;

/* Define the union U_SRC1_BASE_ADDR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int src1_base_addr_h       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_SRC1_BASE_ADDR_H;
/* Define the union U_SRC1_BASE_ADDR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int src1_base_addr_l       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_SRC1_BASE_ADDR_L;
/* Define the union U_SRC1_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    src1_stride           : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_SRC1_STRIDE;

/* Define the union U_BLENDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct {
        unsigned int    bld_mode              : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_BLENDING_MODE;

/* Define the union U_LAY0_IN_SIZE */
typedef union
{
    /* Define the struct bits */
    struct {
        unsigned int    lay0_in_height        : 16  ; /* [15..0]  */
        unsigned int    lay0_in_width         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LAY0_IN_SIZE;

/* Define the union U_LAY1_IN_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lay1_in_height        : 16  ; /* [15..0]  */
        unsigned int    lay1_in_width         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LAY1_IN_SIZE;

/* Define the union U_LEFT_POSITION */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_offset              : 16  ; /* [15..0]  */
        unsigned int    x_offset              : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LEFT_POSITION;

/* Define the union U_COEF_ALPHA */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int coef_alpha             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_COEF_ALPHA;
/* Define the union U_COEF_BETA */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int coef_beta              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_COEF_BETA;
/* Define the union U_COEF_GAMMA */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int coef_gamma             : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_COEF_GAMMA;

/* dvd 新增 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int posterize_op           : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_POSTERIZE;

typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int solarize_thld_min      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_SOLARIZE_CFG0;

typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int solarize_thld_max      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_SOLARIZE_CFG1;

typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int erase_left           : 16  ; /* [15..0]  */
        unsigned int erase_top            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_ERASE_CFG0;

typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int erase_height         : 16  ; /* [15..0]  */
        unsigned int erase_width          : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_ERASE_CFG1;

typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int erase_r              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_ERASE_CFG2;

typedef union {
    /* Define the struct bits  */
    struct
    {
        unsigned int erase_g              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_ERASE_CFG3;

typedef union {
    /* Define the struct bits  */
    struct
    {
        unsigned int erase_b              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;
} U_ERASE_CFG4;
/* dvd 新增 */

/* Define the global struct */
typedef struct
{
    U_CTRL0                         CTRL0                            ; /* 0x0 */
    unsigned int                    reserved_0                       ; /* 0x4 */
    U_INSIZE                        INSIZE                           ; /* 0x8 */
    unsigned int                    reserved_1[5]                    ; /* 0xc~0x1c */
    U_PY_L1_COEFF1                  PY_L1_COEFF1                     ; /* 0x20 */
    U_PY_L1_COEFF2                  PY_L1_COEFF2                     ; /* 0x24 */
    U_PY_L1_COEFF3                  PY_L1_COEFF3                     ; /* 0x28 */
    U_PY_L1_COEFF4                  PY_L1_COEFF4                     ; /* 0x2c */
    U_PY_L1_COEFF5                  PY_L1_COEFF5                     ; /* 0x30 */
    U_PY_L1_COEFF6                  PY_L1_COEFF6                     ; /* 0x34 */
    U_PY_L1_COEFF7                  PY_L1_COEFF7                     ; /* 0x38 */
    U_PY_L1_COEFF8                  PY_L1_COEFF8                     ; /* 0x3c */
    U_PY_L1_COEFF9                  PY_L1_COEFF9                     ; /* 0x40 */
    U_PY_L1_COEFF10                 PY_L1_COEFF10                    ; /* 0x44 */
    unsigned int                    reserved_2[2]                    ; /* 0x48~0x4c */
    U_PY_DIV                        PY_DIV                           ; /* 0x50 */
    U_PY_PADDING_MODE               PY_PADDING_MODE                  ; /* 0x54 */
    U_PY_H_PADDING_VALUE            PY_H_PADDING_VALUE               ; /* 0x58 */
    U_PY_V_PADDING_VALUE            PY_V_PADDING_VALUE               ; /* 0x5c */
    U_X_F3X3_COEF0                  X_F3X3_COEF0                     ; /* 0x60 */
    U_X_F3X3_COEF1                  X_F3X3_COEF1                     ; /* 0x64 */
    U_X_F3X3_COEF2                  X_F3X3_COEF2                     ; /* 0x68 */
    U_X_F3X3_COEF3                  X_F3X3_COEF3                     ; /* 0x6c */
    U_X_F3X3_COEF4                  X_F3X3_COEF4                     ; /* 0x70 */
    U_X_F3X3_COEF5                  X_F3X3_COEF5                     ; /* 0x74 */
    U_Y_F3X3_COEF0                  Y_F3X3_COEF0                     ; /* 0x78 */
    U_Y_F3X3_COEF1                  Y_F3X3_COEF1                     ; /* 0x7c */
    U_Y_F3X3_COEF2                  Y_F3X3_COEF2                     ; /* 0x80 */
    U_Y_F3X3_COEF3                  Y_F3X3_COEF3                     ; /* 0x84 */
    U_Y_F3X3_COEF4                  Y_F3X3_COEF4                     ; /* 0x88 */
    U_Y_F3X3_COEF5                  Y_F3X3_COEF5                     ; /* 0x8c */
    U_XY_SHIFT                      XY_SHIFT                         ; /* 0x90 */
    unsigned int                    reserved_3[3]                    ; /* 0x94~0x9c */
    U_X_PADDING_MODE                X_PADDING_MODE                   ; /* 0xa0 */
    U_X_PADDING_VALUE               X_PADDING_VALUE                  ; /* 0xa4 */
    U_Y_PADDING_MODE                Y_PADDING_MODE                   ; /* 0xa8 */
    U_Y_PADDING_VALUE               Y_PADDING_VALUE                  ; /* 0xac */
    U_LINE_NUM_ADD                  LINE_NUM_ADD                     ; /* 0xb0 */
    U_SRC0_BASE_ADDR_H              SRC0_BASE_ADDR_H                 ; /* 0xb4 */
    U_SRC0_BASE_ADDR_L              SRC0_BASE_ADDR_L                 ; /* 0xb8 */
    U_SRC0_STRIDE                   SRC0_STRIDE                      ; /* 0xbc */
    U_SRC1_BASE_ADDR_H              SRC1_BASE_ADDR_H                 ; /* 0xc0 */
    U_SRC1_BASE_ADDR_L              SRC1_BASE_ADDR_L                 ; /* 0xc4 */
    U_SRC1_STRIDE                   SRC1_STRIDE                      ; /* 0xc8 */
    U_BLENDING_MODE                 BLENDING_MODE                    ; /* 0xcc */
    U_LAY0_IN_SIZE                  LAY0_IN_SIZE                     ; /* 0xd0 */
    U_LAY1_IN_SIZE                  LAY1_IN_SIZE                     ; /* 0xd4 */
    U_LEFT_POSITION                 LEFT_POSITION                    ; /* 0xd8 */
    unsigned int                    reserved_4                       ; /* 0xdc */
    U_COEF_ALPHA                    COEF_ALPHA                       ; /* 0xe0 */
    U_COEF_BETA                     COEF_BETA                        ; /* 0xe4 */
    U_COEF_GAMMA                    COEF_GAMMA                       ; /* 0xe8 */

} S_PYRAMID_REGS_REGS_TYPE;

/* Declare the struct pointor of the module PYRAMID_REGS */
extern S_PYRAMID_REGS_REGS_TYPE *gopPYRAMID_REGSAllReg;


#endif /* VPC_PIPE_MILAN_PYRAMID_NMANAGER_REG_C_UNION_DEFINE_H */
