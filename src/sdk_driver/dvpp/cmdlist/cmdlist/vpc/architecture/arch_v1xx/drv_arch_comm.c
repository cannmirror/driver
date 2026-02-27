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

#include "drv_arch_comm.h"
#include "securec.h"
#include "vpc_reg.h"
#include "dvpp_cmdlist_log.h"
#include "pipeline_top.h"
#include "dvpp_vpu_types.h"


#define VPC_CMD_NODE_HEAD_SIZE (64U)
#define VPC_CMD_ADDR_ALIGN_SIZE (8U)

void drv_vpc_config_cmdnode_reverse_space(struct CmdNode *node)
{
    uint32_t i;
    for (i = 0; i < VPC_CMD_NODE_HEAD_SIZE; i++) {
        dvpp_seq_set_cmdnode_val(node, CMDLST_PADDING_DATA);
    }
}

static void drv_vpc_config_cmdnode_vprd(
    struct VP_RD *vp_rd, struct CmdNode *node, uint32_t node_idx, uint32_t port)
{
    U_VPC_VP_RD_CFG rdCfg;
    U_VPC_VP_RD_LWG rdLwg;
    rdCfg.u32 = 0;
    rdLwg.u32 = 0;

    rdCfg.bits.vprd_pixel_format = vp_rd->pixelFmt;
    rdCfg.bits.vprd_allocated_du = vp_rd->du;
    dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[port][VP_RD_CFG]);
    dvpp_seq_set_cmdnode_val(node, rdCfg.u32);

    rdLwg.bits.vprd_line_size = vp_rd->lineSize;
    rdLwg.bits.vprd_yflip_en = vp_rd->yflipEn;

    dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[port][VP_RD_LWH]);
    dvpp_seq_set_cmdnode_val(node, rdLwg.u32);

    dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[port][VP_RD_FHG]);
    dvpp_seq_set_cmdnode_val(node, vp_rd->frameSize);

    dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[port][VP_RD_AXI_LINE]);
    dvpp_seq_set_cmdnode_val(node, vp_rd->stride);
}

static void drv_vpc_config_cmdnode_vpwr(
    struct VP_WR *vp_wr, struct CmdNode *node, uint32_t node_idx, uint32_t port)
{
    U_VPC_VP_WR_CFG wrCfg;
    U_VPC_VP_WR_LWG wrLwg;
    wrCfg.u32 = 0;
    wrLwg.u32 = 0;

    wrCfg.bits.vpwr_pixel_format = vp_wr->pixelFmt;
    dvpp_seq_set_cmdnode_val(node, VPC_VPWR_REG_MAP[port][VP_WR_CFG]);
    dvpp_seq_set_cmdnode_val(node, wrCfg.u32);

    dvpp_seq_set_cmdnode_val(node, VPC_VPWR_REG_MAP[port][VP_WR_AXI_LINE]);
    dvpp_seq_set_cmdnode_val(node, vp_wr->stride);

    wrLwg.bits.vpwr_yflip_en = vp_wr->yflipEn;
    wrLwg.bits.vpwr_line_size = vp_wr->lineSize;
    dvpp_seq_set_cmdnode_val(node, VPC_VPWR_REG_MAP[port][VP_WR_LWG]);
    dvpp_seq_set_cmdnode_val(node, wrLwg.u32);

    dvpp_seq_set_cmdnode_val(node, VPC_VPWR_REG_MAP[port][VP_WR_HIGH_ADDR]);
    dvpp_seq_set_cmdnode_val(node, GET_HIGH_ADDR(vp_wr->addr));

    dvpp_seq_set_cmdnode_val(node, VPC_VPWR_REG_MAP[port][VP_WR_LOW_ADDR]);
    dvpp_seq_set_cmdnode_val(node, GET_LOW_ADDR(vp_wr->addr));
}

static void drv_vpc_config_cmdnode_nr(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t i = 0;
    U_VPC_NR_RD_BRG_CFG nrRdBrgCfg;
    U_VPC_NR_WR_BRG_CFG nrWrBrgCfg;
    U_VPC_NR_RD_CFG nrRdCfg;
    static const uint32_t nrRdBrgReg[NR_RD_NUM] = {
        VPC_NR_RD_BRG_CFG_0, VPC_NR_RD_BRG_CFG_1, VPC_NR_RD_BRG_CFG_2, VPC_NR_RD_BRG_CFG_3,
    };
    static const uint32_t nrRdCfgReg[NR_RD_NUM] = {
        VPC_NR_RD_CFG_0, VPC_NR_RD_CFG_1, VPC_NR_RD_CFG_2, VPC_NR_RD_CFG_3,
    };

    struct Cvdr *cvdr = (struct Cvdr*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CVDR));
    nrRdBrgCfg.u32 = 0;
    nrWrBrgCfg.u32 = 0;
    nrRdCfg.u32 = 0;

    // nr rd
    for (i = 0; i < NR_RD_NUM; i++) {
        nrRdBrgCfg.bits.nrrd_split_en = cvdr->nr.rd[i].splitEn;
        nrRdBrgCfg.bits.nrrd_req_merge_timeout_trld = cvdr->nr.rd[i].timeoutTrld;
        dvpp_seq_set_cmdnode_val(node, nrRdBrgReg[i]);
        dvpp_seq_set_cmdnode_val(node, nrRdBrgCfg.u32);
        nrRdCfg.bits.nrrd_allocated_du = cvdr->nr.rd[i].allocatedDu;
        nrRdCfg.bits.nrrd_enable = cvdr->nr.rd[i].en;
        dvpp_seq_set_cmdnode_val(node, nrRdCfgReg[i]);
        dvpp_seq_set_cmdnode_val(node, nrRdCfg.u32);
    }

    // nr wr0
    nrWrBrgCfg.bits.nrwr_split_en = cvdr->nr.wr[NUM_0].splitEn;
    nrWrBrgCfg.bits.nrwr_req_merge_timeout_trld = cvdr->nr.wr[NUM_0].timeoutTrld;
    dvpp_seq_set_cmdnode_val(node, VPC_NR_WR_BRG_CFG_0);
    dvpp_seq_set_cmdnode_val(node, nrWrBrgCfg.u32);

    // nr wr1
    nrWrBrgCfg.bits.nrwr_split_en = cvdr->nr.wr[NUM_1].splitEn;
    nrWrBrgCfg.bits.nrwr_req_merge_timeout_trld = cvdr->nr.wr[NUM_1].timeoutTrld;
    dvpp_seq_set_cmdnode_val(node, VPC_NR_WR_BRG_CFG_1);
    dvpp_seq_set_cmdnode_val(node, nrWrBrgCfg.u32);
}

static void drv_vpc_config_cmdnode_cache(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_run_mode controlMode;

    struct Cache *cache = (struct Cache*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CACHE));
    struct Cvdr *cvdr = (struct Cvdr*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CVDR));
    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));

    controlMode.bits.sram_wrap_en = cache->sramWrapEn;
    controlMode.bits.run_mode = cache->runMode;
    dvpp_seq_set_cmdnode_val(node, REG_CACHE_MODE);
    dvpp_seq_set_cmdnode_val(node, controlMode.u32);

    // stride 减一保存，cache计算和配置时stride需要加一
    if (cache->en3d != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_PICTURE_SIZE_3D);
        dvpp_seq_set_cmdnode_val(node, (cvdr->vp.rd[PORT0].stride + 1) * (top->in0Height + 1));
    }

    dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE0_BADDR_H);
    dvpp_seq_set_cmdnode_val(node, GET_HIGH_ADDR(cvdr->vp.rd[PORT0].addr));
    dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE0_BADDR_L);
    dvpp_seq_set_cmdnode_val(node, GET_LOW_ADDR(cvdr->vp.rd[PORT0].addr));
    dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE0_STRIDE);
    dvpp_seq_set_cmdnode_val(node, cvdr->vp.rd[PORT0].stride + 1);

    if (cvdr->vp.rd[PORT1].pixelFmt != (uint32_t)(IDEL)) {
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE1_BADDR_H);
        dvpp_seq_set_cmdnode_val(node, GET_HIGH_ADDR(cvdr->vp.rd[PORT1].addr));
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE1_BADDR_L);
        dvpp_seq_set_cmdnode_val(node, GET_LOW_ADDR(cvdr->vp.rd[PORT1].addr));
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE1_STRIDE);
        dvpp_seq_set_cmdnode_val(node, cvdr->vp.rd[PORT1].stride + 1);
    }

    if (cvdr->vp.rd[PORT2].pixelFmt != (uint32_t)(IDEL)) {
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE2_BADDR_H);
        dvpp_seq_set_cmdnode_val(node, GET_HIGH_ADDR(cvdr->vp.rd[PORT2].addr));
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE2_BADDR_L);
        dvpp_seq_set_cmdnode_val(node, GET_LOW_ADDR(cvdr->vp.rd[PORT2].addr));
        dvpp_seq_set_cmdnode_val(node, REG_CACHE_CHANNEL0_IMAGE2_STRIDE);
        dvpp_seq_set_cmdnode_val(node, cvdr->vp.rd[PORT2].stride + 1);
    }
}

void drv_vpc_config_cmdnode_vlc(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t i = 0;
    const uint32_t busCfgDefaultVal = 0x06U;
    U_VPC_CVDR_BUS_CFG busCfg;

    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));
    struct Cvdr *cvdr = (struct Cvdr*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CVDR));

    // 默认走抢跑模式，不支持可配
    busCfg.u32 = busCfgDefaultVal;
    busCfg.bits.vp_rd_early_run_en = 1;
    dvpp_seq_set_cmdnode_val(node, VPC_CVDR_BUS_CFG);
    dvpp_seq_set_cmdnode_val(node, busCfg.u32);

    // 配置NR口
    drv_vpc_config_cmdnode_nr(decoder, node, node_idx);

    if (top->rdChannelSel == CVDR_CHANNEL) {
        // 配置Cvdr
        for (i = 0; i < VP_RD_NUM; i++) {
            if (cvdr->vp.rd[i].pixelFmt != (uint32_t)(IDEL)) {
                drv_vpc_config_cmdnode_vprd(&(cvdr->vp.rd[i]), node, node_idx, i);
            }
        }
    } else if (top->rdChannelSel == CACHE_CHANNEL) {
        // 配置Cache
        drv_vpc_config_cmdnode_cache(decoder, node, node_idx);
    }
    for (i = 0; i < VP_WR_NUM; i++) {
        if (cvdr->vp.wr[i].pixelFmt != (uint32_t)(IDEL)) {
            drv_vpc_config_cmdnode_vpwr(&(cvdr->vp.wr[i]), node, node_idx, i);
        }
    }
}

void drv_vpc_config_cmdnode_frame_start(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t startRegSize = 0;
    uint32_t remainSize = 0;
    uint32_t nodeReservedSize = 0;
    uint32_t i = 0;
    const uint32_t vp_reverse_size = 16; // 一个口在cmdbuf中占用16Byte
    const uint32_t boot_reverse_size = 8;
    const uint32_t int_byte_size = sizeof(uint32_t);
    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));
    struct Cvdr *cvdr = (struct Cvdr*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CVDR));

    if (top->rdChannelSel != CVDR_CHANNEL) {
        startRegSize += NUM_8;
    } else {
        for (i = 0; i < VP_RD_NUM; i++) {
            if (cvdr->vp.rd[i].pixelFmt == (uint32_t)(IDEL)) {
                continue;
            }
            startRegSize += vp_reverse_size;
        }
        // for early run mode
        startRegSize += boot_reverse_size;
    }

    remainSize = ADDR_ALIGN_SIZE - node->dataSize % ADDR_ALIGN_SIZE;
    if (remainSize < startRegSize) {
        remainSize += ADDR_ALIGN_SIZE;
    }

    nodeReservedSize = (remainSize - startRegSize) / int_byte_size;
    for (i = 0; i < nodeReservedSize; ++i) {
        dvpp_seq_set_cmdnode_val(node, CMDLST_PADDING_DATA);
    }

    if (top->rdChannelSel != CVDR_CHANNEL) {
        // RDMA_CHANNEL, CACHE_CHANNEL配置
        dvpp_seq_set_cmdnode_val(node, REG_VPC_TOP_CONTROL_1);
        dvpp_seq_set_cmdnode_val(node, 0x1);
        return;
    }

    // 芯片要求先写高位后写低位
    for (i = 0; i < VP_RD_NUM; i++) {
        if (cvdr->vp.rd[i].pixelFmt == (uint32_t)(IDEL)) {
            continue;
        }
        dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[i][VP_RD_HIGH_ADDR]);
        dvpp_seq_set_cmdnode_val(node, GET_HIGH_ADDR(cvdr->vp.rd[i].addr));
        dvpp_seq_set_cmdnode_val(node, VPC_VPRD_REG_MAP[i][VP_RD_LOW_ADDR]);
        dvpp_seq_set_cmdnode_val(node, GET_LOW_ADDR(cvdr->vp.rd[i].addr));
    }

    // for early run mode
    dvpp_seq_set_cmdnode_val(node, REG_VPC_TOP_CONTROL_1);
    dvpp_seq_set_cmdnode_val(node, 0x1);
}

void drv_vpc_config_cmdnode_head(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t intMerge = 0;
    uint32_t i = 0;
    const uint32_t rd_merge_offset = 16;
    const uint32_t hfbc_merge_offset = 27;
    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));
    struct Cvdr *cvdr = (struct Cvdr*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_CHNL_CVDR));
    for (i = 0; i < VP_WR_NUM; i++) {
        if (cvdr->vp.wr[i].pixelFmt == (uint32_t)(IDEL)) {
            continue;
        }
        intMerge |= (0x1U << i);
    }
    if (top->rdChannelSel == CVDR_CHANNEL) {
        for (i = 0; i < VP_RD_NUM; i++) {
            if (cvdr->vp.rd[i].pixelFmt == (uint32_t)(IDEL)) {
                continue;
            }
            intMerge |= (0x1U << (rd_merge_offset + i));
        }
    } else if (top->rdChannelSel == RDMA_CHANNEL) {
        intMerge |= (0x1U << hfbc_merge_offset);
    }

    node->headInfo.cvdrIntMerge = intMerge;
    node->headInfo.pipeIntMerge = top->pipeIntMerge;
    node->headInfo.errMask = top->errMask;
}

void drv_vpc_config_cmdnode_top(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    const uint32_t height_offset = 16;
    // milanv1r1 default value is 0xF800, milanv1r3 default value is 0x4F800
    const uint32_t ctl2DefaultVal = 0x4F800U;
    U_VPC_INPUT0_PIC_SIZE in0PicSize;
    U_VPC_OUTPUT_PIC_SIZE outPicSize;
    // blending use in1
    U_VPC_INPUT1_PIC_SIZE in1PicSize;
    U_VPC_CONTROL_2 vpcControl2;
    U_VPC_CONTROL_3 vpcControl3;
    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));

    vpcControl2.u32 = ctl2DefaultVal;
    vpcControl2.bits.rd_sel = top->rdChannelSel;
    vpcControl2.bits.vpc_out_1to3_ch_en = top->out1To3En;
    vpcControl2.bits.in_bitwidth_cfg = top->bitWidth;
    vpcControl2.bits.in0_format_cfg = top->in0Format;
    vpcControl2.bits.in1_format_cfg = top->in1Format;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_TOP_CONTROL_2);
    dvpp_seq_set_cmdnode_val(node, vpcControl2.u32);

    vpcControl3.bits.out_format_cfg = top->outFormat;
    if (top->rdChannelSel == RDMA_CHANNEL) {
        vpcControl3.bits.rdma_linebuf_clk_gt_en = 1;
    } else {
        vpcControl3.bits.rdma_linebuf_clk_gt_en = 0;
    }

    dvpp_seq_set_cmdnode_val(node, REG_VPC_TOP_CONTROL_3);
    dvpp_seq_set_cmdnode_val(node, vpcControl3.u32);

    in0PicSize.u32 = (top->in0Width) | (top->in0Height << height_offset);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_INPUT0_PIC_SIZE);
    dvpp_seq_set_cmdnode_val(node, in0PicSize.u32);

    in1PicSize.u32 = (top->in1Width) | (top->in1Height << height_offset);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_INPUT1_PIC_SIZE);
    dvpp_seq_set_cmdnode_val(node, in1PicSize.u32);

    outPicSize.u32 = (top->outWidth) | (top->outHeight << height_offset);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_OUTPUT_PIC_SIZE);
    dvpp_seq_set_cmdnode_val(node, outPicSize.u32);
}

void drv_vpc_config_cmdnode_in_swap(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_INPUT inSwap;

    struct Swap *in0_swap = (struct Swap*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_IN0SWAP));
    struct PipleLineTop *pipe_top =
        (struct PipleLineTop*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_TOP));

    inSwap.bits.kernel_format = pipe_top->kernelFmt;
    inSwap.bits.channel_out = pipe_top->channelOut;

    // in0 swap
    inSwap.bits.in0_swap_en_cfg = in0_swap->en;
    inSwap.bits.in0_swap_cfg = in0_swap->inPos;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_IN_SWAP);
    dvpp_seq_set_cmdnode_val(node, inSwap.u32);
}

void drv_vpc_config_cmdnode_out_swap(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn)
{
    U_OUT_SWAP outSwap = {0};
    struct Swap *out_swap = NULL;

    if (chn == MAIN_CHN) {
        out_swap = (struct Swap*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_OUT0SWAP));
    } else if (chn == SUB_CHN_1) {
        out_swap = (struct Swap*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_OUT1SWAP));
    }

    if (out_swap == NULL) {
        return;
    }

    outSwap.bits.out_swap_en_cfg = out_swap->en;
    outSwap.bits.out_swap_cfg = out_swap->outPos;

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_OUT_SWAP_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, outSwap.u32);
}

void drv_vpc_config_cmdnode_uvup(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_UVUP_FILTER uvUpFilter;

    struct UvUp *in0_uvup = (struct UvUp*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_IN0UVUP));
    struct UvUp *out_uvup = (struct UvUp*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_OUT0UVUP));
    uvUpFilter.bits.in0_uvup_filt_en = in0_uvup->en;
    uvUpFilter.bits.out_422to444_filt_en = out_uvup->en;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_UVUP_FILTER);
    dvpp_seq_set_cmdnode_val(node, uvUpFilter.u32);
}


static void drv_vpc_config_cmdnode_in_csc_mode(struct Csc *in0_csc, struct CmdNode *node)
{
    U_IN0CSC_MODE in0CscMode;
    U_IN0CSC_CVT_MODE in0CscCvtMode;
    in0CscCvtMode.u32 =0;
    in0CscMode.u32 = 0;
    in0CscMode.bits.in0_csc_cal_core = in0_csc->cscMode.calCore;
    in0CscMode.bits.in0_csc_y_forward = in0_csc->cscMode.yForward;
    in0CscMode.bits.in0_csc_fp_fmac_en = in0_csc->cscMode.fpFmacEn;
    in0CscMode.bits.in0_csc_fp_order = in0_csc->cscMode.fpOrder;
    in0CscMode.bits.in0_csc_fp_pre_offset = in0_csc->cscMode.fpPreOffset;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_IN0CSC_MODE);
    dvpp_seq_set_cmdnode_val(node, in0CscMode.u32);

    dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_IN0_CSS_NORMALIZE_IN);
    dvpp_seq_set_cmdnode_val(node, in0_csc->normalizeIn);

    dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_IN0_CSS_NORMALIZE_OUT);
    dvpp_seq_set_cmdnode_val(node, in0_csc->normalizeOut);

    in0CscCvtMode.bits.in0_csc_cvt_rnd_mode_out = in0_csc->cvtMode.rndModeOut;
    in0CscCvtMode.bits.in0_csc_cvt_clip_en_out = in0_csc->cvtMode.clipEnOut;
    dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_IN0_CSS_CVT_MODE);
    dvpp_seq_set_cmdnode_val(node, in0CscCvtMode.u32);
}

static void drv_vpc_config_cmdnode_out_csc_mode(struct Csc *out0_csc, struct Convert *cvt, struct CmdNode *node)
{
    U_OUTCSC_MODE outCscMode;
    U_OUTCSC_CVT_MODE outCscCvtMode;
    outCscMode.u32 = 0;
    outCscCvtMode.u32 = 0;
    outCscMode.bits.out_csc_cal_core = out0_csc->cscMode.calCore;

    if (cvt->en) {
        outCscMode.bits.out_csc_cal_core = 1;
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_NORMALIZE_OUT);
        dvpp_seq_set_cmdnode_val(node, 0x437f8000); // 255.5: 输出除的系数
        outCscCvtMode.bits.out_csc_cvt_clip_en_out = 1;
        outCscCvtMode.bits.out_csc_cvt_rnd_mode_out = RND_ZERO;
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_CVT_MODE);
        dvpp_seq_set_cmdnode_val(node, outCscCvtMode.u32);
    }

    if (out0_csc->normalizeOut == 0x3B808081) {
        // 使能csc的convert，用于将0-255的u8数据转为归一化的浮点数据
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_NORMALIZE_OUT);
        dvpp_seq_set_cmdnode_val(node, out0_csc->normalizeOut);
        outCscCvtMode.bits.out_csc_cvt_rnd_mode_out = out0_csc->cvtMode.rndModeOut;
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_CVT_MODE);
        dvpp_seq_set_cmdnode_val(node, outCscCvtMode.u32);
    }

    if ((cvt->en == 0) && (out0_csc->normalizeOut != 0x3B808081)) {
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_NORMALIZE_OUT);
        dvpp_seq_set_cmdnode_val(node, 0x3F800000);
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_OUTCSS_CVT_MODE);
        dvpp_seq_set_cmdnode_val(node, 0);
    }

    outCscMode.bits.out_csc_y_forward = out0_csc->cscMode.yForward;
    outCscMode.bits.out_csc_fp_fmac_en = out0_csc->cscMode.fpFmacEn;
    outCscMode.bits.out_csc_fp_order = out0_csc->cscMode.fpOrder;
    outCscMode.bits.out_csc_fp_pre_offset = out0_csc->cscMode.fpPreOffset;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_OUTCSC_MODE);
    dvpp_seq_set_cmdnode_val(node, outCscMode.u32);
}

int32_t drv_vpc_struct_assign(dvpp_decoder *decoder, uint32_t node_idx,
    void *dst, const uint16_t struct_len, uint32_t type)
{
    // 适配场景：结构体新增成员, 需要考虑新旧2 & 3包的兼容性
    // 场景1: 2包是新的, 3包是新的, 功能正常, 无需操作
    // 场景2: 2包是旧的, 3包是新的, tlv_len要大, 二包的结构体要小, 此时无影响, 功能不生效, 无需操作
    // 场景3: 2包是新的, 3包是旧的, tlv_len要小, 二包的结构体要大, 此时直接结构体强转, 会取到新增成员的值, 此时会越界, 需要判断取小值
    int32_t ret;
    uint16_t cpy_len;
    const uint16_t tlv_len = dvpp_get_vpu_mod_len(decoder, node_idx, type);
    void *tlv_data = dvpp_get_vpu_mod_val(decoder, node_idx, type);
    if (tlv_data == NULL) {
        // 如果tlv_data为null，有可能没有copy过来，不需要打ERROR日志
        return -1;
    }
    ret = 0;
    cpy_len = ((tlv_len < struct_len) ? tlv_len : struct_len);

    // 场景3：需要对2包结构体进行清零，避免访问到随机值
    if (tlv_len < struct_len) {
        (void)memset_s(dst, struct_len, 0, struct_len);
    }

    if (decoder->protocol == DVPP_PROTOCOL_VPU) {
        cpy_len = struct_len;
    }
    ret = memcpy_s(dst, (size_t)cpy_len, tlv_data, (size_t)cpy_len);
    if (ret != 0) {
        DVPP_CMDLIST_VPC_LOG_ERROR("memcpy_s failed, ret:%d, size:%u, type:%u.", ret, (uint32_t)cpy_len, type);
        return ret;
    }
    return 0;
}

void drv_vpc_config_cmdnode_csc(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t i = 0;
    U_CSC_ENABLE cscEn;
    U_csc_alpha_padding cscAlphaPadding;
    int32_t ret;
    const uint32_t burst_num = 24;

    struct Csc in0_csc;
    struct Csc out0_csc;
    
    const uint16_t struct_len = (uint16_t)sizeof(struct Csc);
    struct Convert *cvt = NULL;

    cscEn.u32 = 0;
    cscAlphaPadding.u32 = 0;
    in0_csc.alpha = 0;
    out0_csc.alpha = 0;

    ret = drv_vpc_struct_assign(decoder, node_idx, &in0_csc, struct_len, VPU_VPC_TYPE_PIPE_IN0CSC);
    if (ret != 0) {
        in0_csc.alpha = 0;
        in0_csc.en = 0;
        in0_csc.alphaPaddingEn = 0;
    }
    ret = drv_vpc_struct_assign(decoder, node_idx, &out0_csc, struct_len, VPU_VPC_TYPE_PIPE_OUT0CSC);
    if (ret != 0) {
        out0_csc.alpha = 0;
        out0_csc.en = 0;
        out0_csc.alphaPaddingEn = 0;
    }

    cvt = (struct Convert*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_CONVERT));

    cscEn.bits.in0_csc_en = in0_csc.en;
    cscEn.bits.out_csc_en = out0_csc.en;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_CSC_ENABLE);
    dvpp_seq_set_cmdnode_val(node, cscEn.u32);

    if (cscEn.bits.in0_csc_en) {
        dvpp_seq_set_cmdnode_val(node, REG_VPC_IN0_CSC_0 | ((burst_num - 1) << SET_MULTI_REG_OFFSET));
        for (i = 0; i < NUM_24; i++) {
            dvpp_seq_set_cmdnode_val(node, in0_csc.coeff[i]);
        }
    }

    if (cscEn.bits.out_csc_en) {
        dvpp_seq_set_cmdnode_val(node, REG_VPC_OUT_CSC_0 | ((burst_num - 1) << SET_MULTI_REG_OFFSET));
        for (i = 0; i < NUM_24; i++) {
            dvpp_seq_set_cmdnode_val(node, out0_csc.coeff[i]);
        }
    }

    drv_vpc_config_cmdnode_in_csc_mode(&in0_csc, node);
    drv_vpc_config_cmdnode_out_csc_mode(&out0_csc, cvt, node);

    cscAlphaPadding.bits.in0_alpha_en = in0_csc.alphaPaddingEn;
    cscAlphaPadding.bits.in0_alpha = in0_csc.alpha;
    cscAlphaPadding.bits.out_alpha_en = out0_csc.alphaPaddingEn;
    cscAlphaPadding.bits.out_alpha = out0_csc.alpha;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_CSC_ALPHA_PADDING);
    dvpp_seq_set_cmdnode_val(node, cscAlphaPadding.u32);
}

void drv_vpc_config_cmdnode_in0_uvdown(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    const uint32_t burst_num = 3;
    U_IN0_444TO422_1 in0D32Para1;
    U_IN0_444TO422_2 in0D32Para2;
    U_IN0_444TO422_3 in0D32Para3;

    struct UvDown *in0_uvdown =
        (struct UvDown*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_IN0UVDOWN));

    // in0 uvdown
    in0D32Para1.bits.in0_444to422_uvcross_n = in0_uvdown->uvCross;
    in0D32Para1.bits.in0_444to422_0 = in0_uvdown->uv444to422Coeff[NUM_0];
    in0D32Para1.bits.in0_444to422_1 = in0_uvdown->uv444to422Coeff[NUM_1];
    in0D32Para2.bits.in0_444to422_2 = in0_uvdown->uv444to422Coeff[NUM_2];
    in0D32Para2.bits.in0_444to422_3 = in0_uvdown->uv444to422Coeff[NUM_3];
    in0D32Para3.bits.in0_444to422_4 = in0_uvdown->uv444to422Coeff[NUM_4];
    in0D32Para3.bits.in0_444to422_5 = in0_uvdown->uv444to422Coeff[NUM_5];

    dvpp_seq_set_cmdnode_val(node, REG_VPC_IN0_444_TO_422_FILTER | ((burst_num - 1) << SET_MULTI_REG_OFFSET));
    dvpp_seq_set_cmdnode_val(node, in0D32Para1.u32);
    dvpp_seq_set_cmdnode_val(node, in0D32Para2.u32);
    dvpp_seq_set_cmdnode_val(node, in0D32Para3.u32);
}

void drv_vpc_config_cmdnode_out_uvdown(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn)
{
    const uint32_t burst_num = 3;
    U_OUT_444TO422_1 outD32Para1;
    U_OUT_444TO422_2 outD32Para2;
    U_OUT_444TO422_3 outD32Para3;
    U_OUT_YUV422TO420_FILT_OR_CLIP outD32;
    struct UvDown *out_uvdown = NULL;

    if (chn == MAIN_CHN) {
        out_uvdown = (struct UvDown*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_OUT0UVDOWN));
    } else if (chn == SUB_CHN_1) {
        out_uvdown = (struct UvDown*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_OUT1UVDOWN));
    }

    if (out_uvdown == NULL) {
        return;
    }

    // out uvdown
    outD32Para1.bits.out_444to422_uvcross_n = out_uvdown->uvCross;
    outD32Para1.bits.out_444to422_0 = out_uvdown->uv444to422Coeff[NUM_0];
    outD32Para1.bits.out_444to422_1 = out_uvdown->uv444to422Coeff[NUM_1];
    outD32Para2.bits.out_444to422_2 = out_uvdown->uv444to422Coeff[NUM_2];
    outD32Para2.bits.out_444to422_3 = out_uvdown->uv444to422Coeff[NUM_3];
    outD32Para3.bits.out_444to422_4 = out_uvdown->uv444to422Coeff[NUM_4];
    outD32Para3.bits.out_444to422_5 = out_uvdown->uv444to422Coeff[NUM_5];

    dvpp_seq_set_cmdnode_val(
        node, REG_VPC_OUT_444_TO_422_FILTER_ADDR[chn] | ((burst_num - 1) << SET_MULTI_REG_OFFSET));
    dvpp_seq_set_cmdnode_val(node, outD32Para1.u32);
    dvpp_seq_set_cmdnode_val(node, outD32Para2.u32);
    dvpp_seq_set_cmdnode_val(node, outD32Para3.u32);

    outD32.bits.out_422to420_filt_en = out_uvdown->uv422to420FilteEn;
    outD32.bits.out_422to420_clip_en = out_uvdown->uv422to420ClipEn;

    dvpp_seq_set_cmdnode_val(node, REG_VPC_OUT_422_TO_420_FILTER_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, outD32.u32);
}

void drv_vpc_config_cmdnode_precrop(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_PRECROP_1 preCropHor;
    U_PRECROP_2 preCropVer;
    const uint32_t burst_num = 2;

    struct Crop *crop = (struct Crop*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PRECROP_CHN0));

    preCropHor.bits.precrop_hmin = crop->hmin;
    preCropHor.bits.precrop_hmax = crop->hmax;
    preCropVer.bits.precrop_vmin = crop->vmin;
    preCropVer.bits.precrop_vmax = crop->vmax;

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_PRECROP_1 | ((burst_num - 1) << SET_MULTI_REG_OFFSET));
    dvpp_seq_set_cmdnode_val(node, preCropHor.u32);
    dvpp_seq_set_cmdnode_val(node, preCropVer.u32);
}

void drv_vpc_config_cmdnode_postcrop(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_POSTCROP_1 postCropHor;
    U_POSTCROP_2 postCropVer;

    struct Crop *crop = (struct Crop*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_POSTCROP_CHN0));

    postCropHor.bits.postcrop_hmin = crop->hmin;
    postCropHor.bits.postcrop_hmax = crop->hmax;
    postCropVer.bits.postcrop_vmin = crop->vmin;
    postCropVer.bits.postcrop_vmax = crop->vmax;

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POSTCROP1_1_ADDR[MAIN_CHN]);
    dvpp_seq_set_cmdnode_val(node, postCropHor.u32);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POSTCROP1_2_ADDR[MAIN_CHN]);
    dvpp_seq_set_cmdnode_val(node, postCropVer.u32);
}

void drv_vpc_config_cmdnode_resize(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn)
{
    U_RESIZE_MISC_CTRL miscCtrl;
    U_RESIZE_RND_CTRL0 rndCtrl0;
    struct Resize *resize = NULL;
    miscCtrl.u32 = 0x1;
    rndCtrl0.u32 = 0x2;

    if (chn == MAIN_CHN) {
        resize = (struct Resize*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_RESIZE_CHN0));
    } else if (chn == SUB_CHN_1) {
        resize = (struct Resize*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_RESIZE_CHN1));
    } 

    if ((resize == NULL) || (resize->en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("chn%u resize disable.", chn);
        miscCtrl.bits.bypass = 1;
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_MISC_CTRL_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, miscCtrl.u32);
        return;
    }

    miscCtrl.bits.bypass = 0;
    miscCtrl.bits.inc_src = resize->incSrc;
    miscCtrl.bits.align_mode = resize->alignMode;
    miscCtrl.bits.func_type = resize->funcType;
    miscCtrl.bits.split_mode = resize->splitEn;
    rndCtrl0.bits.rnd_ctrl = resize->rndCtrl0;
    if (miscCtrl.bits.split_mode != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_ILEFT_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexInLeft);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_IRIGHT_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexInRight);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_ITOP_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexInTop);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_IBOTTOM_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexInBottom);

        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_OLEFT_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexOutLeft);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_ORIGHT_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexOutRight);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_OTOP_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexOutTop);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_OBOTTOM_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, resize->indexOutBottom);
    }

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_IN_WIDTH_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, resize->inWidth);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_IN_HEIGHT_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, resize->inHeight);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_OUT_WIDTH_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, resize->outWidth);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_OUT_HEIGHT_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, resize->outHeight);

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_MISC_CTRL_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, miscCtrl.u32);
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_RESIZE_RND_CTRL0_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, rndCtrl0.u32);
}

void drv_vpc_config_cmdnode_postpadding(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn)
{
    U_POST_PADDING_RESOLUTION paddingResolution;
    U_POST_PADDING_MODE paddingMode;
    U_POST_PADDING_SIZE_0 paddingSize0;
    U_POST_PADDING_SIZE_1 paddingSize1;
    struct Padding *padding = NULL;

    if (chn == MAIN_CHN) {
        padding = (struct Padding*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_POSTPADDING_CHN0));
    } else if (chn == SUB_CHN_1) {
        padding = (struct Padding*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_POSTPADDING_CHN1));
    }

    if ((padding == NULL) || (padding_en(padding) == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("chn %u post padding disable.", chn);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_SIZE_0_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, 0);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_SIZE_1_ADDR[chn]);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    paddingResolution.bits.postpad_width = padding->inWidth;
    paddingResolution.bits.postpad_height = padding->inHeight;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_RESOLUTION_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, paddingResolution.u32);

    paddingMode.bits.postpad_h_padding_sel = padding->paddingSel;
    paddingMode.bits.postpad_v_padding_sel = padding->paddingSel;
    paddingMode.bits.postpad_dir_priority = padding->dirPriority;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_MODE_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, paddingMode.u32);

    paddingSize0.bits.postpad_v_padding_lines_top = padding->topSize;
    paddingSize0.bits.postpad_v_padding_lines_bottom = padding->bottomSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_SIZE_0_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, paddingSize0.u32);

    paddingSize1.bits.postpad_h_padding_columns_left = padding->leftSize;
    paddingSize1.bits.postpad_h_padding_columns_right = padding->rightSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_POST_PADDING_SIZE_1_ADDR[chn]);
    dvpp_seq_set_cmdnode_val(node, paddingSize1.u32);
    if (padding->paddingSel == VPC_BORDER_CONSTANT) {
        U_POST_PADDING_VALUE_HOR_L horPaddingValueL;
        U_POST_PADDING_VALUE_HOR_M horPaddingValueM;
        U_POST_PADDING_VALUE_HOR_H horPaddingValueH;
        U_POST_PADDING_VALUE_VER_L verPaddingValueL;
        U_POST_PADDING_VALUE_VER_M verPaddingValueM;
        U_POST_PADDING_VALUE_VER_H verPaddingValueH;
        const uint32_t burst_num = 6;
        // cmdlist芯片协议，6个地址连续的寄存器，可以用一个偏移地址表示，偏移地址对应value高16置6
        uint32_t value = REG_VPC_PIPELINE_POST_PADDING_VALUE_HOR_L_ADDR[chn] |
            ((burst_num - 1) << SET_MULTI_REG_OFFSET);
        dvpp_seq_set_cmdnode_val(node, value);

        horPaddingValueH.bits.postpad_h_padding_value_h = padding->regValueHor[NUM_0];
        horPaddingValueM.bits.postpad_h_padding_value_m = padding->regValueHor[NUM_1];
        horPaddingValueL.bits.postpad_h_padding_value_l = padding->regValueHor[NUM_2];
        dvpp_seq_set_cmdnode_val(node, horPaddingValueL.u32);
        dvpp_seq_set_cmdnode_val(node, horPaddingValueM.u32);
        dvpp_seq_set_cmdnode_val(node, horPaddingValueH.u32);

        verPaddingValueH.bits.postpad_v_padding_value_h = padding->regValueVer[NUM_0];
        verPaddingValueM.bits.postpad_v_padding_value_m = padding->regValueVer[NUM_1];
        verPaddingValueL.bits.postpad_v_padding_value_l = padding->regValueVer[NUM_2];
        dvpp_seq_set_cmdnode_val(node, verPaddingValueL.u32);
        dvpp_seq_set_cmdnode_val(node, verPaddingValueM.u32);
        dvpp_seq_set_cmdnode_val(node, verPaddingValueH.u32);
    }
}

void drv_vpc_config_cmdnode_prepadding(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_PRE_PADDING_RESOLUTION paddingResolution;
    U_PRE_PADDING_MODE paddingMode;
    U_PRE_PADDING_SIZE_0 paddingSize0;
    U_PRE_PADDING_SIZE_1 paddingSize1;

    struct Padding *padding =
        (struct Padding*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PREPADDING_CHN0));
    if ((padding == NULL) || (padding_en(padding) == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("ch0 pre padding disable.");
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_SIZE_0);
        dvpp_seq_set_cmdnode_val(node, 0);
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_SIZE_1);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    paddingResolution.bits.prepad_width = padding->inWidth;
    paddingResolution.bits.prepad_height = padding->inHeight;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_RESOLUTION);
    dvpp_seq_set_cmdnode_val(node, paddingResolution.u32);

    paddingMode.bits.prepad_h_padding_sel = padding->paddingSel;
    paddingMode.bits.prepad_v_padding_sel = padding->paddingSel;
    paddingMode.bits.prepad_h_mirror_mode = padding->mirrorMode;
    paddingMode.bits.prepad_v_mirror_mode = padding->mirrorMode;
    paddingMode.bits.prepad_dir_priority = padding->dirPriority;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_MODE);
    dvpp_seq_set_cmdnode_val(node, paddingMode.u32);

    paddingSize0.bits.prepad_v_padding_lines_top = padding->topSize;
    paddingSize0.bits.prepad_v_padding_lines_bottom = padding->bottomSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_SIZE_0);
    dvpp_seq_set_cmdnode_val(node, paddingSize0.u32);

    paddingSize1.bits.prepad_h_padding_columns_left = padding->leftSize;
    paddingSize1.bits.prepad_h_padding_columns_right = padding->rightSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PRE_PADDING_SIZE_1);
    dvpp_seq_set_cmdnode_val(node, paddingSize1.u32);
    if (padding->paddingSel == VPC_BORDER_CONSTANT) {
        U_PRE_PADDING_VALUE_HOR_L horPaddingValueL;
        U_PRE_PADDING_VALUE_HOR_M horPaddingValueM;
        U_PRE_PADDING_VALUE_HOR_H horPaddingValueH;
        U_PRE_PADDING_VALUE_VER_L verPaddingValueL;
        U_PRE_PADDING_VALUE_VER_M verPaddingValueM;
        U_PRE_PADDING_VALUE_VER_H verPaddingValueH;
        const uint32_t burst_num = 6;
        // cmdlist芯片协议，6个地址连续的寄存器，可以用一个偏移地址表示，偏移地址对应value高16置6
        uint32_t value = REG_VPC_PRE_PADDING_VALUE_HOR_L | ((burst_num - 1) << SET_MULTI_REG_OFFSET);
        dvpp_seq_set_cmdnode_val(node, value);

        horPaddingValueH.bits.prepad_h_padding_value_h = padding->regValueHor[NUM_0];
        horPaddingValueM.bits.prepad_h_padding_value_m = padding->regValueHor[NUM_1];
        horPaddingValueL.bits.prepad_h_padding_value_l = padding->regValueHor[NUM_2];
        dvpp_seq_set_cmdnode_val(node, horPaddingValueL.u32);
        dvpp_seq_set_cmdnode_val(node, horPaddingValueM.u32);
        dvpp_seq_set_cmdnode_val(node, horPaddingValueH.u32);

        verPaddingValueH.bits.prepad_v_padding_value_h = padding->regValueVer[NUM_0];
        verPaddingValueM.bits.prepad_v_padding_value_m = padding->regValueVer[NUM_1];
        verPaddingValueL.bits.prepad_v_padding_value_l = padding->regValueVer[NUM_2];
        dvpp_seq_set_cmdnode_val(node, verPaddingValueL.u32);
        dvpp_seq_set_cmdnode_val(node, verPaddingValueM.u32);
        dvpp_seq_set_cmdnode_val(node, verPaddingValueH.u32);
    }
}

void drv_vpc_config_cmdnode_affine(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    uint32_t i = 0;
    U_VPC_AFFINE_OUT_SIZE outSize;
    U_VPC_AFFINE_SRC_SIZE srcSize;
    U_VPC_AFFINE_AFFINE_MODE mode;
    U_VPC_AFFINE_BLK_SIZE blkSize;
    uint32_t matOffset = REG_AFFINE_MATRIX_0;

    struct Affine affine = {0};
    const uint16_t structLen = (uint16_t)sizeof(struct Affine);
    int32_t ret = drv_vpc_struct_assign(decoder, node_idx, &affine, structLen, VPU_VPC_TYPE_PIPE_AFFINE);
    if ((ret != 0) || (affine.en == 0)) {
        // Affine通过控制pipeline的流向来决定是否使能，因此这里不需要额外配置去使能寄存器
        DVPP_CMDLIST_VPC_LOG_DEBUG("affine disable.");
        return;
    }

    blkSize.bits.blk_width = affine.blkWidth;
    blkSize.bits.blk_height = affine.blkHeight;
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_BLK_SIZE);
    dvpp_seq_set_cmdnode_val(node, blkSize.u32);

    mode.bits.coor_sel = affine.coorSel;
    mode.bits.calc_mode = affine.calcMode;
    mode.bits.padding_mode = affine.paddingSel;
    mode.bits.lut_fmt = affine.dataFmt;
    mode.bits.lut_round_mode = affine.rndMode;
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_MODE);
    dvpp_seq_set_cmdnode_val(node, mode.u32);

    outSize.bits.affine_out_width = affine.outWidth;
    outSize.bits.affine_out_height = affine.outHeight;
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_OUT_SIZE);
    dvpp_seq_set_cmdnode_val(node, outSize.u32);

    srcSize.bits.affine_src_width = affine.inWidth;
    srcSize.bits.affine_src_height = affine.inHeight;
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_SRC_SIZE);
    dvpp_seq_set_cmdnode_val(node, srcSize.u32);

    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_OUT_BASE_ADDR_H);
    dvpp_seq_set_cmdnode_val(node, affine.wrAddrH);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_OUT_BASE_ADDR_L);
    dvpp_seq_set_cmdnode_val(node, affine.wrAddrL);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_OUT_STRIDE);
    dvpp_seq_set_cmdnode_val(node, affine.wrStride);

    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_LUT_BASE_ADDR_H);
    dvpp_seq_set_cmdnode_val(node, affine.lutAddrH);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_LUT_BASE_ADDR_L);
    dvpp_seq_set_cmdnode_val(node, affine.lutAddrL);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_LUT_STRIDE);
    dvpp_seq_set_cmdnode_val(node, affine.lutStride);

    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_INVALID_PIX_H);
    dvpp_seq_set_cmdnode_val(node, affine.regValueHor[NUM_2]);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_INVALID_PIX_M);
    dvpp_seq_set_cmdnode_val(node, affine.regValueHor[1]);
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_INVALID_PIX_L);
    dvpp_seq_set_cmdnode_val(node, affine.regValueHor[0]);

    for (i = 0; i < NUM_6; i++) {
        dvpp_seq_set_cmdnode_val(node, matOffset);
        dvpp_seq_set_cmdnode_val(node, affine.coeff[i]);
        matOffset += 0x04;
    }
}

static void drv_vpc_config_cmdnode_posterize(struct CmdNode *node, struct Lut *lut)
{
    U_POSTERIZE_CTRL posterizeCtrl;
    U_POSTERIZE_WIN0_H posterizeWinH;
    U_POSTERIZE_WIN0_V posterizeWinV;

    posterizeCtrl.bits.posterize_en = lut->posterizeEn;
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_POSTERIZE_CTRL_ADDR);
    dvpp_seq_set_cmdnode_val(node, posterizeCtrl.u32);

    posterizeWinH.bits.posterize_win0_hmin = 0U;
    posterizeWinH.bits.posterize_win0_hmax = lut->width - 1U;
    posterizeWinV.bits.posterize_win0_vmin = 0U;
    posterizeWinV.bits.posterize_win0_vmax = lut->height - 1U;

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_POSTERIZE0_VALUE_ADDR);
    dvpp_seq_set_cmdnode_val(node, lut->posterizeValue);

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_POSTERIZE_WIN0_H_ADDR);
    dvpp_seq_set_cmdnode_val(node, posterizeWinH.u32);

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_POSTERIZE_WIN0_V_ADDR);
    dvpp_seq_set_cmdnode_val(node, posterizeWinV.u32);
}

static void drv_vpc_config_cmdnode_cutout_val(struct CmdNode *node, struct Lut *lut)
{
    U_CUTOUT0_R cutout0R;
    U_CUTOUT0_G cutout0G;
    U_CUTOUT0_B cutout0B;
    U_CUTOUT1_R cutout1R;
    U_CUTOUT1_G cutout1G;
    U_CUTOUT1_B cutout1B;
    U_CUTOUT2_R cutout2R;
    U_CUTOUT2_G cutout2G;
    U_CUTOUT2_B cutout2B;
    U_CUTOUT3_R cutout3R;
    U_CUTOUT3_G cutout3G;
    U_CUTOUT3_B cutout3B;
    uint32_t idx;

    // CUTOUT 0-3, R/G/B
    idx = 0;
    cutout0R.bits.cutout0_r = lut->cutoutValue[idx++];
    cutout0G.bits.cutout0_g = lut->cutoutValue[idx++];
    cutout0B.bits.cutout0_b = lut->cutoutValue[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT0_R_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout0R.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT0_G_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout0G.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT0_B_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout0B.u32);

    cutout1R.bits.cutout1_r = lut->cutoutValue[idx++];
    cutout1G.bits.cutout1_g = lut->cutoutValue[idx++];
    cutout1B.bits.cutout1_b = lut->cutoutValue[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT1_R_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout1R.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT1_G_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout1G.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT1_B_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout1B.u32);

    cutout2R.bits.cutout2_r = lut->cutoutValue[idx++];
    cutout2G.bits.cutout2_g = lut->cutoutValue[idx++];
    cutout2B.bits.cutout2_b = lut->cutoutValue[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT2_R_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout2R.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT2_G_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout2G.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT2_B_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout2B.u32);

    cutout3R.bits.cutout3_r = lut->cutoutValue[idx++];
    cutout3G.bits.cutout3_g = lut->cutoutValue[idx++];
    cutout3B.bits.cutout3_b = lut->cutoutValue[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT3_R_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout3R.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT3_G_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout3G.u32);
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT3_B_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout3B.u32);
}

static void drv_vpc_config_cmdnode_cutout_win(struct CmdNode *node, struct Lut *lut)
{
    U_CUTOUT_WIN0_H cutout0WinH;
    U_CUTOUT_WIN0_V cutout0WinV;
    U_CUTOUT_WIN1_H cutout1WinH;
    U_CUTOUT_WIN1_V cutout1WinV;
    U_CUTOUT_WIN2_H cutout2WinH;
    U_CUTOUT_WIN2_V cutout2WinV;
    U_CUTOUT_WIN3_H cutout3WinH;
    U_CUTOUT_WIN3_V cutout3WinV;
    uint32_t idx;

    // CUTOUT Win 0-3, H/V
    idx = 0;
    cutout0WinH.bits.cutout_win0_hmin = lut->cutoutWin[idx++];
    cutout0WinH.bits.cutout_win0_hmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN0_H_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout0WinH.u32);

    cutout0WinV.bits.cutout_win0_vmin = lut->cutoutWin[idx++];
    cutout0WinV.bits.cutout_win0_vmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN0_V_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout0WinV.u32);

    cutout1WinH.bits.cutout_win1_hmin = lut->cutoutWin[idx++];
    cutout1WinH.bits.cutout_win1_hmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN1_H_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout1WinH.u32);

    cutout1WinV.bits.cutout_win1_vmin = lut->cutoutWin[idx++];
    cutout1WinV.bits.cutout_win1_vmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN1_V_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout1WinV.u32);

    cutout2WinH.bits.cutout_win2_hmin = lut->cutoutWin[idx++];
    cutout2WinH.bits.cutout_win2_hmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN2_H_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout2WinH.u32);

    cutout2WinV.bits.cutout_win2_vmin = lut->cutoutWin[idx++];
    cutout2WinV.bits.cutout_win2_vmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN2_V_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout2WinV.u32);

    cutout3WinH.bits.cutout_win3_hmin = lut->cutoutWin[idx++];
    cutout3WinH.bits.cutout_win3_hmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN3_H_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout3WinH.u32);

    cutout3WinV.bits.cutout_win3_vmin = lut->cutoutWin[idx++];
    cutout3WinV.bits.cutout_win3_vmax = lut->cutoutWin[idx++];
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_WIN3_V_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutout3WinV.u32);
}

static void drv_vpc_config_cmdnode_cutout(struct CmdNode *node, struct Lut *lut)
{
    U_CUTOUT_CTRL cutoutCtrl;

    // CUTOUT_CTRL
    cutoutCtrl.bits.cutout0_en = lut->cutoutEn & 0x7U; // 7：bits 2:0
    cutoutCtrl.bits.cutout1_en = lut->cutoutEn & (0x7U << 3); // 7，3：bits 5:3
    cutoutCtrl.bits.cutout2_en = lut->cutoutEn & (0x7U << 6); // 7，6：bits 8:6
    cutoutCtrl.bits.cutout3_en = lut->cutoutEn & (0x7U << 9); // 7，9：bits 11:9
    cutoutCtrl.bits.cutout_mode = 0;
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CUTOUT_CTRL_ADDR);
    dvpp_seq_set_cmdnode_val(node, cutoutCtrl.u32);

    drv_vpc_config_cmdnode_cutout_val(node, lut);
    drv_vpc_config_cmdnode_cutout_win(node, lut);
}

static void drv_vpc_config_cmdnode_lut_value(struct Lut *lut, struct CmdNode *node)
{
    uint32_t remapVal;
    uint32_t i = 0;

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_V_OR_B_ADDR | ((NUM_256 - 1) << SET_MULTI_REG_OFFSET));
    for (i = 0; i < NUM_256; i++) {
        remapVal = ((uint32_t)(lut->mapValueVorB[i])) |
                    (((uint32_t)(lut->mapValueVorB[i])) << NUM_8) |
                    (((uint32_t)(lut->mapValueVorB[i])) << NUM_16) |
                    (((uint32_t)(lut->mapValueVorB[i])) << NUM_24);
        dvpp_seq_set_cmdnode_val(node, remapVal);
    }

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_U_OR_G_ADDR | ((NUM_256 - 1) << SET_MULTI_REG_OFFSET));
    for (i = 0; i < NUM_256; i++) {
        remapVal = ((uint32_t)(lut->mapValueUorG[i])) |
                    (((uint32_t)(lut->mapValueUorG[i])) << NUM_8) |
                    (((uint32_t)(lut->mapValueUorG[i])) << NUM_16) |
                    (((uint32_t)(lut->mapValueUorG[i])) << NUM_24);
        dvpp_seq_set_cmdnode_val(node, remapVal);
    }

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_Y_OR_R_ADDR | ((NUM_256 - 1) << SET_MULTI_REG_OFFSET));
    for (i = 0; i < NUM_256; i++) {
        remapVal = ((uint32_t)(lut->mapValueYorR[i])) |
                    (((uint32_t)(lut->mapValueYorR[i])) << NUM_8) |
                    (((uint32_t)(lut->mapValueYorR[i])) << NUM_16) |
                    (((uint32_t)(lut->mapValueYorR[i])) << NUM_24);
        dvpp_seq_set_cmdnode_val(node, remapVal);
    }
}

static void drv_vpc_config_cmdnode_lut_value_v2(struct Lut *lut, struct CmdNode *node) 
{    
    uint32_t i = 0;
    const uint32_t int_byte_size = sizeof(uint32_t);
    uint32_t remainSize = 0;
    uint32_t nodeFillCnt = 0;
    // 二级指针最小8对齐,当地址为 4、12 时要对齐到8、16
    if (node->dataSize % VPC_CMD_ADDR_ALIGN_SIZE != 0) {
        remainSize = VPC_CMD_ADDR_ALIGN_SIZE - node->dataSize % VPC_CMD_ADDR_ALIGN_SIZE; 
        nodeFillCnt = remainSize / int_byte_size;
        DVPP_CMDLIST_VPC_LOG_DEBUG("fill data data size:%u, fill cnt:%u.", node->dataSize, nodeFillCnt);
        for (i = 0; i < nodeFillCnt; ++i) {
            dvpp_seq_set_cmdnode_val(node, CMDLST_PADDING_DATA);
        }
    }

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_Y_OR_R_ADDR | BYTE_VLD_32_BIT);
    dvpp_seq_set_cmdnode_val(node, lut->mapYorRAddrHigh);
    dvpp_seq_set_cmdnode_val(node, lut->mapYorRAddrLow);
    dvpp_seq_set_cmdnode_val(node, NUM_256);

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_U_OR_G_ADDR | BYTE_VLD_32_BIT);
    dvpp_seq_set_cmdnode_val(node, lut->mapUorGAddrHigh);
    dvpp_seq_set_cmdnode_val(node, lut->mapUorGAddrLow);
    dvpp_seq_set_cmdnode_val(node, NUM_256);

    dvpp_seq_set_cmdnode_val(node, VPC_LUT_REMAP_V_OR_B_ADDR | BYTE_VLD_32_BIT);
    dvpp_seq_set_cmdnode_val(node, lut->mapVorBAddrHigh);
    dvpp_seq_set_cmdnode_val(node, lut->mapVorBAddrLow);
    dvpp_seq_set_cmdnode_val(node, NUM_256);
}

static void drv_vpc_config_cmdnode_lut_module(struct CmdNode *node, struct Lut *lut)
{
    U_LUT_CTRL lutCtrl;
    U_LUT_WIN0_H winH;
    U_LUT_WIN0_V winV;

    lutCtrl.bits.lut_en = 1; // enable window 0
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CTRL_ADDR);
    dvpp_seq_set_cmdnode_val(node, lutCtrl.u32);

    winH.bits.lut_win0_hmin = 0;
    winH.bits.lut_win0_hmax = lut->width - 1U;
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_WIN0_H);
    dvpp_seq_set_cmdnode_val(node, winH.u32);

    winV.bits.lut_win0_vmin = 0;
    winV.bits.lut_win0_vmax = lut->height - 1U;
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_WIN0_V);
    dvpp_seq_set_cmdnode_val(node, winV.u32);

    if (lut->lutSecondaryPointerEn) { //二级指针模式
        drv_vpc_config_cmdnode_lut_value_v2(lut, node);
    } else {
        drv_vpc_config_cmdnode_lut_value(lut, node);
    }
}

void drv_vpc_config_cmdnode_lut(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_GLOBAL_CTRL globalCtrl;
    U_INPUT0_PIC_SIZE picSize;
    int32_t ret;
    const uint32_t lut_module_num = 5;
    struct Lut lut = {0};
    const uint16_t structLen = (uint16_t)sizeof(struct Lut);
    ret = drv_vpc_struct_assign(decoder, node_idx, &lut, structLen, VPU_VPC_TYPE_PIPE_LUT);
    if ((ret != 0) || ((lut.en == 0) && (lut.posterizeEn == 0) && (lut.cutoutEn == 0))) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("lut disable.");
        dvpp_seq_set_cmdnode_val(node, VPC_LUT_OFFSET_ADDR);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    // 子模块先全部设置默认不使能，后续根据需要打开相应功能
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_CTRL_ADDR | ((lut_module_num - 1) << SET_MULTI_REG_OFFSET));
    dvpp_seq_set_cmdnode_val(node, 0); // disable lut
    dvpp_seq_set_cmdnode_val(node, 0); // disable gain
    dvpp_seq_set_cmdnode_val(node, 0); // disable posterize
    dvpp_seq_set_cmdnode_val(node, 0); // disable threshold
    dvpp_seq_set_cmdnode_val(node, 0); // disable cutout

    // 配置公共项
    globalCtrl.bits.enable = 1;
    globalCtrl.bits.index_windows = 0; // window模式
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_OFFSET_ADDR);
    dvpp_seq_set_cmdnode_val(node, globalCtrl.u32);

    picSize.bits.in0_imgwidth_pix = lut.width - 1U;
    picSize.bits.in0_imgheight_pix = lut.height - 1U;
    dvpp_seq_set_cmdnode_val(node, VPC_LUT_INPUT0_PIC_SIZE_ADDR);
    dvpp_seq_set_cmdnode_val(node, picSize.u32);

    // 当前子模块不存在同时使能的场景
    if (lut.posterizeEn != 0) {
        drv_vpc_config_cmdnode_posterize(node, &lut);
    } else if (lut.cutoutEn != 0) {
        drv_vpc_config_cmdnode_cutout(node, &lut);
    } else {
        drv_vpc_config_cmdnode_lut_module(node, &lut);
    }
}

void drv_vpc_config_cmdnode_xflip(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_PIPELINE_ENABLE pipelineEnable;
    U_XFLIP_INSIZE xflipSize;
    struct Flip *flip = (struct Flip*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_FLIP));
    struct Top *top = (struct Top*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_TOP));
    pipelineEnable.bits.multilevel_zoom_en = top->multiLevelZoomEn;
    xflipSize.u32 = 0;

    if ((flip == NULL || (flip_en(flip) == 0))) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("flip disable.");
        pipelineEnable.bits.xflip_en = 0;
        dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_XFLIP_LUT_HISTOGRAM);
        dvpp_seq_set_cmdnode_val(node, pipelineEnable.u32);
        return;
    }

    if (flip->enX) {
        pipelineEnable.bits.xflip_en = 1;
        pipelineEnable.bits.xflip_pos = (flip->isPreX != 0) ? 1 : 0;
        xflipSize.bits.xflip_in_width = flip->inWidth;
        xflipSize.bits.xflip_in_height = flip->inHeight;
    }

    dvpp_seq_set_cmdnode_val(node, REG_VPC_PIPELINE_XFLIP_LUT_HISTOGRAM);
    dvpp_seq_set_cmdnode_val(node, pipelineEnable.u32);
    dvpp_seq_set_cmdnode_val(node, XFLIP_CHANNEL_1_WIDTH_HEIGHT_REG);
    dvpp_seq_set_cmdnode_val(node, xflipSize.u32);
}

void drv_vpc_config_cmdnode_filter(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    // 注意：Ascend310B的blur mode,rnd mode和Ascend910_73有差异，Ascend310B使用默认配置
    U_FILTER_CTRL1 ctr1;
    U_FILTER_INSIZE insize;
    U_FILTER_OUTSIZE outsize;
    U_FILTER_PADDING_MODE paddingMode;

    uint32_t control = 0;
    uint32_t value = 0;
    uint32_t i = 0;
    uint32_t coeffBaseAddr = 0;

    struct Filter filter = {0};
    const uint16_t structLen = (uint16_t)sizeof(struct Filter);
    int32_t ret = drv_vpc_struct_assign(decoder, node_idx, &filter, structLen, VPU_VPC_TYPE_PIPE_FILTER);
    if ((ret != 0) || (filter.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("filter disable.");
        dvpp_seq_set_cmdnode_val(node, REG_FILTER_CONTROL0);
        dvpp_seq_set_cmdnode_val(node, control);
        return;
    }

    drv_vpc_config_cmdnode_filter_control(node, &filter);

    ctr1.bits.filter_ksize_x = filter.ksizeX;
    ctr1.bits.filter_ksize_y = filter.ksizeY;

    insize.bits.in_height = filter.inHeight - 1;
    insize.bits.in_width = filter.inWidth - 1;

    outsize.bits.out_height = filter.outHeight - 1;
    outsize.bits.out_width = filter.outWidth - 1;

    paddingMode.bits.dir_priority = 0; // first vertical direction
    paddingMode.bits.v_padding_sel = filter.paddingSel;
    paddingMode.bits.h_padding_sel = filter.paddingSel;

    value = REG_FILTER_CONTROL1 | (0xAU << SET_MULTI_REG_OFFSET);
    dvpp_seq_set_cmdnode_val(node, value);
    dvpp_seq_set_cmdnode_val(node, ctr1.u32);
    dvpp_seq_set_cmdnode_val(node, insize.u32);
    dvpp_seq_set_cmdnode_val(node, outsize.u32);
    dvpp_seq_set_cmdnode_val(node, paddingMode.u32);
    dvpp_seq_set_cmdnode_val(node, filter.regValueHor[NUM_0]);
    dvpp_seq_set_cmdnode_val(node, filter.regValueHor[NUM_1]);
    dvpp_seq_set_cmdnode_val(node, filter.regValueHor[NUM_2]);
    dvpp_seq_set_cmdnode_val(node, filter.regValueVer[NUM_0]);
    dvpp_seq_set_cmdnode_val(node, filter.regValueVer[NUM_1]);
    dvpp_seq_set_cmdnode_val(node, filter.regValueVer[NUM_2]);
    dvpp_seq_set_cmdnode_val(node, filter.rndMode);
    dvpp_seq_set_cmdnode_val(node, REG_FILTER_SCALE);
    dvpp_seq_set_cmdnode_val(node, filter.scale);
    dvpp_seq_set_cmdnode_val(node, REG_FILTER_DELTA);
    dvpp_seq_set_cmdnode_val(node, filter.delta);
    coeffBaseAddr = REG_FILTER_COEFF1;
    for (i = 0; i < NUM_25; i++) {
        dvpp_seq_set_cmdnode_val(node, coeffBaseAddr);
        dvpp_seq_set_cmdnode_val(node, filter.coeff[i]);
        coeffBaseAddr += 0x04;
    }
}

uint8_t drv_vpc_get_yuvscaler_half_line_mode(uint64_t iv, uint32_t hsize)
{
    const uint64_t scaler_radio_1_per_6 = 0x2AAB;
    const uint64_t scaler_radio_1_per_2 = 0x8000;
    const uint32_t line_size = 4096;

    if ((hsize <= (line_size >> 1)) && (iv >= scaler_radio_1_per_6) && (iv <= scaler_radio_1_per_2)) {
        return 1;
    }

    return 0;
}

void drv_vpc_config_cmdnode_blending(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_BLENDING_MODE blendMode;
    U_LAY0_IN_SIZE lay0InSize;
    U_LAY1_IN_SIZE lay1InSize;
    U_LEFT_POSITION leftPosition;
    U_COEF_ALPHA coefAlpha;
    U_COEF_BETA coefBeta;
    U_COEF_GAMMA coefGamma;

    struct Blend blending;
    const uint16_t struct_len = (uint16_t)sizeof(struct Blend);
    int32_t ret = drv_vpc_struct_assign(decoder, node_idx, &blending, struct_len, VPU_VPC_TYPE_PIPE_BLENDING);
    if ((ret != 0) || (blending.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("blending disable.");
        // blending去使能通过设置输出通道
        return;
    }

    blendMode.bits.bld_mode = blending.blendMode;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_BLENDING_MODE);
    dvpp_seq_set_cmdnode_val(node, blendMode.u32);

    lay0InSize.u32 = blending.lay0InSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_LAY0_IN_SIZE);
    dvpp_seq_set_cmdnode_val(node, lay0InSize.u32);

    lay1InSize.u32 = blending.lay1InSize;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_LAY1_IN_SIZE);
    dvpp_seq_set_cmdnode_val(node, lay1InSize.u32);

    leftPosition.u32 = blending.leftPosition;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_LEFT_POSITION);
    dvpp_seq_set_cmdnode_val(node, leftPosition.u32);

    coefAlpha.u32 = blending.coefAlpha;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_COEF_ALPHA);
    dvpp_seq_set_cmdnode_val(node, coefAlpha.u32);

    coefBeta.u32 = blending.coefBeta;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_COEF_BETA);
    dvpp_seq_set_cmdnode_val(node, coefBeta.u32);

    coefGamma.u32 = blending.coefGamma;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_PYRAMID_COEF_GAMMA);
    dvpp_seq_set_cmdnode_val(node, coefGamma.u32);
}

void drv_vpc_config_cmdnode_histogram(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_HISTOGRAM_MODE_V2 mode;
    U_HISTOGRAM_CLEAR_MODE clrMode;

    const uint32_t CMDLST_HW_AXI_ADDR_DUMP_H = VPC_CMDLST_OFFSET_ADDR + 0x028;
    const uint32_t CMDLST_HW_AXI_ADDR_DUMP_L = VPC_CMDLST_OFFSET_ADDR + 0x02c;

    struct Histogram hist;
    const uint16_t struct_len = (uint16_t)sizeof(struct Histogram);
    int32_t ret = drv_vpc_struct_assign(decoder, node_idx, &hist, struct_len, VPU_VPC_TYPE_PIPE_HISTOGRAM);
    
    mode.u32 = 0;
    clrMode.u32 = 0;
    if ((ret != 0) || ((hist.en == 0) && (hist.maxminEn == 0))) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("histogram disable.");
        mode.bits.histogram_en = 0;
        mode.bits.histogram_maxmin_en = 0;
        dvpp_seq_set_cmdnode_val(node, REG_HISTOGRAM_MODE);
        dvpp_seq_set_cmdnode_val(node, mode.u32);
        return;
    }

    clrMode.bits.histogram_clr = 1;
    dvpp_seq_set_cmdnode_val(node, REG_HISTOGRAM_CLEAR_MODE);
    dvpp_seq_set_cmdnode_val(node, clrMode.u32);

    dvpp_seq_set_cmdnode_val(node, REG_HISTOGRAM_MODE);
    mode.bits.histogram_en = hist.en;
    mode.bits.histogram_mode = hist.mode;
    mode.bits.histogram_maxmin_en = hist.maxminEn;
    node->isNeedWrBack = 1;
    node->wrBackSize = hist.readSize;
    node->wrBackValAddr = hist.readAddr;
    node->len1 = NUM_128;

    // 记录要进行读操作的寄存器
    if (hist.isYuvSum) {
        node->wrBackRegAddr = REG_YUVSUM_READ_ADDR;
    } else if (hist.maxminEn != 0) {
        node->wrBackRegAddr = REG_FRAME_MAX_Y_ADDR;
    } else {
        node->wrBackRegAddr = REG_HISTOGRAM_READ_ADDR;
    }

    dvpp_seq_set_cmdnode_val(node, mode.u32);

    dvpp_ext_set_cmdnode_val(node, CMDLST_HW_AXI_ADDR_DUMP_H);
    dvpp_ext_set_cmdnode_val(node, (uint32_t)(node->wrBackValAddr >> NUM_39));
    dvpp_ext_set_cmdnode_val(node, CMDLST_HW_AXI_ADDR_DUMP_L);
    dvpp_ext_set_cmdnode_val(node, (node->wrBackValAddr  >> NUM_7) & 0xFFFFFFFF);
}
