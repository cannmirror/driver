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

#ifndef VPC_PIPE_MILAN_PIXAUG_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_PIXAUG_REG_C_UNION_DEFINE_H

/* Define the union U_MODE_SEL */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: mode_sel
        /*
         * 0:enhance(0) +contrast(1)+transform(2)；
         * 1:021;
         * 2:120;
         * 3:102;
         * 4:201;
         * 5:210.
         */
        unsigned int    mode_sel              : 3   ; /* [2..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 29  ; /* [31..3] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_MODE_SEL;

/* Define the union U_ENHANCE_EN */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: enhance_en
        /*
         * 0:disable
         * 1:enable
         */
        unsigned int    enhance_en            : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_ENHANCE_EN;

/* Define the union U_CONTRAST_EN */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: contrast_en
        /*
         * 0:disable
         * 1:enable
         */
        unsigned int    contrast_en           : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CONTRAST_EN;

/* Define the union U_TRANSFORM_EN */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: transform_en
        /*
         * 0:disable
         * 1:enable
         */
        unsigned int    transform_en          : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_EN;

/* Define the union U_ENHANCE_PARA0 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: delta
        /*
         * delta
         */
        unsigned int delta                  : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_ENHANCE_PARA0;
/* Define the union U_ENHANCE_PARA1 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: multiplier
        /*
         * multiplier
         */
        unsigned int multiplier             : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_ENHANCE_PARA1;
/* Define the union U_CONTRAST_PARA0 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: contrast_factor
        /*
         * contrast_factor
         */
        unsigned int contrast_factor        : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CONTRAST_PARA0;
/* Define the union U_CONTRAST_PARA1 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: r_mean
        /*
         * r_mean
         */
        unsigned int r_mean                 : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CONTRAST_PARA1;
/* Define the union U_CONTRAST_PARA2 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: g_mean
        /*
         * g_mean
         */
        unsigned int g_mean                 : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CONTRAST_PARA2;
/* Define the union U_CONTRAST_PARA3 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: b_mean
        /*
         * b_mean
         */
        unsigned int b_mean                 : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CONTRAST_PARA3;
/* Define the union U_TRANSFORM_PARA0_0 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array0_0
        /*
         * array parameter(float)
         */
        unsigned int array0_0               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA0_0;
/* Define the union U_TRANSFORM_PARA0_1 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array0_1
        /*
         * array parameter(float)
         */
        unsigned int array0_1               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA0_1;
/* Define the union U_TRANSFORM_PARA0_2 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array0_2
        /*
         * array parameter(float)
         */
        unsigned int array0_2               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA0_2;
/* Define the union U_TRANSFORM_PARA0_3 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array0_3
        /*
         * array parameter(float)（3x3矩阵需要配为0）
         */
        unsigned int array0_3               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA0_3;
/* Define the union U_TRANSFORM_PARA1_0 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array1_0
        /*
         * array parameter(float)
         */
        unsigned int array1_0               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA1_0;
/* Define the union U_TRANSFORM_PARA1_1 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array1_1
        /*
         * array parameter(float)
         */
        unsigned int array1_1               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA1_1;
/* Define the union U_TRANSFORM_PARA1_2 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array1_2
        /*
         * array parameter(float)
         */
        unsigned int array1_2               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA1_2;
/* Define the union U_TRANSFORM_PARA1_3 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array1_3
        /*
         * array parameter(float)（3x3矩阵需要配为0）
         */
        unsigned int array1_3               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA1_3;
/* Define the union U_TRANSFORM_PARA2_0 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array2_0
        /*
         * array parameter(float)
         */
        unsigned int array2_0               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA2_0;
/* Define the union U_TRANSFORM_PARA2_1 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array2_1
        /*
         * array parameter(float)
         */
        unsigned int array2_1               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA2_1;
/* Define the union U_TRANSFORM_PARA2_2 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array2_2
        /*
         * array parameter(float)
         */
        unsigned int array2_2               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA2_2;
/* Define the union U_TRANSFORM_PARA2_3 */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: array2_3
        /*
         * array parameter(float)（3x3矩阵需要配为0）
         */
        unsigned int array2_3               : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_TRANSFORM_PARA2_3;
/* Define the union U_NORMALIZE_EN */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: normalize_en
        /*
         * 0:disable
         * 1:enable
         */
        unsigned int    normalize_en          : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_EN;

/* Define the union U_NORMALIZE_MODE */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: normalize_add_first
        /*
         * 0:multi first
         * 1:add first
         */
        unsigned int    normalize_add_first   : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_MODE;

/* Define the union U_NORMALIZE_SCALE_R */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_scale_r
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_scale_r      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_SCALE_R;
/* Define the union U_NORMALIZE_SCALE_G */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_scale_g
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_scale_g      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_SCALE_G;
/* Define the union U_NORMALIZE_SCALE_B */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_scale_b
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_scale_b      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_SCALE_B;
/* Define the union U_NORMALIZE_DELTA_R */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_delta_r
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_delta_r      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_DELTA_R;
/* Define the union U_NORMALIZE_DELTA_G */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_delta_g
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_delta_g      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_DELTA_G;
/* Define the union U_NORMALIZE_DELTA_B */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: normalize_delta_b
        /*
         * normalize parameter(float)
         */
        unsigned int normalize_delta_b      : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_NORMALIZE_DELTA_B;
/* Define the union U_CLIP_EN */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: clip_en
        /*
         * 0:clip disable,输出浮点数不做处理
         * 1:clip enable，输出浮点数按最大最小值做截取处理
         */
        unsigned int    clip_en               : 1   ; /* [0] */
        unsigned int    reserved_0            : 3   ; /* [3..1] */
        unsigned int    clip_mode             : 1   ; /* [4] */
        unsigned int    reserved_1            : 3   ; /* [7..5] */
        unsigned int    clip_above            : 1   ; /* [8] */
        unsigned int    reserved_2            : 23  ; /* [31..9] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_EN;

/* Define the union U_CLIP_MAX_VALUE_R */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_max_value_r
        /*
         * clip max value(float)
         */
        unsigned int clip_max_value_r       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MAX_VALUE_R;
/* Define the union U_CLIP_MIN_VALUE_R */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_min_value_r
        /*
         * clip min value(float)
         */
        unsigned int clip_min_value_r       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MIN_VALUE_R;
/* Define the union U_CLIP_MAX_VALUE_G */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_max_value_g
        /*
         * clip max value(float)
         */
        unsigned int clip_max_value_g       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MAX_VALUE_G;
/* Define the union U_CLIP_MIN_VALUE_G */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_min_value_g
        /*
         * clip min value(float)
         */
        unsigned int clip_min_value_g       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MIN_VALUE_G;
/* Define the union U_CLIP_MAX_VALUE_B */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_max_value_b
        /*
         * clip max value(float)
         */
        unsigned int clip_max_value_b       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MAX_VALUE_B;
/* Define the union U_CLIP_MIN_VALUE_B */
typedef union {
    /* Define the struct bits  */
    struct {
        // Comment of field: clip_min_value_b
        /*
         * clip min value(float)
         */
        unsigned int clip_min_value_b       : 32  ;/* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_CLIP_MIN_VALUE_B;

/* Define the global struct */
typedef struct {
    U_MODE_SEL                      MODE_SEL                         ; /* 0x0 */
    U_ENHANCE_EN                    ENHANCE_EN                       ; /* 0x4 */
    unsigned int                    reserved_0                       ; /* 0x8 */
    U_CONTRAST_EN                   CONTRAST_EN                      ; /* 0xc */
    unsigned int                    reserved_1[60]                   ; /* 0x10~0xfc */
    U_TRANSFORM_EN                  TRANSFORM_EN                     ; /* 0x100 */
    unsigned int                    reserved_2[63]                   ; /* 0x104~0x1fc */
    U_ENHANCE_PARA0                 ENHANCE_PARA0                    ; /* 0x200 */
    U_ENHANCE_PARA1                 ENHANCE_PARA1                    ; /* 0x204 */
    U_CONTRAST_PARA0                CONTRAST_PARA0                   ; /* 0x208 */
    U_CONTRAST_PARA1                CONTRAST_PARA1                   ; /* 0x20c */
    U_CONTRAST_PARA2                CONTRAST_PARA2                   ; /* 0x210 */
    U_CONTRAST_PARA3                CONTRAST_PARA3                   ; /* 0x214 */
    unsigned int                    reserved_3[58]                   ; /* 0x218~0x2fc */
    U_TRANSFORM_PARA0_0             TRANSFORM_PARA0_0                ; /* 0x300 */
    U_TRANSFORM_PARA0_1             TRANSFORM_PARA0_1                ; /* 0x304 */
    U_TRANSFORM_PARA0_2             TRANSFORM_PARA0_2                ; /* 0x308 */
    U_TRANSFORM_PARA0_3             TRANSFORM_PARA0_3                ; /* 0x30c */
    U_TRANSFORM_PARA1_0             TRANSFORM_PARA1_0                ; /* 0x310 */
    U_TRANSFORM_PARA1_1             TRANSFORM_PARA1_1                ; /* 0x314 */
    U_TRANSFORM_PARA1_2             TRANSFORM_PARA1_2                ; /* 0x318 */
    U_TRANSFORM_PARA1_3             TRANSFORM_PARA1_3                ; /* 0x31c */
    U_TRANSFORM_PARA2_0             TRANSFORM_PARA2_0                ; /* 0x320 */
    U_TRANSFORM_PARA2_1             TRANSFORM_PARA2_1                ; /* 0x324 */
    U_TRANSFORM_PARA2_2             TRANSFORM_PARA2_2                ; /* 0x328 */
    U_TRANSFORM_PARA2_3             TRANSFORM_PARA2_3                ; /* 0x32c */
    U_NORMALIZE_EN                  NORMALIZE_EN                     ; /* 0x330 */
    U_NORMALIZE_MODE                NORMALIZE_MODE                   ; /* 0x334 */
    U_NORMALIZE_SCALE_R             NORMALIZE_SCALE_R                ; /* 0x338 */
    U_NORMALIZE_SCALE_G             NORMALIZE_SCALE_G                ; /* 0x33c */
    U_NORMALIZE_SCALE_B             NORMALIZE_SCALE_B                ; /* 0x340 */
    U_NORMALIZE_DELTA_R             NORMALIZE_DELTA_R                ; /* 0x344 */
    U_NORMALIZE_DELTA_G             NORMALIZE_DELTA_G                ; /* 0x348 */
    U_NORMALIZE_DELTA_B             NORMALIZE_DELTA_B                ; /* 0x34c */
    U_CLIP_EN                       CLIP_EN                          ; /* 0x350 */
    U_CLIP_MAX_VALUE_R              CLIP_MAX_VALUE_R                 ; /* 0x354 */
    U_CLIP_MIN_VALUE_R              CLIP_MIN_VALUE_R                 ; /* 0x358 */
    U_CLIP_MAX_VALUE_G              CLIP_MAX_VALUE_G                 ; /* 0x35c */
    U_CLIP_MIN_VALUE_G              CLIP_MIN_VALUE_G                 ; /* 0x360 */
    U_CLIP_MAX_VALUE_B              CLIP_MAX_VALUE_B                 ; /* 0x364 */
    U_CLIP_MIN_VALUE_B              CLIP_MIN_VALUE_B                 ; /* 0x368 */
} S_VPC_PIXAUG_REGS_REGS_TYPE;

//==============================================================================
/* Define the union of all registers */
typedef union {
    unsigned int    u32;

    U_MODE_SEL             MODE_SEL;
    U_ENHANCE_EN           ENHANCE_EN;
    U_CONTRAST_EN          CONTRAST_EN;
    U_TRANSFORM_EN         TRANSFORM_EN;
    U_ENHANCE_PARA0        ENHANCE_PARA0;
    U_ENHANCE_PARA1        ENHANCE_PARA1;
    U_CONTRAST_PARA0       CONTRAST_PARA0;
    U_CONTRAST_PARA1       CONTRAST_PARA1;
    U_CONTRAST_PARA2       CONTRAST_PARA2;
    U_CONTRAST_PARA3       CONTRAST_PARA3;
    U_TRANSFORM_PARA0_0    TRANSFORM_PARA0_0;
    U_TRANSFORM_PARA0_1    TRANSFORM_PARA0_1;
    U_TRANSFORM_PARA0_2    TRANSFORM_PARA0_2;
    U_TRANSFORM_PARA0_3    TRANSFORM_PARA0_3;
    U_TRANSFORM_PARA1_0    TRANSFORM_PARA1_0;
    U_TRANSFORM_PARA1_1    TRANSFORM_PARA1_1;
    U_TRANSFORM_PARA1_2    TRANSFORM_PARA1_2;
    U_TRANSFORM_PARA1_3    TRANSFORM_PARA1_3;
    U_TRANSFORM_PARA2_0    TRANSFORM_PARA2_0;
    U_TRANSFORM_PARA2_1    TRANSFORM_PARA2_1;
    U_TRANSFORM_PARA2_2    TRANSFORM_PARA2_2;
    U_TRANSFORM_PARA2_3    TRANSFORM_PARA2_3;
    U_NORMALIZE_EN         NORMALIZE_EN;
    U_NORMALIZE_MODE       NORMALIZE_MODE;
    U_NORMALIZE_SCALE_R    NORMALIZE_SCALE_R;
    U_NORMALIZE_SCALE_G    NORMALIZE_SCALE_G;
    U_NORMALIZE_SCALE_B    NORMALIZE_SCALE_B;
    U_NORMALIZE_DELTA_R    NORMALIZE_DELTA_R;
    U_NORMALIZE_DELTA_G    NORMALIZE_DELTA_G;
    U_NORMALIZE_DELTA_B    NORMALIZE_DELTA_B;
    U_CLIP_EN              CLIP_EN;
    U_CLIP_MAX_VALUE_R     CLIP_MAX_VALUE_R;
    U_CLIP_MIN_VALUE_R     CLIP_MIN_VALUE_R;
    U_CLIP_MAX_VALUE_G     CLIP_MAX_VALUE_G;
    U_CLIP_MIN_VALUE_G     CLIP_MIN_VALUE_G;
    U_CLIP_MAX_VALUE_B     CLIP_MAX_VALUE_B;
    U_CLIP_MIN_VALUE_B     CLIP_MIN_VALUE_B;
} U_VPC_PIXAUG_REGS_REGS_TYPE;

/* Declare the struct pointer of the module VPC_PIXAUG_REGS */
extern S_VPC_PIXAUG_REGS_REGS_TYPE *gopVPC_PIXAUG_REGSAllReg;


#endif /* VPC_PIPE_MILAN_PIXAUG_REG_C_UNION_DEFINE_H */
