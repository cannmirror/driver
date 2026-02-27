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

#ifndef TLV_DVPP_TLV_TYPE_H
#define TLV_DVPP_TLV_TYPE_H

// 复用vpu的type
#include "dvpp_vpu_types.h"
typedef enum DvppTlvType {
    // 从1000开始是为了防止枚举值和vpu_type相同
    DVPP_TLV_TYPE_ARGS_VERSION = 0,
    DVPP_TLV_TYPE_ARGS_HEAD = 1,
    DVPP_TLV_TYPE_ARGS_END = 2,
} dvpp_tlv_type;

typedef enum {
    VPC_TLV_TYPE_TOP = 3,
    VPC_TLV_TYPE_CHNL_CVDR,
    VPC_TLV_TYPE_CHNL_CACHE,
    VPC_TLV_TYPE_PIPE_TOP,
    VPC_TLV_TYPE_PIPE_IN0SWAP,
    VPC_TLV_TYPE_PIPE_IN0UVUP,
    VPC_TLV_TYPE_PIPE_IN0CSC,
    VPC_TLV_TYPE_PIPE_IN0UVDOWN,
    VPC_TLV_TYPE_PIPE_PRECROP_CHN0,
    VPC_TLV_TYPE_PIPE_PREPADDING_CHN0,
    VPC_TLV_TYPE_PIPE_RESIZE_CHN0,
    VPC_TLV_TYPE_PIPE_RESIZE_CHN1,
    VPC_TLV_TYPE_PIPE_YUVSCALER_CHN0,
    VPC_TLV_TYPE_PIPE_YUVSCALER_CHN1,
    VPC_TLV_TYPE_PIPE_POSTPADDING_CHN0,
    VPC_TLV_TYPE_PIPE_POSTCROP_CHN0,
    VPC_TLV_TYPE_PIPE_HISTOGRAM,
    VPC_TLV_TYPE_PIPE_OUT0SWAP,
    VPC_TLV_TYPE_PIPE_OUT0UVUP,
    VPC_TLV_TYPE_PIPE_OUT0CSC,
    VPC_TLV_TYPE_PIPE_OUT0UVDOWN,
    VPC_TLV_TYPE_PIPE_CONVERT,
    VPC_TLV_TYPE_PIPE_MOSAIC,
    VPC_TLV_TYPE_PIPE_COVER,
    VPC_TLV_TYPE_PIPE_OSD,
    VPC_TLV_TYPE_PIPE_ROTATE,
    VPC_TLV_TYPE_PIPE_AFFINE,
    VPC_TLV_TYPE_PIPE_LUT,
    VPC_TLV_TYPE_PIPE_FLIP,
    VPC_TLV_TYPE_PIPE_FILTER,
    VPC_TLV_TYPE_PIPE_BLENDING,
    VPC_TLV_TYPE_PIPE_PIXAUG,
    VPC_TLV_TYPE_PIPE_HSV,
    VPC_TLV_TYPE_CHNL_RDMA,
    VPC_TLV_TYPE_PIPE_POSTPADDING_CHN1,
    VPC_TLV_TYPE_PIPE_OUT1SWAP,
    VPC_TLV_TYPE_PIPE_OUT1UVDOWN,
    VPC_TLV_TYPE_PIPE_DUMPREG,
} vpu_mod_vpc_tlv_type;

typedef enum {
    JPEGD_TLV_TYPE_DEC = 3,
} vpu_mod_jpegd_tlv_type;

typedef enum {
    JPEGE_TLV_TYPE_ENC = 3,
} vpu_mod_jpege_tlv_type;

#endif // #ifndef TLV_DVPP_VPU_TYPE_H
