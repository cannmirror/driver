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
#include "vpc_reg.h"
#include "vpc_pipe_milan_pixaug_reg_c_union_define.h"
#include "vpc_yuvscale_milan_v1r1_reg_c_union_define.h"
#include "pipeline_module.h"
#include "dvpp_vpu_types.h"
#include "dvpp_cmdlist_log.h"

const uint32_t CMDLIST_DU_VAL = 1;

static void drv_vpc_config_cmdnode_cvt(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_CVT_CTRL cvtCtrl;
    U_CVT_SCALE cvtScale;

    struct Convert *convert = (struct Convert*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_CONVERT));

    cvtCtrl.bits.cvt_en = convert->en;
    cvtCtrl.bits.cvt_scale_en = convert->scaleEn;
    cvtCtrl.bits.cvt_rnd = convert->rnd;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_CVT_CTRL);
    dvpp_seq_set_cmdnode_val(node, cvtCtrl.u32);

    cvtScale.bits.cvt_scale = convert->scale;
    dvpp_seq_set_cmdnode_val(node, REG_VPC_CVT_SCALE);
    dvpp_seq_set_cmdnode_val(node, cvtScale.u32);
}

static void drv_vpc_config_cmdnode_hsv(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_HSV_MODE_SET hsvMode;

    struct Hsv *hsv = (struct Hsv*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_HSV));
    if ((hsv == NULL) || (hsv_en(hsv) == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("hsv disable.");
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_HSV_MODE_SET);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    hsvMode.bits.rgb2hsv_en = hsv->rgb2hsvEn;
    hsvMode.bits.hsv2rgb_en = hsv->hsv2rgbEn;
    hsvMode.bits.hsv_saturation_en = hsv->satEn;
    hsvMode.bits.hsv_hue_en = hsv->hueEn;
    hsvMode.bits.hsv_hue_fst = hsv->hueFst;
    dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_HSV_MODE_SET);
    dvpp_seq_set_cmdnode_val(node, hsvMode.u32);

    if (hsvMode.bits.hsv_saturation_en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_HSV_SCALE_SAT);
        dvpp_seq_set_cmdnode_val(node, hsv->scaleSat);
    }

    if (hsvMode.bits.hsv_hue_en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIPELINE_HSV_DELTA_HUE);
        dvpp_seq_set_cmdnode_val(node, hsv->deltaHue);
    }
}

static void drv_vpc_config_cmdnode_normalize(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    struct PixAug *pixaug = (struct PixAug*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PIXAUG));
    if ((pixaug == NULL) || (pixaug->normalize.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("pixaug disable.");
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_EN);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }
    dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_EN);
    dvpp_seq_set_cmdnode_val(node, pixaug->normalize.en);
    if (pixaug->normalize.en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_MODE);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.mode);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_SCALE_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.scale[0]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_SCALE_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.scale[1]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_SCALE_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.scale[NUM_2]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_DELTA_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.delta[0]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_DELTA_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.delta[1]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_NORMALIZE_DELTA_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->normalize.delta[NUM_2]);
    }
}

static void drv_vpc_config_cmdnode_contrast(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    struct PixAug *pixaug = (struct PixAug*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PIXAUG));
    if ((pixaug == NULL) || (pixaug->contrast.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("pixaug disable.");
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_EN);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_EN);
    dvpp_seq_set_cmdnode_val(node, pixaug->contrast.en);
    if (pixaug->contrast.en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_FACTOR);
        dvpp_seq_set_cmdnode_val(node, pixaug->contrast.para0);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_MEAN_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->contrast.para1);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_MEAN_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->contrast.para2);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CONTRAST_MEAN_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->contrast.para3);
    }
}

static void drv_vpc_config_cmdnode_enhance(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    struct PixAug *pixaug = (struct PixAug*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PIXAUG));
    if ((pixaug == NULL) || (pixaug->enhance.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("pixaug disable.");
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_ENHANCE_EN);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_ENHANCE_EN);
    dvpp_seq_set_cmdnode_val(node, pixaug->enhance.en);
    if (pixaug->enhance.en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_ENHANCE_ADDER);
        dvpp_seq_set_cmdnode_val(node, pixaug->enhance.adder);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_ENHANCE_MULTIPLE);
        dvpp_seq_set_cmdnode_val(node, pixaug->enhance.multipler);
    }
}
static void drv_vpc_config_cmdnode_clip(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_CLIP_EN clipCfg;

    struct PixAug *pixaug = (struct PixAug*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_PIXAUG));
    if ((pixaug == NULL) || (pixaug->clip.en == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("pixaug disable.");
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CLIP_EN);
        dvpp_seq_set_cmdnode_val(node, 0);
        return;
    }

    clipCfg.bits.clip_en = pixaug->clip.en;
    clipCfg.bits.clip_mode = pixaug->clip.mode;
    clipCfg.bits.clip_above = pixaug->clip.above;
    dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CLIP_EN);
    dvpp_seq_set_cmdnode_val(node, clipCfg.u32);
    if (pixaug->clip.en != 0) {
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MAX_VALUE_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.max[0]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MIN_VALUE_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.min[0]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MAX_VALUE_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.max[1]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MIN_VALUE_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.min[1]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MAX_VALUE_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.max[NUM_2]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_MIN_VALUE_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.min[NUM_2]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CVAL_R);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.cval[0]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CVAL_G);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.cval[1]);
        dvpp_seq_set_cmdnode_val(node, REG_PIXAUG_CVAL_B);
        dvpp_seq_set_cmdnode_val(node, pixaug->clip.cval[NUM_2]);
    }
}

static void drv_vpc_config_cmdnode_affine3D(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    U_VPC_AFFINE_3D_MODE mode3d;
    U_VPC_AFFINE_3D_MODE_DEPTH mode3dDepth;
    uint32_t matOffset = REG_AFFINE_MATRIX_6;
    uint32_t i;

    struct Affine affine = {0};
    const uint16_t structLen = (uint16_t)sizeof(struct Affine);
    int32_t ret = drv_vpc_struct_assign(decoder, node_idx, &affine, structLen, VPU_VPC_TYPE_PIPE_AFFINE);
    if ((ret != 0) || (affine.en == 0)) {
        // Affine通过控制pipeline的流向来决定是否使能，所以这里不需要额外配置来使能寄存器
        DVPP_CMDLIST_VPC_LOG_DEBUG("affine disable.");
        return;
    }

    mode3d.bits.mode_3d = affine.en3d;
    dvpp_seq_set_cmdnode_val(node, REG_AFFINE_3D_MODE);
    dvpp_seq_set_cmdnode_val(node, mode3d.u32);
    if (mode3d.bits.mode_3d != 0) {
        mode3dDepth.bits.affine_out_depth = affine.outDepth3d;
        mode3dDepth.bits.affine_src_depth = affine.inDepth3d;
        dvpp_seq_set_cmdnode_val(node, REG_AFFINE_3D_MODE_DEPTH);
        dvpp_seq_set_cmdnode_val(node, mode3dDepth.u32);
        for (i = NUM_6; i < NUM_12; i++) {
            dvpp_seq_set_cmdnode_val(node, matOffset);
            matOffset += 0x04;
            dvpp_seq_set_cmdnode_val(node, affine.coeff[i]);
        }
    }
}

static void drv_vpc_config_cmdnode_pixaug(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    // normalize
    drv_vpc_config_cmdnode_normalize(decoder, node, node_idx);
    // enhance
    drv_vpc_config_cmdnode_enhance(decoder, node, node_idx);
    // contrast
    drv_vpc_config_cmdnode_contrast(decoder, node, node_idx);
    // clip
    drv_vpc_config_cmdnode_clip(decoder, node, node_idx);
}

static void drv_vpc_config_cmdnode_yuvscaler_4tap_coeff(struct CmdNode *node, struct YuvScale *yuvScale)
{
    U_COEFF_V_Y0 verticalY0;
    U_COEFF_V_Y1 verticalY1;
    U_COEFF_V_UV0 verticalUv0;
    U_COEFF_V_UV1 verticalUv1;
    uint32_t i = 0;
    for (i = 0; i < NUM_8; i++) {
        // y_v 4tap
        verticalY0.u32 = 0;
        verticalY0.bits.vcoeff0y = 0;
        verticalY0.bits.vcoeff1y = yuvScale->coeff.scale[1].taps4[i * NUM_4];
        verticalY0.bits.vcoeff2y = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_1];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_Y0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalY0.u32);
        verticalY1.u32 = 0;
        verticalY1.bits.vcoeff3y = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_2];
        verticalY1.bits.vcoeff4y = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_3];
        verticalY1.bits.vcoeff5y = 0;
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_Y1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalY1.u32);
        // uv_v_coeff 4 tap
        verticalUv0.u32 = 0;
        verticalUv0.bits.vcoeff0uv = 0;
        verticalUv0.bits.vcoeff1uv = yuvScale->coeff.scale[1].taps4[i * NUM_4];
        verticalUv0.bits.vcoeff2uv = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_1];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_UV0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalUv0.u32);
        verticalUv1.u32 = 0;
        verticalUv1.bits.vcoeff3uv = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_2];
        verticalUv1.bits.vcoeff4uv = yuvScale->coeff.scale[1].taps4[(i * NUM_4) + NUM_3];
        verticalUv1.bits.vcoeff5uv = 0;
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_UV1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalUv1.u32);
    }
}

static void drv_vpc_config_cmdnode_yuvscaler_6tap_coeff(struct CmdNode *node, struct YuvScale *yuvScale)
{
    U_COEFF_V_UV0 verticalUv0;
    U_COEFF_V_UV1 verticalUv1;
    U_COEFF_V_Y0 verticalY0;
    U_COEFF_V_Y1 verticalY1;
    uint32_t i = 0;
    for (i = 0; i < NUM_8; i++) {
        verticalY0.u32 = 0;
        verticalY0.bits.vcoeff0y = yuvScale->coeff.scale[1].taps6[i * NUM_6];
        verticalY0.bits.vcoeff1y = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_1];
        verticalY0.bits.vcoeff2y = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_2];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_Y0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalY0.u32);
        verticalY1.u32 = 0;
        verticalY1.bits.vcoeff3y = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_3];
        verticalY1.bits.vcoeff4y = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_4];
        verticalY1.bits.vcoeff5y = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_5];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_Y1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalY1.u32);

        // uv_v_coeff 6 tap
        verticalUv0.u32 = 0;
        verticalUv0.bits.vcoeff0uv = yuvScale->coeff.scale[1].taps6[i * NUM_6];
        verticalUv0.bits.vcoeff1uv = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_1];
        verticalUv0.bits.vcoeff2uv = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_2];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_UV0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalUv0.u32);
        verticalUv1.u32 = 0;
        verticalUv1.bits.vcoeff3uv = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_3];
        verticalUv1.bits.vcoeff4uv = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_4];
        verticalUv1.bits.vcoeff5uv = yuvScale->coeff.scale[1].taps6[(i * NUM_6) + NUM_5];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_V_UV1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, verticalUv1.u32);
    }
}

static void drv_vpc_config_cmdnode_yuvscaler_coeff(
    struct CmdNode *node, struct YuvScale *yuvScale, uint8_t isHalfLineMode)
{
    U_COEFF_H_Y0 horizonY0;
    U_COEFF_H_Y1 horizonY1;
    U_COEFF_H_UV0 horizonUv0;
    U_COEFF_H_UV1 horizonUv1;
    uint32_t i = 0;
    for (i = 0; i < NUM_8; i++) {
        // y_h_coeff 6 tap
        horizonY0.u32 = 0;
        horizonY0.bits.hcoeff0y = yuvScale->coeff.scale[0].taps6[i * NUM_6];
        horizonY0.bits.hcoeff1y = yuvScale->coeff.scale[0].taps6[(i * NUM_6) + NUM_1];
        horizonY0.bits.hcoeff2y = yuvScale->coeff.scale[0].taps6[(i * NUM_6) + NUM_2];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_H_Y0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, horizonY0.u32);
        horizonY1.u32 = 0;
        horizonY1.bits.hcoeff3y = yuvScale->coeff.scale[0].taps6[(i * NUM_6) + NUM_3];
        horizonY1.bits.hcoeff4y = yuvScale->coeff.scale[0].taps6[(i * NUM_6) + NUM_4];
        horizonY1.bits.hcoeff5y = yuvScale->coeff.scale[0].taps6[(i * NUM_6) + NUM_5];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_H_Y1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, horizonY1.u32);

        // uv_h_coeff 4 tap
        horizonUv0.u32 = 0;
        horizonUv0.bits.hcoeff0uv = yuvScale->coeff.scale[0].taps4[i * NUM_4];
        horizonUv0.bits.hcoeff1uv = yuvScale->coeff.scale[0].taps4[(i * NUM_4) + NUM_1];
        horizonUv0.bits.hcoeff2uv = yuvScale->coeff.scale[0].taps4[(i * NUM_4) + NUM_2];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_H_UV0 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, horizonUv0.u32);
        horizonUv1.u32 = 0;
        horizonUv1.bits.hcoeff3uv = yuvScale->coeff.scale[0].taps4[(i * NUM_4) + NUM_3];
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_COEFF_H_UV1 + i * 0x4);
        dvpp_seq_set_cmdnode_val(node, horizonUv1.u32);
    }

    if (isHalfLineMode != 0) { // 6 tap
        drv_vpc_config_cmdnode_yuvscaler_6tap_coeff(node, yuvScale);
    } else { // 4tap
        drv_vpc_config_cmdnode_yuvscaler_4tap_coeff(node, yuvScale);
    }
}

static void drv_vpc_config_cmdnode_yuvscaler(
    dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn)
{
    // 注意cloud版本和mini版本的yuv基地址不一样
    U_BYPASS regBypass;
    U_IVINC vinc;
    uint32_t startAddr = REG_YUV_SCALER_IHLEFT;
    uint32_t addrWithOffset = startAddr | (0x1UL << SET_MULTI_REG_OFFSET);
    uint8_t isHalfLineMode = 0;
    struct YuvScale *yuvscale = NULL;
    if (chn == MAIN_CHN) {
        yuvscale = (struct YuvScale*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_YUVSCALER_CHN0));
    } else if (chn == SUB_CHN_1) {
        yuvscale = (struct YuvScale*)(dvpp_get_vpu_mod_val(decoder, node_idx, VPU_VPC_TYPE_PIPE_YUVSCALER_CHN1));
    }
    if ((yuvscale == NULL) || (yuvscaler_en(yuvscale) == 0)) {
        DVPP_CMDLIST_VPC_LOG_DEBUG("chn%u yuvscaler disable.", chn);
        regBypass.u32 = 0;
        regBypass.bits.bypass = NUM_3;
        dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_BYPASS);
        dvpp_seq_set_cmdnode_val(node, regBypass.u32);
        return;
    }

    dvpp_seq_set_cmdnode_val(node, addrWithOffset);
    dvpp_seq_set_cmdnode_val(node, yuvscale->ihleftInt);
    dvpp_seq_set_cmdnode_val(node, yuvscale->ihrightInt);

    startAddr = REG_YUV_SCALER_IVTOP;
    addrWithOffset = startAddr | (0x1UL << SET_MULTI_REG_OFFSET);
    dvpp_seq_set_cmdnode_val(node, addrWithOffset);
    dvpp_seq_set_cmdnode_val(node, yuvscale->ivtopInt);
    dvpp_seq_set_cmdnode_val(node, yuvscale->ivbotInt);

    dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_IHINC);
    dvpp_seq_set_cmdnode_val(node, yuvscale->ihinc);

    isHalfLineMode = drv_vpc_get_yuvscaler_half_line_mode(yuvscale->ivinc, yuvscale->outWidth);
    vinc.u32 = 0;
    vinc.bits.ivinc = yuvscale->ivinc;
    vinc.bits.halflinemode = isHalfLineMode;
    dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_IVINC);
    dvpp_seq_set_cmdnode_val(node, vinc.u32);

    regBypass.u32 = 0;
    regBypass.bits.bypass = yuvscale->bypass;
    dvpp_seq_set_cmdnode_val(node, REG_YUV_SCALER_BYPASS);
    dvpp_seq_set_cmdnode_val(node, regBypass.u32);

    startAddr = REG_YUV_SCALER_IWIDTH;
    addrWithOffset = startAddr | (0x3UL << SET_MULTI_REG_OFFSET);
    dvpp_seq_set_cmdnode_val(node, addrWithOffset);
    dvpp_seq_set_cmdnode_val(node, yuvscale->inWidth);
    dvpp_seq_set_cmdnode_val(node, yuvscale->inHeight);
    dvpp_seq_set_cmdnode_val(node, yuvscale->outWidth);
    dvpp_seq_set_cmdnode_val(node, yuvscale->outHeight);

    drv_vpc_config_cmdnode_yuvscaler_coeff(node, yuvscale, isHalfLineMode);
}

void drv_vpc_config_cmdnode_filter_control(struct CmdNode *node, struct Filter *filter)
{
    U_FILTER_BLUR_CTRL blurCtrl;
    U_FILTER_CTRL0 ctr0;
    ctr0.bits.filter_en = filter->en;
    ctr0.bits.filter_mode_sel = filter->mode;

    dvpp_seq_set_cmdnode_val(node, REG_FILTER_CONTROL0);
    dvpp_seq_set_cmdnode_val(node, ctr0.u32);

    blurCtrl.bits.blur_mode_sel = filter->blurMode;
    blurCtrl.bits.blur_edge_bypass = filter->edgeBypass;
    dvpp_seq_set_cmdnode_val(node, REG_FILTER_BLUR_CTRL);
    dvpp_seq_set_cmdnode_val(node, blurCtrl.u32);

    dvpp_seq_set_cmdnode_val(node, REG_FILTER_SORT_CONTROL);
    dvpp_seq_set_cmdnode_val(node, filter->sortMode);
}

void drv_vpc_cmdnode_config_interrupt(struct CmdNode *node)
{
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_INT_MASK);
    dvpp_ext_set_cmdnode_val(node, node->headInfo.errMask);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_INT_MASK2);
    dvpp_ext_set_cmdnode_val(node, 0xFFFFFFFF);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_CMDLIST_IN_INT_CTRL);
    dvpp_ext_set_cmdnode_val(node, 0x2);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_OUT_DMUXEN);
    dvpp_ext_set_cmdnode_val(node, 0xC);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_RDMA_CVDR);
    dvpp_ext_set_cmdnode_val(node, node->headInfo.cvdrIntMerge);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_PIPE);
    dvpp_ext_set_cmdnode_val(node, node->headInfo.pipeIntMerge);
}

void drv_vpc_cmdnode_clear_interrupt(struct CmdNode *node)
{
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_CVDR_INT_CLR1);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_CVDR_INT_CLR2);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_CVDR_INT_CLR3);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_CVDR_INT_CLR4);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_INT_CLR);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_INT_CLR2);
    dvpp_ext_set_cmdnode_val(node, 0xffffffff);
}

void drv_vpc_build_cmdnode(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    drv_vpc_config_cmdnode_reverse_space(node);
    drv_vpc_config_cmdnode_top(decoder, node, node_idx);
    drv_vpc_config_cmdnode_in_swap(decoder, node, node_idx);
    drv_vpc_config_cmdnode_out_swap(decoder, node, node_idx, MAIN_CHN);
    drv_vpc_config_cmdnode_uvup(decoder, node, node_idx);
    drv_vpc_config_cmdnode_cvt(decoder, node, node_idx);
    drv_vpc_config_cmdnode_csc(decoder, node, node_idx);
    drv_vpc_config_cmdnode_in0_uvdown(decoder, node, node_idx);
    drv_vpc_config_cmdnode_out_uvdown(decoder, node, node_idx, MAIN_CHN);
    drv_vpc_config_cmdnode_precrop(decoder, node, node_idx);
    drv_vpc_config_cmdnode_prepadding(decoder, node, node_idx);
    drv_vpc_config_cmdnode_resize(decoder, node, node_idx, MAIN_CHN);
    drv_vpc_config_cmdnode_yuvscaler(decoder, node, node_idx, MAIN_CHN);
    drv_vpc_config_cmdnode_filter(decoder, node, node_idx);
    drv_vpc_config_cmdnode_lut(decoder, node, node_idx);
    drv_vpc_config_cmdnode_blending(decoder, node, node_idx);
    drv_vpc_config_cmdnode_xflip(decoder, node, node_idx);
    drv_vpc_config_cmdnode_postcrop(decoder, node, node_idx);
    drv_vpc_config_cmdnode_postpadding(decoder, node, node_idx, MAIN_CHN);
    drv_vpc_config_cmdnode_histogram(decoder, node, node_idx);
    drv_vpc_config_cmdnode_hsv(decoder, node, node_idx);
    drv_vpc_config_cmdnode_pixaug(decoder, node, node_idx);
    drv_vpc_config_cmdnode_affine(decoder, node, node_idx);
    drv_vpc_config_cmdnode_affine3D(decoder, node, node_idx);
    drv_vpc_config_cmdnode_vlc(decoder, node, node_idx);
    drv_vpc_config_cmdnode_frame_start(decoder, node, node_idx);
    drv_vpc_config_cmdnode_head(decoder, node, node_idx);
}

void drv_vpc_cmdnode_set_next_node(struct CmdBuf *cmd_buf, struct CmdNode *node)
{
    const uint32_t REG_CONNECT_HEAD_1 = VPC_CMDLST_OFFSET_ADDR + 0x0d0;
    const uint32_t REG_CONNECT_HEAD_2 = VPC_CMDLST_OFFSET_ADDR + 0x0c4;
    const uint32_t REG_CONNECT_HEAD_3 = VPC_CMDLST_OFFSET_ADDR + 0x0c8;
    const uint32_t REG_CONNECT_HEAD_4 = VPC_CMDLST_OFFSET_ADDR + 0x0cc;
    uint64_t baseAddr = (uint64_t)(uintptr_t)(node->next->startAddr) -
                        (uint64_t)(uintptr_t)(cmd_buf->startAddr) + cmd_buf->ioStartAddr;

    dvpp_ext_set_cmdnode_val(node, REG_CONNECT_HEAD_2);
    dvpp_ext_set_cmdnode_val(node, (CMDLIST_DU_VAL << NUM_5) | D16);
    dvpp_ext_set_cmdnode_val(node, REG_CONNECT_HEAD_3);
    dvpp_ext_set_cmdnode_val(node, (node->next->dataSize >> 1) - 1);
    dvpp_ext_set_cmdnode_val(node, REG_CONNECT_HEAD_4);
    dvpp_ext_set_cmdnode_val(node, 0);
    dvpp_ext_set_cmdnode_val(node, REG_CONNECT_HEAD_1);
    dvpp_ext_set_cmdnode_val(node, GET_LOW_ADDR(baseAddr));
}

void drv_vpc_config_sqelist(struct CmdBuf *cmd_buf, uint32_t sqe_idx, uint32_t blkdim)
{
    uint32_t* cur_sqe_addr = (uint32_t*)(uintptr_t)(cmd_buf->bufAddr + sqe_idx * SQE_LEN);
    uint64_t offset = (uint64_t)(uintptr_t)(cmd_buf->cmdHeadNode->startAddr) -
        (uint64_t)(uintptr_t)(cmd_buf->startAddr);
    uint64_t startAddr = cmd_buf->ioStartAddr + offset;

    cur_sqe_addr[NUM_0] = DVPP_SQE_VPC; // Type=12 VPC 任务
    cur_sqe_addr[NUM_0] |= (1 << SQE_WRCQE_OFFSET);
    cur_sqe_addr[NUM_0] |= (blkdim << SQE_BLKDIM_OFFSET); // 第0个4字节的第16-31位表示blockdim的数量
    cur_sqe_addr[NUM_3] &= ~(0xff << SQE_BLKDIM_OFFSET);
    cur_sqe_addr[NUM_3] |= (KERNEL_CREDIT << SQE_TIMEOUT_OFFSET);
    cur_sqe_addr[NUM_3] |= (0x1 << SQE_PTRMODE_OFFSET); // 二级指针模式
    cur_sqe_addr[NUM_4] = GET_HIGH_ADDR(startAddr);
    cur_sqe_addr[NUM_6] = (0x3 << NUM_24) | VPC_VP_RD_CFG_10;
    cur_sqe_addr[NUM_7] = (0x1 << NUM_5) | D16;
    cur_sqe_addr[NUM_8] = (cmd_buf->cmdHeadNode->dataSize >> 1) - 1;
    cur_sqe_addr[NUM_9] = 0;
    cur_sqe_addr[NUM_10] = GET_LOW_ADDR(startAddr);
}

void drv_vpc_config_sqe(struct CmdBuf *cmd_buf, enum dvpp_sqe_ptr_mode mode, uint32_t blkdim, struct dvpp_sqe *sqe)
{
    if (mode == DVPP_SQE_FIRST_PTR_MODE) {
        uint64_t offset = (uint64_t)(uintptr_t)(cmd_buf->cmdHeadNode->startAddr) -
                          (uint64_t)(uintptr_t)(cmd_buf->startAddr);
        uint64_t startAddr = cmd_buf->ioStartAddr + offset;
        uint32_t timeout = ((sqe->filed[NUM_3] >> SQE_TIMEOUT_OFFSET) & 0xff);

        sqe->filed[NUM_0] = DVPP_SQE_VPC;
        sqe->filed[NUM_0] |= (1 << SQE_WRCQE_OFFSET);
        if ((timeout == 0xffU) || (timeout == 0x0U)) { // 未配置或配置非法值0, 则使用默认值
            sqe->filed[NUM_3] &= ~(0xff << SQE_TIMEOUT_OFFSET);
            sqe->filed[NUM_3] |= (KERNEL_CREDIT << SQE_TIMEOUT_OFFSET);
        }
        sqe->filed[NUM_3] &= ~(0x1 << SQE_PTRMODE_OFFSET);
        sqe->filed[NUM_4] = GET_HIGH_ADDR(startAddr);
        sqe->filed[NUM_6] = (0x3 << NUM_24) | VPC_VP_RD_CFG_10;
        sqe->filed[NUM_7] = (0x1 << NUM_5) | D16;
        sqe->filed[NUM_8] = (cmd_buf->cmdHeadNode->dataSize >> 1) - 1;
        sqe->filed[NUM_9] = 0;
        sqe->filed[NUM_10] = GET_LOW_ADDR(startAddr);
    } else {
        // 二级链表模式(多block dim)
        sqe->filed[NUM_0] = DVPP_SQE_VPC; // Type=12 VPC任务
        sqe->filed[NUM_0] |= (1 << SQE_WRCQE_OFFSET);
        sqe->filed[NUM_0] |= (blkdim << SQE_BLKDIM_OFFSET); // blkdim字段
        sqe->filed[NUM_3] &= ~(0xff << SQE_BLKDIM_OFFSET);
        sqe->filed[NUM_3] |= (KERNEL_CREDIT << SQE_TIMEOUT_OFFSET);
        sqe->filed[NUM_3] |= (0x1 << SQE_PTRMODE_OFFSET); // 1表示二级指针模式
        sqe->filed[NUM_4] = GET_LOW_ADDR(cmd_buf->ioAddr); // cmdstruct基地址低32位
        sqe->filed[NUM_5] = GET_HIGH_ADDR(cmd_buf->ioAddr); // cmdstruct基地址高16位
        sqe->filed[NUM_5] &= 0x1FFFF;
        sqe->filed[NUM_5] |= (0x1 << SQE_ADDRTYPE_OFFSET); // 表示地址类型 1:虚拟地址 0:物理地址
    }
}

void drv_vpc_cmdnode_config_writeback_front(struct CmdNode *pos_node, struct CmdNode *pre_node)
{
    uint32_t i = 0;
    uint32_t burstSize = 0;
    uint32_t offset_addr = 0;
    const uint32_t burstMaxSize = 256 * sizeof(uint32_t);
    // 配置读操作的15端口
    dvpp_ext_set_cmdnode_val(pos_node, VPC_VP_WR_CFG_15);
    dvpp_ext_set_cmdnode_val(pos_node, 0);
    // size配置为(寄存器个数+1)*4-1
    dvpp_ext_set_cmdnode_val(pos_node, VPC_VP_WR_AXI_LINE_15);
    dvpp_ext_set_cmdnode_val(pos_node, pre_node->wrBackSize + sizeof(uint32_t) - 1);
    dvpp_ext_set_cmdnode_val(pos_node, VPC_VP_WR_LWG_15);
    dvpp_ext_set_cmdnode_val(pos_node, pre_node->wrBackSize  + sizeof(uint32_t) - 1);
    dvpp_ext_set_cmdnode_val(pos_node, VPC_VP_WR_AXI_FS_HIGH_15);
    dvpp_ext_set_cmdnode_val(pos_node, GET_HIGH_ADDR(pre_node->wrBackValAddr));
    dvpp_ext_set_cmdnode_val(pos_node, VPC_VP_WR_AXI_FS_15);
    dvpp_ext_set_cmdnode_val(pos_node, GET_LOW_ADDR(pre_node->wrBackValAddr));
    // 配置读操作的寄存器地址，配置完后硬件就会启动
    for (i = 0; i < pre_node->wrBackSize / burstMaxSize; i++) {
        dvpp_ext_set_cmdnode_val(pos_node, (pre_node->wrBackRegAddr + offset_addr) | 0x1 | (0xff << NUM_24));
        offset_addr += 0x400;
    }

    burstSize = pre_node->wrBackSize % burstMaxSize;
    if (burstSize != 0) {
        burstSize = burstSize / sizeof(uint32_t) - 1;
        dvpp_ext_set_cmdnode_val(pos_node, (pre_node->wrBackRegAddr + offset_addr) | 0x1 | (burstSize << NUM_24));
    }
}

static void drv_vpc_add_read_node(struct CmdBuf *cmd_buf)
{
    struct CmdNode *pre_node = cmd_buf->cmdTailNode;
    struct CmdNode *node = dvpp_alloc_one_cmdnode(cmd_buf);
    if (node == NULL) {
        DVPP_CMDLIST_LOG_ERROR("add read node failed.\n");
        return;
    }
    drv_vpc_config_cmdnode_reverse_space(node);

    drv_vpc_cmdnode_clear_interrupt(node);

    dvpp_ext_set_cmdnode_val(node, REG_VPC_CMDLIST_IN_INT_CTRL);
    dvpp_ext_set_cmdnode_val(node, 0x2);
    // 设置中断mask
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_INT_MASK);
    dvpp_ext_set_cmdnode_val(node, 0x0000A020);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_INT_MASK2);
    dvpp_ext_set_cmdnode_val(node, 0x00FDFFFF);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_CVDR_INT_MASK4);
    dvpp_ext_set_cmdnode_val(node, 0x07ff07ff);
    // 设置merge中断
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_RDMA_CVDR);
    dvpp_ext_set_cmdnode_val(node, 0x0 | (0x1 << NUM_15));
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_PIPE);
    dvpp_ext_set_cmdnode_val(node, 0x0);
    // 设置中断上报通路
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_OUT_DMUXEN);
    dvpp_ext_set_cmdnode_val(node, 0xC);
    // 设置读cmd
    drv_vpc_cmdnode_config_writeback_front(node, pre_node);

    cmd_buf->posAddr = node->posAddr;
}

void drv_vpc_cmdnode_connect_last_node(struct CmdBuf *cmd_buf)
{
    struct CmdNode *node = cmd_buf->cmdTailNode;
    struct CmdNode *pre_node = cmd_buf->cmdTailNode->prev;

    // 倒数第二帧配置了回写的场景
    if ((pre_node != NULL) && (pre_node->isNeedWrBack == 1)) {
        drv_vpc_cmdnode_config_writeback_front(node, pre_node);
    }

    // 最后一帧配置了回写的场景
    if (node->isNeedWrBack == 1) {
        drv_vpc_add_read_node(cmd_buf);
        drv_vpc_cmdnode_set_next_node(cmd_buf, node);
    }

    drv_vpc_cmdnode_clear_interrupt(node);
    if (node != cmd_buf->cmdTailNode) {
        dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_INT_MASK);
        dvpp_ext_set_cmdnode_val(node, 0xFFFFFFFF);
        dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_INT_MASK2);
        dvpp_ext_set_cmdnode_val(node, 0xFFFFFFFF);
    } else {
        dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_INT_MASK);
        dvpp_ext_set_cmdnode_val(node, node->headInfo.errMask);
        dvpp_ext_set_cmdnode_val(node, REG_VPC_NORM_INT_MASK2);
        dvpp_ext_set_cmdnode_val(node, 0xFFFDFFFF);
    }
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_RDMA_CVDR);
    dvpp_ext_set_cmdnode_val(node, node->headInfo.cvdrIntMerge);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_EOF_INT1_MERGE_ENABLE_PIPE);
    dvpp_ext_set_cmdnode_val(node, node->headInfo.pipeIntMerge);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_CMDLIST_IN_INT_CTRL);
    dvpp_ext_set_cmdnode_val(node, 0x2);
    dvpp_ext_set_cmdnode_val(node, REG_VPC_ERR_OUT_DMUXEN);
    dvpp_ext_set_cmdnode_val(node, 0xC);
}
