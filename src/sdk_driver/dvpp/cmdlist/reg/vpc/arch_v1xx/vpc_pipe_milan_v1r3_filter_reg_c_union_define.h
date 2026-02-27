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

#ifndef VPC_PIPE_MILAN_V1R3_FILTER_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_V1R3_FILTER_REG_C_UNION_DEFINE_H

typedef union {
    struct {
        /*
         * filter enable 使能
         * 注意：resize2使能的时候，filter_en必须设为0
         */
        unsigned int    filter_en             : 1   ; /* [0] */
        unsigned int    reserved_0            : 7   ; /* [7..1] */
        /*
         * Mode_sel
         * 00： filter blur   2D卷积滤波
         * 01： sort          排序滤波（最大值、最小值和中值滤波）
         * 10： integral      积分图 （reserved）
         * 11:  reserved
         */
        unsigned int    filter_mode_sel       : 2   ; /* [9..8] */
        unsigned int    reserved_1            : 6   ; /* [15..10] */
        /*
         * 滤波时使用的数据格式
         * 0:其他YUV420之外格式，如RGB or YUV444 or YUV422 or Y8
         * 1:YUV420
         * 注意：
         * 配置为1时，pipeline kernel format必须配置为YUV422，且输入输出高度必须为偶数
         * 模块内部对YUV422数据抽行下采样之后进行滤波
         */
        unsigned int    filter_format         : 1   ; /* [16] */
        unsigned int    reserved_2            : 15  ; /* [31..17] */
    } bits;
    unsigned int    u32;
} U_FILTER_CTRL0;

typedef union {
    struct {
        /*
         * x方向滤波规格：
         * 00:1
         * 01:3
         * 10:5
         * 11:reserved
         */
        unsigned int    filter_ksize_x        : 2   ; /* [1..0] */
        unsigned int    reserved_0            : 6   ; /* [7..2] */
        /*
         * y方向滤波规格：
         * 00:1
         * 01:3
         * 10:5
         * 11:reserved
         */
        unsigned int    filter_ksize_y        : 2   ; /* [9..8] */
        unsigned int    reserved_1            : 22  ; /* [31..10] */
    } bits;

    unsigned int    u32;
} U_FILTER_CTRL1;

typedef union {
    struct {
        /*
         * 输入图像宽度,使用时必须配置准确
         * 实际SIZE“-1”配置
         */
        unsigned int    in_width              : 16  ; /* [15..0] */
        /*
         * 输入图像高度,使用时必须配置准确
         * 实际SIZE“-1”配置
         */
        unsigned int    in_height             : 16  ; /* [31..16] */
    } bits;
    unsigned int    u32;
} U_FILTER_INSIZE;

typedef union {
    struct {
        /*
         * 输出图像宽度,使用时必须配置准确
         * 实际SIZE“-1”配置；
         */
        unsigned int    out_width             : 16  ; /* [15..0] */
        /*
         * 输出图像高度,使用时必须配置准确
         * 实际SIZE“-1”配置；
         */
        unsigned int    out_height            : 16  ; /* [31..16] */
    } bits;

    unsigned int    u32;
} U_FILTER_OUTSIZE;

typedef union {
    struct {
        /*
         * v_padding_sel    垂直方向（上下边界）的padding模式选择
         * v_Padding_sel = 2’b00  CONSTANT模式，边界padding 寄存器值Padding_value
         * v_Padding_sel = 2’b01  REPLICATE模式，边界padding 边界padding Duplicate（相邻像素）
         * v_Padding_sel = 2’b10  REFLECT101模式，边界padding 镜像像素
         * v_Padding_sel = 2’b11  Reserved
         */
        unsigned int    v_padding_sel         : 2   ; /* [1..0] */
        unsigned int    reserved_0            : 6   ; /* [7..2] */
        /*
         * h_padding_sel    水平方向（左右边界）的padding模式选择
         * h_Padding_sel = 2’b00  CONSTANT模式，边界padding 寄存器值Padding_value
         * h_Padding_sel = 2’b01  REPLICATE模式，边界padding 边界padding Duplicate（相邻像素）
         * h_Padding_sel = 2’b10  REFLECT101模式，边界padding 镜像像素
         * h_Padding_sel = 2’b11  Reserved
         */
        unsigned int    h_padding_sel         : 2   ; /* [9..8] */
        unsigned int    reserved_1            : 6   ; /* [15..10] */
        /*
         * 1'b0 padding vertical direction then horizontal direction;
         * 1'b1 padding horizontal direction then vertical direction.
         */
        unsigned int    dir_priority          : 1   ; /* [16] */
        unsigned int    reserved_2            : 15  ; /* [31..17] */
    } bits;

    unsigned int    u32;
} U_FILTER_PADDING_MODE;

typedef union {
    struct {
        /*
         * h_padding_sel水平方向选择填充的固定值。即h_padding_sel = 2’b00  边界padding 寄存器值h_padding_value
         * PS1:padding_value按{H，M，L}排列，H为高32bit，M为中间32bit，L为低32bit，共96bit。
         * PS2：三分量YUV或RGB888按{64'bxxx，y，u，v}或{64'bxxx，r，g，b}的顺序使用；三分量fp32 RGB按{r，g，b}的顺序使用；
         *      单分量U8或fp32，只使用96bit的低8bit或低32bit。
         * PS3:sort排序滤波只支持U8；
         * PS4:blur滤波的padding_value需转为fp32后配置。
         */
        unsigned int h_padding_value_l      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE1;

typedef union {
    struct {
        /*
         * h_padding_sel水平方向选择填充的固定值。即h_padding_sel = 2’b00  边界padding 寄存器值h_padding_value
         */
        unsigned int h_padding_value_m      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE2;

typedef union {
    struct {
        /*
         * h_padding_sel水平方向选择填充的固定值。即h_padding_sel = 2’b00  边界padding 寄存器值h_padding_value
         */
        unsigned int h_padding_value_h      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_H_PADDING_VALUE3;

typedef union {
    struct {
        /*
         * v_padding_sel垂直方向选择填充的固定值。即v_padding_sel = 2’b00  边界padding 寄存器值v_padding_value
         */
        unsigned int v_padding_value_l      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE1;

typedef union {
    struct {
        /*
         * v_padding_sel垂直方向选择填充的固定值。即v_padding_sel = 2’b00  边界padding 寄存器值v_padding_value
         */
        unsigned int v_padding_value_m      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE2;

typedef union {
    struct {
        /*
         * v_padding_sel垂直方向选择填充的固定值。即v_padding_sel = 2’b00  边界padding 寄存器值v_padding_value
         */
        unsigned int v_padding_value_h      : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_V_PADDING_VALUE3;

typedef union {
    struct {
        /*
         * 舍入模式：
         * 3'b000: IEEE round to nearest (even)四舍六入
         *     舍入到更近的浮点刻度，如果距离浮点刻度F1和F2相等，则取F1、F2中末尾为偶数的。
         * 3'b001: IEEE round to zero截断舍入
         *     舍入到离“零点”最近的浮点刻度。
         * 3'b010: IEEE round to positive infinity
         *     舍入到更大的数。
         * 3'b011: IEEE round to negative infinity
         *     舍入到更小的数。
         * 3'b100: Round to nearest up
         *     舍入到更近的浮点刻度，如果距离浮点刻度F1和F2相等，则取F1、F2距离“零点”最近的。
         * 3'b101: Round away from zero
         *     舍入到距离“零点”最远的那个数。
         * 3'b110: 四舍五入
         *     加0.5后截断
         * 3'b111: RESERVED
         * PS1：Ascend310B 定点计算，舍入模式只支持3'b110四舍五入模式和非四舍五入（直接低位截断）模式
         */
        unsigned int    filter_rnd_mode       : 3   ; /* [2..0] */
        unsigned int    reserved_0            : 29  ; /* [31..3] */
    } bits;

    unsigned int    u32;
} U_FILTER_ROUND_MODE;

typedef union {
    struct {
        /*
         * X方向滤波步长
         * PS：YUV422、YUV420滤波时，stride步长必须配置为1
         */
        unsigned int    filter_xstride        : 16  ; /* [15..0] */
        /*
         * Y方向滤波步长
         * PS：YUV422、YUV420滤波时，stride步长必须配置为1
         */
        unsigned int    filter_ystride        : 16  ; /* [31..16] */
    } bits;

    unsigned int    u32;
} U_FILTER_STRIDES;

typedef union {
    struct {
        /*
         * 实际输入图像的左上角第一个点在原输入图像中水平方向的index，指示实际输入图像在原图像中的位置；
         */
        unsigned int    index_ileft           : 16  ; /* [15..0] */
        /*
         * 实际输入图像的左上角第一个点在原输入图像中垂直方向的index，指示实际输入图像在原图像中的位置；
         * PS：YUV422、YUV420滤波时，top/left/bottom/right必须2对齐（bottom/right bit0为1）
         */
        unsigned int    index_itop            : 16  ; /* [31..16] */
    } bits;

    unsigned int    u32;
} U_FILTER_START_POS;

typedef union {
    struct {
        /*
         * 实际输入图像的右下角最后一点在原输入图像中水平方向的index，指示实际输入图像在原图像中的位置；
         */
        unsigned int    index_iright          : 16  ; /* [15..0] */
        /*
         * 实际输入图像的右下角最后一点在原输入图像中垂直方向的index，指示实际输入图像在原图像中的位置；
         */
        unsigned int    index_ibottom         : 16  ; /* [31..16] */
    } bits;

    unsigned int    u32;
} U_FILTER_END_POS;

typedef union {
    struct {
        /*
         * FILTER BLUR Mode sel
         * 000: up->down per_pixel;
         * 001: down->up per_pixel;//(reserved)
         * 010: up->down per_line;//(reserved)
         * 011: down->up per_line;//(reserved)
         * 100: separate blur;//(reserved)
         * 101: gaussian symmetry;//(reserved)
         *      //OpenCV Gaussianblur，参数对称
         * PS1：Ascend310B 该模式寄存器reserved，固定只支持模式0；定点计算
         */
        unsigned int    blur_mode_sel         : 3   ; /* [2..0] */
        unsigned int    reserved_0            : 5   ; /* [7..3] */
        /*
         * filter blur图像边沿滤波模式
         * 0: 图像边沿滤波
         * 1: 图像边沿不滤波，输出原图；
         */
        unsigned int    blur_edge_bypass      : 1   ; /* [8] */
        unsigned int    reserved_1            : 23  ; /* [31..9] */
    } bits;

    unsigned int    u32;
} U_FILTER_BLUR_CTRL;

typedef union {
    struct {
        /*
         * filter coeffcient
         * gaussian x coeffcient 0
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y0_x0        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF1;

typedef union {
    struct {
        /*
         * filter coeffcient
         * gaussian x coeffcient 1
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y0_x1        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF2;

typedef union {
    struct {
        /*
         * filter coeffcient
         * gaussian x coeffcient 2,x方向中间系数
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y0_x2        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF3;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y0_x3        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF4;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y0_x4        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF5;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y1_x0        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF6;

typedef union {
    struct {
        /*
         * filter coeffcient
         * gaussian y coeffcient 1
         * PS1：gaussian高斯滤波模式时，当filter_ksize_y<2'b01，该寄存器须配置为0
         */
        unsigned int f5x5_coef_y1_x1        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF7;

typedef union {
    struct {
        /*
         * filter coeffcient
         * gaussian y coeffcient 2,y方向中间系数
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y1_x2        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF8;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y1_x3        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF9;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y1_x4        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF10;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y2_x0        : 32  ; /* [31..0] */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;
} U_FILTER_COEFF11;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y2_x1        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF12;

typedef union {
    struct {
        /*
         * filter coeffcient,模板中间系数
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y2_x2        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF13;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y2_x3        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF14;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y2_x4        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF15;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y3_x0        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF16;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y3_x1        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF17;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y3_x2        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF18;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y3_x3        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF19;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y3_x4        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF20;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y4_x0        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF21;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y4_x1        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF22;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y4_x2        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF23;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y4_x3        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF24;

typedef union {
    struct {
        /*
         * filter coeffcient
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int f5x5_coef_y4_x4        : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_COEFF25;

typedef union {
    struct {
        /*
         * 滤波时最后的归一化系数
         * PS1：Ascend310B 32bit有效，S32配置,24bit小数
         */
        unsigned int filter_scale           : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_SCALE;

typedef union {
    struct {
        /*
         * 滤波时，初始累加值
         * PS1：Ascend310B 低16bit有效，S16配置
         */
        unsigned int filter_delta           : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_DELTA;

typedef union {
    struct {
        /*
         * FILTER sort Mode sel
         * 00: median; 中值滤波
         * 01: erode;  腐蚀（最小值）滤波
         * 10: dilate; 膨胀（最大值）滤波
         * 11: reserved
         */
        unsigned int    sort_mode_sel         : 2   ; /* [1..0] */
        unsigned int    reserved_0            : 30  ; /* [31..2] */
    } bits;

    unsigned int    u32;
} U_FILTER_SORT_CTRL;

typedef union {
    struct {
        /*
         * erode和dilate模式下，5*5滤波窗内对应像素点是否需要参与统计
         * 0：不参与统计
         * 1：参与统计
         * median模式只根据filt_ksize确定实际滤波窗大小，且只支持3*3和5*5两种滤波模板尺寸
         */
        unsigned int    sort_mask             : 25  ; /* [24..0] */
        unsigned int    reserved_0            : 7   ; /* [31..25] */
    } bits;

    unsigned int    u32;
} U_FILTER_SORT_MASK;

typedef union {
    struct {
        /*
         * reserved
         *
         * FILTER integral Mode sel（reserved）
         * 0: sum ; 积分图统计
         * 1: qsum; 平方和积分图统计
         */
        unsigned int    integral_mode_sel     : 1   ; /* [0] */
        unsigned int    reserved_0            : 3   ; /* [3..1] */
        /*
         * reserved
         *
         * FILTER integral 计算输出数据类型（reserved）
         * 0: S32 ; 统计结果为S32
         * 1: F32 ; 统计结果为float 32
         */
        unsigned int    integral_type         : 1   ; /* [4] */
        unsigned int    reserved_1            : 3   ; /* [7..5] */
        /*
         * reserved
         *
         * integral edge Mode（reserved）
         * 0: 不输出全0行，只输出统计结果，总共输出in_height行统计数据
         * 1: 输出的首行为全0数据，实际统计结果从第2行开始输出，总共输出in_height+1行统计数据
         */
        unsigned int    integral_first_line_padding_0_out : 1   ; /* [8] */
        /*
         * reserved
         *
         * integral edge Mode（reserved）
         * 0: 不输出全0列，只输出统计结果，总共输出in_width统计数据
         * 1: 输出的首列为全0数据，实际统计结果从第2列开始输出，总共输出in_width+1列统计数据
         */
        unsigned int    integral_first_col_padding_0_out : 1   ; /* [9] */
        unsigned int    reserved_2            : 22  ; /* [31..10] */
    } bits;

    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL;

typedef union {
    struct {
        /*
         * reserved
         *
         * integral 统计数据清理模式（reserved）
         * 0: 图像帧开始不清零，用于图像切分后的非第0帧
         * 1: 图像帧开始清零
         */
        unsigned int    integral_clr          : 1   ; /* [0] */
        unsigned int    reserved_0            : 31  ; /* [31..1] */
    } bits;

    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL1;

typedef union {
    struct {
        /*
         * reserved
         *
         * integral 从第几列开始统计，按“-1”配置
         * 避免图像切分后的非第0帧的重叠区域的重复统计.
         * 须 integral_hmin <= in_width
         */
        unsigned int    integral_hmin         : 16  ; /* [15..0] */
        unsigned int    reserved_0            : 16  ; /* [31..16] */
    } bits;

    unsigned int    u32;
} U_FILTER_INTEGRAL_CTRL2;

typedef union {
    struct {
        /*
         * filter dfx:
         * bit[31:1] : reserved
         * bit0 : filter data overflow
         */
        unsigned int filter_dfx             : 32  ; /* [31..0] */
    } bits;

    unsigned int    u32;
} U_FILTER_DFX;

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
    unsigned int                    reserved_3[5]                    ; /* 0xdc~0xec */
    U_FILTER_DFX                    FILTER_DFX                       ; /* 0xf0 */
} S_VPC_FILTER_NMANAGER_REGS_TYPE;

/* Declare the struct pointer of the module VPC_FILTER_NMANAGER */
extern S_VPC_FILTER_NMANAGER_REGS_TYPE *gopVPC_FILTER_NMANAGERAllReg;


#endif /* VPC_PIPE_MILAN_V1R3_FILTER_REG_C_UNION_DEFINE_H */
