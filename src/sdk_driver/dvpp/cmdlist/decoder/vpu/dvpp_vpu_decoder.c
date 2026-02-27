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

#include "dvpp_vpu_decoder.h"
#include "dvpp_vpu_types.h"
#include "pipeline_top.h"
#include "drv_jpegd_comm.h"
#include "drv_jpege_comm.h"

typedef void* (*pfn_get_vpu_mod)(dvpp_vpu_decoder *decoder, uint32_t node_idx);

#define GET_VPU_MOD_FUNC(mod, name) get_vpu_##mod##_##name

#define ADD_VPU_VPC_MOD_FUNC(name, mod) \
static void* get_vpu_vpc_##name(dvpp_vpu_decoder *decoder, uint32_t node_idx) \
{ \
    vpu_vpc_config_t* buf = (vpu_vpc_config_t*)(decoder->vpu_config[node_idx]); \
    return (void*)(&buf->mod); \
} \

#define ADD_VPU_JPEG_MOD_FUNC(name) \
static void* get_vpu_jpeg_##name(dvpp_vpu_decoder *decoder, uint32_t node_idx) \
{ \
    return (void*)(decoder->vpu_config[node_idx]); \
} \

// JPEGD
ADD_VPU_JPEG_MOD_FUNC(dec)
// JPEGE
ADD_VPU_JPEG_MOD_FUNC(enc)
// VPC
ADD_VPU_VPC_MOD_FUNC(top, top)
ADD_VPU_VPC_MOD_FUNC(channel_cvdr, channel.cvdr)
ADD_VPU_VPC_MOD_FUNC(channel_cache, channel.cache)
ADD_VPU_VPC_MOD_FUNC(pipe_top, pipe.top)
ADD_VPU_VPC_MOD_FUNC(pipe_in_in0swap, pipe.input.in0Swap)
ADD_VPU_VPC_MOD_FUNC(pipe_in_in0uvup, pipe.input.in0Uvup)
ADD_VPU_VPC_MOD_FUNC(pipe_in_in0csc, pipe.input.in0Csc)
ADD_VPU_VPC_MOD_FUNC(pipe_in_in0uvdown, pipe.input.in0UvDown)
ADD_VPU_VPC_MOD_FUNC(pipe_in_ircsc, pipe.input.in0IrCsc)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_precrop0, pipe.kernel.preCrop)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_prepadding0, pipe.kernel.prePadding)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_resize0, pipe.kernel.resize[0])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_resize1, pipe.kernel.resize[1])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_yuvscaler0, pipe.kernel.yuvScale[0])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_yuvscaler1, pipe.kernel.yuvScale[1])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_postpadding0, pipe.kernel.postPadding[0])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_postcrop0, pipe.kernel.postCrop[0])
ADD_VPU_VPC_MOD_FUNC(pipe_ker_hist, pipe.kernel.histogram)
ADD_VPU_VPC_MOD_FUNC(pipe_out0_swap, pipe.output[0].swap)
ADD_VPU_VPC_MOD_FUNC(pipe_out0_uvup, pipe.output[0].uvUp)
ADD_VPU_VPC_MOD_FUNC(pipe_out0_csc, pipe.output[0].csc)
ADD_VPU_VPC_MOD_FUNC(pipe_out1_csc, pipe.output[1].csc)
ADD_VPU_VPC_MOD_FUNC(pipe_out0_uvdown, pipe.output[0].uvDown)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_cvt, pipe.kernel.convert)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_mosaic, pipe.kernel.mosaic)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_cover, pipe.kernel.cover)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_osd, pipe.kernel.osd)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_rotate, pipe.kernel.rotate)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_affine, pipe.kernel.affine)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_lut, pipe.kernel.lut)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_flip, pipe.kernel.flip)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_filter, pipe.kernel.filter)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_blend, pipe.kernel.blend)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_pixaug, pipe.kernel.pixaug)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_hsv, pipe.kernel.hsv)
ADD_VPU_VPC_MOD_FUNC(channel_rdma, channel.rdma)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_postpadding1, pipe.kernel.postPadding[1])
ADD_VPU_VPC_MOD_FUNC(pipe_out1_swap, pipe.output[1].swap)
ADD_VPU_VPC_MOD_FUNC(pipe_out1_uvdown, pipe.output[1].uvDown)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_datatransform, pipe.kernel.dataTransform)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_dump, pipe.kernel.dumpReg)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_pyramid, pipe.kernel.pyramid)
ADD_VPU_VPC_MOD_FUNC(pipe_ker_level2pointer, pipe.kernel.level2Pointer)

static pfn_get_vpu_mod g_vpu_mod_vpc_func[VPU_VPC_TYPE_BUTT] = {
    NULL,
    NULL,
    NULL,
    GET_VPU_MOD_FUNC(vpc, top),                    // VPU_VPC_TYPE_TOP
    GET_VPU_MOD_FUNC(vpc, channel_cvdr),           // VPU_VPC_TYPE_CHNL_CVDR
    GET_VPU_MOD_FUNC(vpc, channel_cache),          // VPU_VPC_TYPE_CHNL_CACHE
    GET_VPU_MOD_FUNC(vpc, pipe_top),               // VPU_VPC_TYPE_PIPE_TOP
    GET_VPU_MOD_FUNC(vpc, pipe_in_in0swap),        // VPU_VPC_TYPE_PIPE_IN0SWAP
    GET_VPU_MOD_FUNC(vpc, pipe_in_in0uvup),        // VPU_VPC_TYPE_PIPE_IN0UVUP
    GET_VPU_MOD_FUNC(vpc, pipe_in_in0csc),         // VPU_VPC_TYPE_PIPE_IN0CSC
    GET_VPU_MOD_FUNC(vpc, pipe_in_in0uvdown),      // VPU_VPC_TYPE_PIPE_IN0UVDOWN
    GET_VPU_MOD_FUNC(vpc, pipe_ker_precrop0),      // VPU_VPC_TYPE_PIPE_PRECROP_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_prepadding0),   // VPU_VPC_TYPE_PIPE_PREPADDING_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_resize0),       // VPU_VPC_TYPE_PIPE_RESIZE_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_resize1),       // VPU_VPC_TYPE_PIPE_RESIZE_CHN1
    GET_VPU_MOD_FUNC(vpc, pipe_ker_yuvscaler0),    // VPU_VPC_TYPE_PIPE_YUVSCALER_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_yuvscaler1),    // VPU_VPC_TYPE_PIPE_YUVSCALER_CHN1
    GET_VPU_MOD_FUNC(vpc, pipe_ker_postpadding0),  // VPU_VPC_TYPE_PIPE_POSTPADDING_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_postcrop0),     // VPU_VPC_TYPE_PIPE_POSTCROP_CHN0
    GET_VPU_MOD_FUNC(vpc, pipe_ker_hist),          // VPU_VPC_TYPE_PIPE_HISTOGRAM
    GET_VPU_MOD_FUNC(vpc, pipe_out0_swap),         // VPU_VPC_TYPE_PIPE_OUT0SWAP
    GET_VPU_MOD_FUNC(vpc, pipe_out0_uvup),         // VPU_VPC_TYPE_PIPE_OUT0UVUP
    GET_VPU_MOD_FUNC(vpc, pipe_out0_csc),          // VPU_VPC_TYPE_PIPE_OUT0CSC
    GET_VPU_MOD_FUNC(vpc, pipe_out0_uvdown),       // VPU_VPC_TYPE_PIPE_OUT0UVDOWN
    GET_VPU_MOD_FUNC(vpc, pipe_ker_cvt),           // VPU_VPC_TYPE_PIPE_CONVERT
    GET_VPU_MOD_FUNC(vpc, pipe_ker_mosaic),        // VPU_VPC_TYPE_PIPE_MOSAIC
    GET_VPU_MOD_FUNC(vpc, pipe_ker_cover),         // VPU_VPC_TYPE_PIPE_COVER
    GET_VPU_MOD_FUNC(vpc, pipe_ker_osd),           // VPU_VPC_TYPE_PIPE_OSD
    GET_VPU_MOD_FUNC(vpc, pipe_ker_rotate),        // VPU_VPC_TYPE_PIPE_ROTATE
    GET_VPU_MOD_FUNC(vpc, pipe_ker_affine),        // VPU_VPC_TYPE_PIPE_AFFINE
    GET_VPU_MOD_FUNC(vpc, pipe_ker_lut),           // VPU_VPC_TYPE_PIPE_LUT
    GET_VPU_MOD_FUNC(vpc, pipe_ker_flip),          // VPU_VPC_TYPE_PIPE_FLIP
    GET_VPU_MOD_FUNC(vpc, pipe_ker_filter),        // VPU_VPC_TYPE_PIPE_FILTER
    GET_VPU_MOD_FUNC(vpc, pipe_ker_blend),         // VPU_VPC_TYPE_PIPE_BLENDING
    GET_VPU_MOD_FUNC(vpc, pipe_ker_pixaug),        // VPU_VPC_TYPE_PIPE_PIXAUG
    GET_VPU_MOD_FUNC(vpc, pipe_ker_hsv),           // VPU_VPC_TYPE_PIPE_HSV
    GET_VPU_MOD_FUNC(vpc, channel_rdma),           // VPU_VPC_TYPE_CHNL_RDMA
    GET_VPU_MOD_FUNC(vpc, pipe_ker_postpadding1),  // VPU_VPC_TYPE_PIPE_POSTPADDING_CHN1
    GET_VPU_MOD_FUNC(vpc, pipe_out1_swap),         // VPU_VPC_TYPE_PIPE_OUT1SWAP
    GET_VPU_MOD_FUNC(vpc, pipe_out1_uvdown),       // VPU_VPC_TYPE_PIPE_OUT1UVDOWN
    GET_VPU_MOD_FUNC(vpc, pipe_ker_dump),          // VPU_VPC_TYPE_PIPE_DUMPREG
    GET_VPU_MOD_FUNC(vpc, pipe_ker_pyramid),       // VPU_VPC_TYPE_PIPE_PYRAMID
    GET_VPU_MOD_FUNC(vpc, pipe_ker_datatransform),     // VPU_VPC_TYPE_PIPE_TRANSFORM
    GET_VPU_MOD_FUNC(vpc, pipe_in_ircsc),          // VPU_VPC_TYPE_PIPE_IRCSC
    GET_VPU_MOD_FUNC(vpc, pipe_out1_csc),          // VPU_VPC_TYPE_PIPE_OUT1CSC
    GET_VPU_MOD_FUNC(vpc, pipe_ker_level2pointer), // VPU_VPC_TYPE_PIPE_LEVEL2POINTER
};

uint32_t g_vpu_mod_vpc_stru_len[VPU_VPC_TYPE_BUTT] = {
    0, 0, 0,
    sizeof(struct Top),             // VPU_VPC_TYPE_TOP
    sizeof(struct Cvdr),            // VPU_VPC_TYPE_CHNL_CVDR
    sizeof(struct Cache),           // VPU_VPC_TYPE_CHNL_CACHE
    sizeof(struct PipleLineTop),    // VPU_VPC_TYPE_PIPE_TOP
    sizeof(struct Swap),            // VPU_VPC_TYPE_PIPE_IN0SWAP
    sizeof(struct UvUp),            // VPU_VPC_TYPE_PIPE_IN0UVUP
    sizeof(struct Csc),             // VPU_VPC_TYPE_PIPE_IN0CSC
    sizeof(struct UvDown),          // VPU_VPC_TYPE_PIPE_IN0UVDOWN
    sizeof(struct Crop),            // VPU_VPC_TYPE_PIPE_PRECROP_CHN0
    sizeof(struct Padding),         // VPU_VPC_TYPE_PIPE_PREPADDING_CHN0
    sizeof(struct Resize),          // VPU_VPC_TYPE_PIPE_RESIZE_CHN0
    sizeof(struct Resize),          // VPU_VPC_TYPE_PIPE_RESIZE_CHN1
    sizeof(struct YuvScale),        // VPU_VPC_TYPE_PIPE_YUVSCALER_CHN0
    sizeof(struct YuvScale),        // VPU_VPC_TYPE_PIPE_YUVSCALER_CHN1
    sizeof(struct Padding),         // VPU_VPC_TYPE_PIPE_POSTPADDING_CHN0
    sizeof(struct Crop),            // VPU_VPC_TYPE_PIPE_POSTCROP_CHN0
    sizeof(struct Histogram),       // VPU_VPC_TYPE_PIPE_HISTOGRAM
    sizeof(struct Swap),            // VPU_VPC_TYPE_PIPE_OUT0SWAP
    sizeof(struct UvUp),            // VPU_VPC_TYPE_PIPE_OUT0UVUP
    sizeof(struct Csc),             // VPU_VPC_TYPE_PIPE_OUT0CSC
    sizeof(struct UvDown),          // VPU_VPC_TYPE_PIPE_OUT0UVDOWN
    sizeof(struct Convert),         // VPU_VPC_TYPE_PIPE_CONVERT
    sizeof(struct Mosaic),          // VPU_VPC_TYPE_PIPE_MOSAIC
    sizeof(struct Cover),           // VPU_VPC_TYPE_PIPE_COVER
    sizeof(struct Osd),             // VPU_VPC_TYPE_PIPE_OSD
    sizeof(struct Rotate),          // VPU_VPC_TYPE_PIPE_ROTATE
    sizeof(struct Affine),          // VPU_VPC_TYPE_PIPE_AFFINE
    sizeof(struct Lut),             // VPU_VPC_TYPE_PIPE_LUT
    sizeof(struct Flip),            // VPU_VPC_TYPE_PIPE_FLIP
    sizeof(struct Filter),          // VPU_VPC_TYPE_PIPE_FILTER
    sizeof(struct Blend),           // VPU_VPC_TYPE_PIPE_BLENDING
    sizeof(struct PixAug),          // VPU_VPC_TYPE_PIPE_PIXAUG
    sizeof(struct Hsv),             // VPU_VPC_TYPE_PIPE_HSV
    sizeof(struct Rdma),            // VPU_VPC_TYPE_CHNL_RDMA
    sizeof(struct Padding),         // VPU_VPC_TYPE_PIPE_POSTPADDING_CHN1
    sizeof(struct Swap),            // VPU_VPC_TYPE_PIPE_OUT1SWAP
    sizeof(struct UvDown),          // VPU_VPC_TYPE_PIPE_OUT1UVDOWN
    sizeof(struct DumpReg),         // VPU_VPC_TYPE_PIPE_DUMPREG
};

static pfn_get_vpu_mod g_vpu_mod_jpegd_func[VPU_JPEGD_TYPE_BUTT] = {
    NULL,
    NULL,
    NULL,
    GET_VPU_MOD_FUNC(jpeg, dec),     // VPU_JPEGD_TYPE_DEC
};

uint32_t g_vpu_mod_jpegd_stru_len[VPU_JPEGD_TYPE_BUTT] = {
    0, 0, 0,
    sizeof(JpegdConfig),      // VPU_JPEGD_TYPE_DEC
};

static pfn_get_vpu_mod g_vpu_mod_jpege_func[VPU_JPEGE_TYPE_BUTT] = {
    NULL,
    NULL,
    NULL,
    GET_VPU_MOD_FUNC(jpeg, enc),    // VPU_JPEGE_TYPE_ENC
};

uint32_t g_vpu_mod_jpege_stru_len[VPU_JPEGE_TYPE_BUTT] = {
    0, 0, 0,
    sizeof(jpege_config),    // VPU_JPEGE_TYPE_ENC
};

static int32_t dvpp_vpu_init_decoder(void *decoder)
{
    return 0;
}

static int32_t dvpp_vpu_decode_args(void *decoder)
{
    // vpu模式不需要接口，这里是指为了归一
    return 0;
}

static uint16_t dvpp_vpu_get_batch_cnt(void *decoder)
{
    return ((dvpp_vpu_decoder*)decoder)->batch_cnt;
}

static uint16_t dvpp_vpu_get_node_cnt(void *decoder)
{
    return ((dvpp_vpu_decoder*)decoder)->node_cnt;
}

static uint16_t dvpp_vpu_get_node_cnt_of_batch(void *decoder, uint32_t index)
{
    return ((dvpp_vpu_decoder*)decoder)->node_cnt_of_batch[index];
}

static uint32_t dvpp_vpu_get_module_type(void *decoder)
{
    return ((dvpp_vpu_decoder*)decoder)->mod;
}

static void* dvpp_vpu_data_get_val(void *decoder, uint32_t node_idx, uint32_t type)
{
    dvpp_vpu_decoder *dec = (dvpp_vpu_decoder*)decoder;
    if (dec->mod == DVPP_MOD_TYPE_VPC) {
        return (void*)(g_vpu_mod_vpc_func[type]((dvpp_vpu_decoder*)decoder, node_idx));
    } else if (dec->mod == DVPP_MOD_TYPE_JPEGD) {
        return (void*)(g_vpu_mod_jpegd_func[type]((dvpp_vpu_decoder*)decoder, node_idx));
    } else if (dec->mod == DVPP_MOD_TYPE_JPEGE) {
        return (void*)(g_vpu_mod_jpege_func[type]((dvpp_vpu_decoder*)decoder, node_idx));
    } else if (dec->mod == DVPP_MOD_TYPE_NSC) {
        return (void*)(g_vpu_mod_vpc_func[type]((dvpp_vpu_decoder*)decoder, node_idx));
    }

    return NULL;
}

static uint16_t dvpp_vpu_data_get_len(void *decoder, uint32_t node_idx, uint32_t type)
{
    // 无兼容性问题，直接返回0
    return 0;
}

void dvpp_vpu_decoder_register(void)
{
    struct dvpp_decoder_ops *decoder_ops = dvpp_get_decoder_ops();
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_init_decoder = dvpp_vpu_init_decoder;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_decode_args = dvpp_vpu_decode_args;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_node_cnt = dvpp_vpu_get_node_cnt;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_batch_cnt = dvpp_vpu_get_batch_cnt;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_node_cnt_of_batch = dvpp_vpu_get_node_cnt_of_batch;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_module_type = dvpp_vpu_get_module_type;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_vpu_mod_val = dvpp_vpu_data_get_val;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_vpu_mod_len = dvpp_vpu_data_get_len;
}

void dvpp_vpu_decoder_unregister(void)
{
    struct dvpp_decoder_ops *decoder_ops = dvpp_get_decoder_ops();
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_init_decoder = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_decode_args = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_node_cnt = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_batch_cnt = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_node_cnt_of_batch = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_module_type = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_vpu_mod_val = NULL;
    decoder_ops[DVPP_PROTOCOL_VPU].dvpp_get_vpu_mod_len = NULL;
}
