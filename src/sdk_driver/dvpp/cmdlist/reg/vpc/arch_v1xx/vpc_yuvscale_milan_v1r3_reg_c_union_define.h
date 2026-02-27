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

#ifndef VPC_YUVSCALE_MILAN_V1R3_REG_C_UNION_DEFINE_H
#define VPC_YUVSCALE_MILAN_V1R3_REG_C_UNION_DEFINE_H

/* Define the union U_IHLEFT_INT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ihleft_int
        /*
         * 输入左边界整数部分，边界数据格式（16.20）
         * 固定成0，如果需要做CROP，推荐用precrop。
         */
        unsigned int    ihleft_int            : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IHLEFT_INT;

/* Define the union U_IHLEFT_DEC */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ihleft_dec
        /*
         * 输入左边界小数部分，边界数据格式（16.20）
         * 固定成0，如果需要做CROP，推荐用precrop。
         */
        unsigned int    ihleft_dec            : 20  ; /* [19..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 12  ; /* [31..20] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IHLEFT_DEC;

/* Define the union U_IHRIGHT_INT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ihright_int
        /*
         * 输入右边界整数部分，边界数据格式（16.20）
         * 需要配置准确值，如果需要做CROP，推荐用precrop。
         * 注意：
         * 配置必须满足 ihright = ihleft+hinc (ohsize-1)
         * 当实际输入宽度iwidth小于64时，不能使用切图功能，即ihright需要配置准确。
         */
        unsigned int    ihright_int           : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IHRIGHT_INT;

/* Define the union U_IHRIGHT_DEC */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ihright_dec
        /*
         * 输入右边界小数部分，边界数据格式（16.20）
         * 需要配置准确值，如果需要做CROP，推荐用precrop。
         * 注意：
         * 配置必须满足 ihright = ihleft+hinc (ohsize-1)
         * 当实际输入宽度iwidth小于64时，不能使用切图功能，即ihright需要配置准确。
         */
        unsigned int    ihright_dec           : 20  ; /* [19..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 12  ; /* [31..20] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IHRIGHT_DEC;

/* Define the union U_IVTOP_INT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ivtop_int
        /*
         * 输入上边界整数部分，边界数据格式（16.20）
         * 固定成0，如果需要做CROP，推荐用precrop。
         */
        unsigned int    ivtop_int             : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IVTOP_INT;

/* Define the union U_IVTOP_DEC */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ivtop_dec
        /*
         * 输入上边界小数部分，边界数据格式（16.20）
         * 固定成0，如果需要做CROP，推荐用precrop。
         */
        unsigned int    ivtop_dec             : 20  ; /* [19..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 12  ; /* [31..20] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IVTOP_DEC;

/* Define the union U_IVBOTTOM_INT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ivbottom_int
        /*
         * 输入下边界整数部分，边界数据格式（16.20）
         * 需要配置准确值，如果需要做CROP，推荐用precrop。
         * 注意：
         * 配置必须满足 ivbottom=ivtop+vinc(ovsize-1)
         */
        unsigned int    ivbottom_int          : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IVBOTTOM_INT;

/* Define the union U_IVBOTTOM_DEC */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: ivbottom_dec
        /*
         * 输入下边界小数部分，边界数据格式（16.20）
         * 需要配置准确值，如果需要做CROP，推荐用precrop。
         * 注意：
         * 配置必须满足 ivbottom=ivtop+vinc(ovsize-1)
         */
        unsigned int    ivbottom_dec          : 20  ; /* [19..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 12  ; /* [31..20] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IVBOTTOM_DEC;

/* Define the union U_UV_HOFFSET */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: uv_hoffset
        /*
         * H方向色度分量相位偏移 
         * 取值范围0~31；
         */
        unsigned int    uv_hoffset            : 5   ; /* [4..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 27  ; /* [31..5] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_UV_HOFFSET;

/* Define the union U_UV_VOFFSET */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: uv_voffset
        /*
         * V方向色度分量相位偏移 
         * 取值范围0~31；
         * scl_format配置为1时不生效
         * 图像放大时不能配置
         */
        unsigned int    uv_voffset            : 5   ; /* [4..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 27  ; /* [31..5] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_UV_VOFFSET;

/* Define the union U_BYPASS */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: bypass
        /*
         * SCALER bypass ??
         * 00: 不bypass
         * 01: H方向bypass
         * 10 :V方向bypass
         * 11 :H和V方向均bypass.  
         * 注意：
         * yuvscaler模块工作时，不能使用affine和rot模块
         */
        unsigned int    bypass                : 2   ; /* [1..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 2   ; /* [3..2] */
        // Comment of field: vfir_first
        /*
         * 滤波先后顺序选择
         * 0：先H后V
         * 1：先V后H
         */
        unsigned int    vfir_first            : 1   ; /* [4] */
        // Comment of field: reserved_1
        /*
         * reserved
         */
        unsigned int    reserved_1            : 3   ; /* [7..5] */
        // Comment of field: mid_en_hy
        /*
         * 中值滤波使能开关，滤除高频噪声
         * H方向Y分量
         */
        unsigned int    mid_en_hy             : 1   ; /* [8] */
        // Comment of field: mid_en_huv
        /*
         * 中值滤波使能开关，滤除高频噪声
         * H方向UV分量
         */
        unsigned int    mid_en_huv            : 1   ; /* [9] */
        // Comment of field: mid_en_vy
        /*
         * 中值滤波使能开关，滤除高频噪声
         * V方向Y分量
         */
        unsigned int    mid_en_vy             : 1   ; /* [10] */
        // Comment of field: mid_en_vuv
        /*
         * 中值滤波使能开关，滤除高频噪声
         * V方向UV分量
         */
        unsigned int    mid_en_vuv            : 1   ; /* [11] */
        // Comment of field: reserved_2
        /*
         * reserved
         */
        unsigned int    reserved_2            : 20  ; /* [31..12] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_BYPASS;

/* Define the union U_FORMAT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: scl_format
        /*
         * 缩放时使用的数据格式
         * 0:YUV422 or Y8
         * 1:YUV420
         * 注意：
         * 配置为1时，pipeline kernel format必须配置为YUV422，且输入输出高度必须为偶数
         * 模块内部对YUV422数据抽行下采样之后进行缩放
         * 配置为1时，uv_voffset不生效
         * 配置为1时，V方向uv仅支持4tap滤波系数
         */
        unsigned int    scl_format            : 1   ; /* [0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 7  ; /* [7..1] */
        unsigned int    phase_mode            : 1  ; /* [8] */
        unsigned int    reserved_1            : 7  ; /* [15..9] */
        // Comment of field: halflinemode
        /*
         * reserved
         */
        unsigned int    halflinemode          : 1   ; /* [16] */
        // Comment of field: reserved_1
        /*
         * reserved
         */
        unsigned int    reserved_2            : 15  ; /* [31..17] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_FORMAT;

/* Define the union U_IWIDTH */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: iwidth
        /*
         * 输入图像宽度
         */
        unsigned int    iwidth                : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IWIDTH;

/* Define the union U_IHEIGHT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: iheight
        /*
         * 输入图像高度
         */
        unsigned int    iheight               : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_IHEIGHT;

/* Define the union U_OWIDTH */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: owidth
        /*
         * 输出图像宽度
         */
        unsigned int    owidth                : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_OWIDTH;

/* Define the union U_OHEIGHT */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: oheight
        /*
         * 输出图像高度
         */
        unsigned int    oheight               : 16  ; /* [15..0] */
        // Comment of field: reserved_0
        /*
         * reserved
         */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_OHEIGHT;

/* Define the union U_COEFF_H_Y0 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: hcoeff0y
        /*
         * hcoeff0y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff0y              : 10  ; /* [9..0] */
        // Comment of field: hcoeff1y
        /*
         * hcoeff1y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff1y              : 10  ; /* [19..10] */
        // Comment of field: hcoeff2y
        /*
         * hcoeff2y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff2y              : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_H_Y0;

/* Define the union U_COEFF_H_Y1 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: hcoeff3y
        /*
         * hcoeff3y[phase]，数据格式（s,9.0）
         * coeff 取值范围 -512 (0x200) to 511 (0x1FF) 
         * phase 取值范围 0 to 31
         * phase可配置区间 0 to 16
         * 当phase大于16时，由phase 1 to 15反相得到，即
         * phase_17=reverse（phase_15）
         * phase_18=reverse（phase_14）
         * phase_n =reverse（phase_(32-n)）
         * reverse功能为对称调换coeff顺序，即
         * coeff0和coeff7换位置
         * coeff1和coeff6换位置，以此类推
         * 注意：
         * 1.滤波窗为8tap，中心系数hcoeff3y不能配置为0
         * 2.兼容6tap时，中心系数位置不变，hcoeff0y和hcoeff7y必须配置为0
         * 3.兼容4tap时，中心系数位置不变，hcoeff0y，hcoeff1y，hcoeff6y，hcoeff7y必须配置为0
         * 4.hcoeff0y + hcoeff1y + hcoeff2y + hcoeff3y + hcoeff4y + hcoeff5y + hcoeff6y + hcoeff7y = 512
         * 5.中心系数hcoeff3y为511并且其他系数为0时，输出复制tap中心点像素值
         */
        unsigned int    hcoeff3y              : 10  ; /* [9..0] */
        // Comment of field: hcoeff4y
        /*
         * hcoeff4y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff4y              : 10  ; /* [19..10] */
        // Comment of field: hcoeff5y
        /*
         * hcoeff5y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff5y              : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_H_Y1;

/* Define the union U_COEFF_H_Y2 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: hcoeff6y
        /*
         * hcoeff6y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff6y              : 10  ; /* [9..0] */
        // Comment of field: hcoeff7y
        /*
         * hcoeff7y[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff3y
         */
        unsigned int    hcoeff7y              : 10  ; /* [19..10] */
        unsigned int    reserved_0            : 12  ; /* [31..20] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_H_Y2;

/* Define the union U_COEFF_V_Y0 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: vcoeff0y
        /*
         * vcoeff0y[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2y
         */
        unsigned int    vcoeff0y              : 10  ; /* [9..0] */
        // Comment of field: vcoeff1y
        /*
         * vcoeff1y[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2y
         */
        unsigned int    vcoeff1y              : 10  ; /* [19..10] */
        // Comment of field: vcoeff2y
        /*
         * vcoeff2y[phase]，数据格式（s,9.0）
         * coeff 取值范围 -512 (0x200) to 511 (0x1FF) 
         * phase 取值范围 0 to 31
         * phase可配置区间 0 to 16
         * 当phase大于16时，由phase 1 to 15反相得到，即
         * phase_17=reverse（phase_15）
         * phase_18=reverse（phase_14）
         * phase_n =reverse（phase_(32-n)）
         * reverse功能为对称调换coeff顺序，即
         * coeff0和coeff5换位置
         * coeff1和coeff4换位置,以此类推
         * 注意：
         * 1.滤波窗为6tap，中心系数vcoeff2y不能配置为0
         * 2.兼容4tap时，中心系数位置不变，vcoeff0y和vcoeff5y必须配置0
         * 3.vcoeff0y + vcoeff1y + vcoeff2y + vcoeff3y + vcoeff4y + vcoeff5y = 512
         * 4.中心系数vcoeff2y为511并且其他系数为0时，输出复制tap中心点像素值
         */
        unsigned int    vcoeff2y              : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_V_Y0;

/* Define the union U_COEFF_V_Y1 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: vcoeff3y
        /*
         * vcoeff3y[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2y
         */
        unsigned int    vcoeff3y              : 10  ; /* [9..0] */
        // Comment of field: vcoeff4y
        /*
         * vcoeff4y[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2y
         */
        unsigned int    vcoeff4y              : 10  ; /* [19..10] */
        // Comment of field: vcoeff5y
        /*
         * vcoeff5y[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2y
         */
        unsigned int    vcoeff5y              : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_V_Y1;

/* Define the union U_COEFF_H_UV0 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: hcoeff0uv
        /*
         * hcoeff0uv[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff2uv
         */
        unsigned int    hcoeff0uv             : 10  ; /* [9..0] */
        // Comment of field: hcoeff1uv
        /*
         * hcoeff1uv[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff2uv
         */
        unsigned int    hcoeff1uv             : 10  ; /* [19..10] */
        // Comment of field: hcoeff2uv
        /*
         * hcoeff2uv[phase]，数据格式（s,9.0）
         * coeff 取值范围 -512 (0x200) to 511 (0x1FF) 
         * phase 取值范围 0 to 31
         * phase可配置区间 0 to 16
         * 当phase大于16时，由phase 1 to 15反相得到，即
         * phase_17=reverse（phase_15）
         * phase_18=reverse（phase_14）
         * phase_n =reverse（phase_(32-n)）
         * reverse功能为对称调换coeff顺序，即
         * coeff0和coeff5换位置
         * coeff1和coeff4换位置,以此类推
         * 注意：
         * 1.滤波窗为6tap，中心系数hcoeff2uv不能配置为0
         * 2.兼容4tap时，中心系数位置不变，hcoeff0uv和hcoeff5uv配置0
         * 3.hcoeff0uv + hcoeff1uv + hcoeff2uv + hcoeff3uv + vcoeff4uv + vcoeff5uv = 512
         * 4.中心系数hcoeff2uv为511并且其他系数为0时，输出复制tap中心点像素值
         */
        unsigned int    hcoeff2uv             : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_H_UV0;

/* Define the union U_COEFF_H_UV1 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: hcoeff3uv
        /*
         * hcoeff3uv[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff2uv
         */
        unsigned int    hcoeff3uv             : 10  ; /* [9..0] */
        // Comment of field: hcoeff4uv
        /*
         * hcoeff4uv[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff2uv
         */
        unsigned int    hcoeff4uv             : 10  ; /* [19..10] */
        // Comment of field: hcoeff5uv
        /*
         * hcoeff5uv[phase]，数据格式（s,9.0）
         * 相关说明见hcoeff2uv
         */
        unsigned int    hcoeff5uv             : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_H_UV1;

/* Define the union U_COEFF_V_UV0 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: vcoeff0uv
        /*
         * vcoeff0uv[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2uv
         */
        unsigned int    vcoeff0uv             : 10  ; /* [9..0] */
        // Comment of field: vcoeff1uv
        /*
         * vcoeff1uv[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2uv
         */
        unsigned int    vcoeff1uv             : 10  ; /* [19..10] */
        // Comment of field: vcoeff2uv
        /*
         * vcoeff2uv[phase]，数据格式（s,9.0）
         * coeff 取值范围 -512 (0x200) to 511 (0x1FF) 
         * phase 取值范围 0 to 31
         * phase可配置区间 0 to 16
         * 当phase大于16时，由phase 1 to 15反相得到，即
         * phase_17=reverse（phase_15）
         * phase_18=reverse（phase_14）
         * phase_n =reverse（phase_(32-n)）
         * reverse功能为对称调换coeff顺序，即
         * coeff0和coeff5换位置
         * coeff1和coeff4换位置，以此类推
         * 注意：
         * 1.滤波窗为6tap，中心系数vcoeff2uv不能配置为0
         * 2.兼容4tap时，中心系数位置不变，vcoeff0uv和vcoeff5uv必须配置0
         * 3.vcoeff0uv + vcoeff1uv + vcoeff2uv + vcoeff3uv + vcoeff4uv + vcoeff5uv = 512
         * 4.中心系数vcoeff2uv为511并且其他系数为0时，输出像素值复制tap中心点像素值
         */
        unsigned int    vcoeff2uv             : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_V_UV0;

/* Define the union U_COEFF_V_UV1 */
typedef union {
    /* Define the struct bits */
    struct {
        // Comment of field: vcoeff3uv
        /*
         * vcoeff3uv[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2uv
         */
        unsigned int    vcoeff3uv             : 10  ; /* [9..0] */
        // Comment of field: vcoeff4uv
        /*
         * vcoeff4uv[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2uv
         */
        unsigned int    vcoeff4uv             : 10  ; /* [19..10] */
        // Comment of field: vcoeff5uv
        /*
         * vcoeff5uv[phase]，数据格式（s,9.0）
         * 相关说明见vcoeff2uv
         */
        unsigned int    vcoeff5uv             : 10  ; /* [29..20] */
        unsigned int    reserved_0            : 2   ; /* [31..30] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_COEFF_V_UV1;

#endif /* VPC_YUVSCALE_MILAN_V1R3_REG_C_UNION_DEFINE_H */
