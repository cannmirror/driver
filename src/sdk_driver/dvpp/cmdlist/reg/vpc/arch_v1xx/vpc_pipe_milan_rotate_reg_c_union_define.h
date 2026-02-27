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
#ifndef VPC_PIPE_MILAN_ROTATE_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_ROTATE_REG_C_UNION_DEFINE_H

typedef union {
    struct {
        /*
         * 输入图像宽度，减1配置（输入宽度等于输出高度）
         */
        unsigned int    src_width             : 16  ; /* [15..0] */
        /*
         * 输入图像高度，减1配置（输入高度等于输出宽度）
         */
        unsigned int    src_height            : 16  ; /* [31..16] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_SIZE;

typedef union {
    struct {
        /*
         * 旋转使能
         * 0：旋转功能关闭
         * 1：旋转功能打开
         * 旋转支持格式见后页《data format》，使用vpc的in_format配置
         */
        unsigned int    rot_en                : 1   ; /* [0] */
        unsigned int    reserved_0            : 3   ; /* [3..1] */
        /*
         * 旋转方向
         * 0：顺时针90度
         * 1：逆时针90度
         */
        unsigned int    rot_dir               : 1   ; /* [4] */
        unsigned int    reserved_1            : 27  ; /* [31..5] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_MODE;

typedef union {
    struct {
        /*
         * 输入图像planar0基地址高32bit
         * （planar0：packed格式为整体，semiplanar、planar格式为Y分量）
         */
        unsigned int src_base_addr_0_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_0_H;

typedef union {
    struct {
        /*
         * 输入图像planar0基地址低32bit
         */
        unsigned int src_base_addr_0_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_0_L;

typedef union {
    struct {
        /*
         * 输入图像planar0 stride信息
         */
        unsigned int src_stride_0           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_STRIDE_0;

typedef union {
    struct {
        /*
         * 输入图像planar1基地址高32bit
         * （planar1：packed格式时不使用，semiplanar格式为UV分量，planar格式为U分量）
         */
        unsigned int src_base_addr_1_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_1_H;

typedef union {
    struct {
        /*
         * 输入图像planar1基地址低32bit
         */
        unsigned int src_base_addr_1_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_1_L;

typedef union {
    struct {
        /*
         * 输入图像planar1 stride信息
         */
        unsigned int src_stride_1           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_STRIDE_1;

typedef union {
    struct {
        /*
         * 输入图像planar2基地址高32bit
         * （planar2：packed、semiplanar格式时不使用，planar格式为V分量）
         */
        unsigned int src_base_addr_2_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_2_H;

typedef union {
    struct {
        /*
         * 输入图像planar2基地址低32bit
         */
        unsigned int src_base_addr_2_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_BASE_ADDR_2_L;

typedef union {
    struct {
        /*
         * 输入图像planar2 stride信息
         */
        unsigned int src_stride_2           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_SRC_STRIDE_2;

typedef union {
    struct {
        /*
         * 输出图像planar0基地址高32bit
         * （planar0：packed格式为整体，semiplanar、planar格式为Y分量）
         */
        unsigned int dst_base_addr_0_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_0_H;

typedef union {
    struct {
        /*
         * 输出图像planar0基地址低32bit
         */
        unsigned int dst_base_addr_0_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_0_L;

typedef union {
    struct {
        /*
         * 输出图像planar0 stride信息
         */
        unsigned int dst_stride_0           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_STRIDE_0;

typedef union {
    struct {
        /*
         * 输出图像planar1基地址高32bit
         * （planar1：packed格式时不使用，semiplanar格式为UV分量，planar格式为U分量）
         */
        unsigned int dst_base_addr_1_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_1_H;

typedef union {
    struct {
        /*
         * 输出图像planar1基地址低32bit
         */
        unsigned int dst_base_addr_1_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_1_L;

typedef union {
    struct {
        /*
         * 输出图像planar1 stride信息
         */
        unsigned int dst_stride_1           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_STRIDE_1;

typedef union {
    struct {
        /*
         * 输出图像planar2基地址高32bit
         * （planar2：packed、semiplanar格式时不使用，planar格式为V分量）
         */
        unsigned int dst_base_addr_2_h      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_2_H;

typedef union {
    struct {
        /*
         * 输出图像planar2基地址低32bit
         */
        unsigned int dst_base_addr_2_l      : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_BASE_ADDR_2_L;

typedef union {
    struct {
        /*
         * 输出图像planar2 stride信息
         */
        unsigned int dst_stride_2           : 32  ; /* [31..0] */
    } bits;
    unsigned int    u32;
} U_VPC_ROTATE_DST_STRIDE_2;

/* Define the global struct */
typedef struct {
    U_VPC_ROTATE_SRC_SIZE            VPC_ROTATE_SRC_SIZE              ; /* 0x0 */
    U_VPC_ROTATE_MODE                VPC_ROTATE_MODE                  ; /* 0x4 */
    U_VPC_ROTATE_SRC_BASE_ADDR_0_H   VPC_ROTATE_SRC_BASE_ADDR_0_H     ; /* 0x8 */
    U_VPC_ROTATE_SRC_BASE_ADDR_0_L   VPC_ROTATE_SRC_BASE_ADDR_0_L     ; /* 0xc */
    U_VPC_ROTATE_SRC_STRIDE_0        VPC_ROTATE_SRC_STRIDE_0          ; /* 0x10 */
    U_VPC_ROTATE_SRC_BASE_ADDR_1_H   VPC_ROTATE_SRC_BASE_ADDR_1_H     ; /* 0x14 */
    U_VPC_ROTATE_SRC_BASE_ADDR_1_L   VPC_ROTATE_SRC_BASE_ADDR_1_L     ; /* 0x18 */
    U_VPC_ROTATE_SRC_STRIDE_1        VPC_ROTATE_SRC_STRIDE_1          ; /* 0x1c */
    U_VPC_ROTATE_SRC_BASE_ADDR_2_H   VPC_ROTATE_SRC_BASE_ADDR_2_H     ; /* 0x20 */
    U_VPC_ROTATE_SRC_BASE_ADDR_2_L   VPC_ROTATE_SRC_BASE_ADDR_2_L     ; /* 0x24 */
    U_VPC_ROTATE_SRC_STRIDE_2        VPC_ROTATE_SRC_STRIDE_2          ; /* 0x28 */
    U_VPC_ROTATE_DST_BASE_ADDR_0_H   VPC_ROTATE_DST_BASE_ADDR_0_H     ; /* 0x2c */
    U_VPC_ROTATE_DST_BASE_ADDR_0_L   VPC_ROTATE_DST_BASE_ADDR_0_L     ; /* 0x30 */
    U_VPC_ROTATE_DST_STRIDE_0        VPC_ROTATE_DST_STRIDE_0          ; /* 0x34 */
    U_VPC_ROTATE_DST_BASE_ADDR_1_H   VPC_ROTATE_DST_BASE_ADDR_1_H     ; /* 0x38 */
    U_VPC_ROTATE_DST_BASE_ADDR_1_L   VPC_ROTATE_DST_BASE_ADDR_1_L     ; /* 0x3c */
    U_VPC_ROTATE_DST_STRIDE_1        VPC_ROTATE_DST_STRIDE_1          ; /* 0x40 */
    U_VPC_ROTATE_DST_BASE_ADDR_2_H   VPC_ROTATE_DST_BASE_ADDR_2_H     ; /* 0x44 */
    U_VPC_ROTATE_DST_BASE_ADDR_2_L   VPC_ROTATE_DST_BASE_ADDR_2_L     ; /* 0x48 */
    U_VPC_ROTATE_DST_STRIDE_2        VPC_ROTATE_DST_STRIDE_2          ; /* 0x4c */
} S_VPC_ROTATE_REGS_REGS_TYPE;

/* Declare the struct pointer of the module VPC_ROTATE_REGS */
extern S_VPC_ROTATE_REGS_REGS_TYPE *gopVPC_ROTATE_REGSAllReg;

#endif // #ifndef VPC_PIPE_MILAN_ROTATE_REG_C_UNION_DEFINE_H
