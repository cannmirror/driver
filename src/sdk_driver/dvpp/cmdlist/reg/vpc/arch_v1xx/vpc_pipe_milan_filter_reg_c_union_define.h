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
#ifndef VPC_PIPELINE_FILTER_NMANAGER_REG_C_UNION_DEFINE_H__
#define VPC_PIPELINE_FILTER_NMANAGER_REG_C_UNION_DEFINE_H__

/* Define the union U_FILTER_CTRL0 */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    filter_en             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 7   ; /* [7..1]  */
        unsigned int    filter_mode_sel       : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 22  ; /* [31..10]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_CTRL0;

/* Define the union U_FILTER_CTRL1 */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    filter_ksize_x        : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    filter_ksize_y        : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 22  ; /* [31..10]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_CTRL1;

/* Define the union U_FILTER_INSIZE */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    in_width              : 16  ; /* [15..0]  */
        unsigned int    in_height             : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_INSIZE;

/* Define the union U_FILTER_OUTSIZE */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    out_width             : 16  ; /* [15..0]  */
        unsigned int    out_height            : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_OUTSIZE;

/* Define the union U_FILTER_PADDING_MODE */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    v_padding_sel         : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    h_padding_sel         : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    dir_priority          : 1   ; /* [16]  */
        unsigned int    reserved_2            : 15  ; /* [31..17]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_PADDING_MODE;

/* Define the union U_FILTER_H_PADDING_VALUE1 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int h_padding_value_ch1    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE1;
/* Define the union U_FILTER_H_PADDING_VALUE2 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int h_padding_value_ch2    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE2;
/* Define the union U_FILTER_H_PADDING_VALUE3 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int h_padding_value_ch3    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE3;
/* Define the union U_FILTER_V_PADDING_VALUE1 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int v_padding_value_ch1    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE1;
/* Define the union U_FILTER_V_PADDING_VALUE2 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int v_padding_value_ch2    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE2;
/* Define the union U_FILTER_V_PADDING_VALUE3 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int v_padding_value_ch3    : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE3;
/* Define the union U_FILTER_ROUND_MODE */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    filter_rnd_mode       : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_ROUND_MODE;

/* Define the union U_FILTER_STRIDES */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    filter_xstride        : 16  ; /* [15..0]  */
        unsigned int    filter_ystride        : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_STRIDES;

/* Define the union U_FILTER_START_POS */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    index_ileft           : 16  ; /* [15..0]  */
        unsigned int    index_itop            : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_START_POS;

/* Define the union U_FILTER_END_POS */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    index_iright          : 16  ; /* [15..0]  */
        unsigned int    index_ibottom         : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_END_POS;

/* Define the union U_FILTER_BLUR_CTRL */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    blur_mode_sel         : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 5   ; /* [7..3]  */
        unsigned int    blur_edge_bypass      : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_BLUR_CTRL;

/* Define the union U_FILTER_COEFF1 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y0_x0        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF1;
/* Define the union U_FILTER_COEFF2 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y0_x1        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF2;
/* Define the union U_FILTER_COEFF3 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y0_x2        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF3;
/* Define the union U_FILTER_COEFF4 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y0_x3        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF4;
/* Define the union U_FILTER_COEFF5 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y0_x4        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF5;
/* Define the union U_FILTER_COEFF6 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y1_x0        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF6;
/* Define the union U_FILTER_COEFF7 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y1_x1        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF7;
/* Define the union U_FILTER_COEFF8 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y1_x2        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF8;
/* Define the union U_FILTER_COEFF9 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y1_x3        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF9;
/* Define the union U_FILTER_COEFF10 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y1_x4        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF10;
/* Define the union U_FILTER_COEFF11 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y2_x0        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF11;
/* Define the union U_FILTER_COEFF12 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y2_x1        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF12;
/* Define the union U_FILTER_COEFF13 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y2_x2        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF13;
/* Define the union U_FILTER_COEFF14 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y2_x3        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF14;
/* Define the union U_FILTER_COEFF15 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y2_x4        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF15;
/* Define the union U_FILTER_COEFF16 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y3_x0        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF16;
/* Define the union U_FILTER_COEFF17 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y3_x1        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF17;
/* Define the union U_FILTER_COEFF18 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y3_x2        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF18;
/* Define the union U_FILTER_COEFF19 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y3_x3        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF19;
/* Define the union U_FILTER_COEFF20 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y3_x4        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF20;
/* Define the union U_FILTER_COEFF21 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y4_x0        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF21;
/* Define the union U_FILTER_COEFF22 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y4_x1        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF22;
/* Define the union U_FILTER_COEFF23 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y4_x2        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF23;
/* Define the union U_FILTER_COEFF24 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y4_x3        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF24;
/* Define the union U_FILTER_COEFF25 */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int f5x5_coef_y4_x4        : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF25;
/* Define the union U_FILTER_SCALE */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int filter_scale           : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_SCALE;
/* Define the union U_FILTER_DELTA */
typedef union {
    /* Define the struct bits  */
    struct {
        unsigned int filter_delta           : 32  ; /* [31..0]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_DELTA;
/* Define the union U_FILTER_SORT_CTRL */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    sort_mode_sel         : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_SORT_CTRL;

/* Define the union U_FILTER_SORT_MASK */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    sort_mask             : 25  ; /* [24..0]  */
        unsigned int    reserved_0            : 7   ; /* [31..25]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_SORT_MASK;

/* Define the union U_FILTER_INTEGRAL_CTRL */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    integral_mode_sel     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    integral_type         : 1   ; /* [4]  */
        unsigned int    reserved_1            : 3   ; /* [7..5]  */
        unsigned int    integral_first_line_padding_0_out : 1   ; /* [8]  */
        unsigned int    integral_first_col_padding_0_out : 1   ; /* [9]  */
        unsigned int    reserved_2            : 22  ; /* [31..10]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL;

/* Define the union U_FILTER_INTEGRAL_CTRL1 */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    integral_clr          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL1;

/* Define the union U_FILTER_INTEGRAL_CTRL2 */
typedef union {
    /* Define the struct bits */
    struct {
        unsigned int    integral_hmin         : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL2;

// ==============================================================================
/* Define the global struct */
typedef struct {
    U_FILTER_CTRL0                  FILTER_CTRL0                     ; /* 0x0 */
    U_FILTER_CTRL1                  FILTER_CTRL1                     ; /* 0x4 */
    U_FILTER_INSIZE                 FILTER_INSIZE                    ; /* 0x8 */
    U_FILTER_OUTSIZE                FILTER_OUTSIZE                   ; /* 0xc */
    U_FILTER_PADDING_MODE           FILTER_PADDING_MODE              ; /* 0x10 */
    U_FILTER_H_PADDING_VALUE1       FILTER_H_PADDING_VALUE1          ; /* 0x14 */
    U_FILTER_H_PADDING_VALUE2       FILTER_H_PADDING_VALUE2          ; /* 0x18 */
    U_FILTER_H_PADDING_VALUE3       FILTER_H_PADDING_VALUE3          ; /* 0x1c */
    U_FILTER_V_PADDING_VALUE1       FILTER_V_PADDING_VALUE1          ; /* 0x20 */
    U_FILTER_V_PADDING_VALUE2       FILTER_V_PADDING_VALUE2          ; /* 0x24 */
    U_FILTER_V_PADDING_VALUE3       FILTER_V_PADDING_VALUE3          ; /* 0x28 */
    U_FILTER_ROUND_MODE             FILTER_ROUND_MODE                ; /* 0x2c */
    U_FILTER_STRIDES                FILTER_STRIDES                   ; /* 0x30 */
    U_FILTER_START_POS              FILTER_START_POS                 ; /* 0x34 */
    U_FILTER_END_POS                FILTER_END_POS                   ; /* 0x38 */
    unsigned int                    reserved_0                       ; /* 0x3c */
    U_FILTER_BLUR_CTRL              FILTER_BLUR_CTRL                 ; /* 0x40 */
    U_FILTER_COEFF1                 FILTER_COEFF1                    ; /* 0x44 */
    U_FILTER_COEFF2                 FILTER_COEFF2                    ; /* 0x48 */
    U_FILTER_COEFF3                 FILTER_COEFF3                    ; /* 0x4c */
    U_FILTER_COEFF4                 FILTER_COEFF4                    ; /* 0x50 */
    U_FILTER_COEFF5                 FILTER_COEFF5                    ; /* 0x54 */
    U_FILTER_COEFF6                 FILTER_COEFF6                    ; /* 0x58 */
    U_FILTER_COEFF7                 FILTER_COEFF7                    ; /* 0x5c */
    U_FILTER_COEFF8                 FILTER_COEFF8                    ; /* 0x60 */
    U_FILTER_COEFF9                 FILTER_COEFF9                    ; /* 0x64 */
    U_FILTER_COEFF10                FILTER_COEFF10                   ; /* 0x68 */
    U_FILTER_COEFF11                FILTER_COEFF11                   ; /* 0x6c */
    U_FILTER_COEFF12                FILTER_COEFF12                   ; /* 0x70 */
    U_FILTER_COEFF13                FILTER_COEFF13                   ; /* 0x74 */
    U_FILTER_COEFF14                FILTER_COEFF14                   ; /* 0x78 */
    U_FILTER_COEFF15                FILTER_COEFF15                   ; /* 0x7c */
    U_FILTER_COEFF16                FILTER_COEFF16                   ; /* 0x80 */
    U_FILTER_COEFF17                FILTER_COEFF17                   ; /* 0x84 */
    U_FILTER_COEFF18                FILTER_COEFF18                   ; /* 0x88 */
    U_FILTER_COEFF19                FILTER_COEFF19                   ; /* 0x8c */
    U_FILTER_COEFF20                FILTER_COEFF20                   ; /* 0x90 */
    U_FILTER_COEFF21                FILTER_COEFF21                   ; /* 0x94 */
    U_FILTER_COEFF22                FILTER_COEFF22                   ; /* 0x98 */
    U_FILTER_COEFF23                FILTER_COEFF23                   ; /* 0x9c */
    U_FILTER_COEFF24                FILTER_COEFF24                   ; /* 0xa0 */
    U_FILTER_COEFF25                FILTER_COEFF25                   ; /* 0xa4 */
    U_FILTER_SCALE                  FILTER_SCALE                     ; /* 0xa8 */
    U_FILTER_DELTA                  FILTER_DELTA                     ; /* 0xac */
    unsigned int                    reserved_1[4]                    ; /* 0xb0~0xbc */
    U_FILTER_SORT_CTRL              FILTER_SORT_CTRL                 ; /* 0xc0 */
    U_FILTER_SORT_MASK              FILTER_SORT_MASK                 ; /* 0xc4 */
    unsigned int                    reserved_2[2]                    ; /* 0xc8~0xcc */
    U_FILTER_INTEGRAL_CTRL          FILTER_INTEGRAL_CTRL             ; /* 0xd0 */
    U_FILTER_INTEGRAL_CTRL1         FILTER_INTEGRAL_CTRL1            ; /* 0xd4 */
    U_FILTER_INTEGRAL_CTRL2         FILTER_INTEGRAL_CTRL2            ; /* 0xd8 */
} S_VPC_FILTER_NMANAGER_REGS_TYPE;

/* Declare the struct pointor of the module VPC_FILTER_NMANAGER */
extern S_VPC_FILTER_NMANAGER_REGS_TYPE *gopVPC_FILTER_NMANAGERAllReg;

#endif // #ifndef VPC_PIPELINE_FILTER_NMANAGER_REG_C_UNION_DEFINE_H__
