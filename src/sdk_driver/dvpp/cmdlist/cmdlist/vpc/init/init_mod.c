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

#include "pipeline_module.h"

void vp_disable(struct VideoPorts *vp)
{
    uint8_t i = 0;
    for (i = 0; i < VP_RD_NUM; i++) {
        vp->rd[i].pixelFmt = IDEL;
        vp->rd[i].yflipEn = 0;
    }

    for (i = 0; i < VP_WR_NUM; i++) {
        vp->wr[i].pixelFmt = IDEL;
        vp->wr[i].yflipEn = 0;
    }
}

uint8_t crop_en(struct Crop *crop)
{
    if (crop->hmin == 0 && crop->hmax == 0xffff && crop->vmin == 0 && crop->vmax == 0xffff) {
        return 0;
    }

    return 1;
}

void crop_disable(struct Crop *crop)
{
    crop->hmin = 0;
    crop->hmax = 0xffff;
    crop->vmin = 0;
    crop->vmax = 0xffff;
}

uint8_t padding_en(struct Padding *padding)
{
    if (padding->bottomSize == 0 && padding->topSize == 0 &&
        padding->rightSize == 0 && padding->leftSize == 0) {
        return 0;
    }

    return 1;
}

void padding_disable(struct Padding *padding)
{
    padding->bottomSize = 0;
    padding->topSize = 0;
    padding->rightSize = 0;
    padding->leftSize = 0;
}

uint8_t flip_en(struct Flip *flip)
{
    if (flip->enX || flip->enY) {
        return 1;
    }

    return 0;
}

void flip_disable(struct Flip *flip)
{
    flip->enX = 0;
    flip->enY = 0;
}

uint8_t resize_en(struct Resize *resize)
{
    if ((resize->inHeight == resize->outHeight) && (resize->inWidth == resize->outWidth)) {
        return 0;
    }

    return 1;
}

void resize_disable(struct Resize *resize)
{
    resize->en = 0;
    resize->splitEn = 0;
}

uint8_t yuvscaler_en(struct YuvScale *scaler)
{
    return scaler->bypass != YUV_SCALER_BYPASS;
}

void yuvscaler_disable(struct YuvScale *scaler)
{
    scaler->ihinc = SCALER_RADIO_1_TIME;
    scaler->ivinc = SCALER_RADIO_1_TIME;
    scaler->bypass = YUV_SCALER_BYPASS;
}

void yuvscaler_bypass(struct YuvScale *scaler)
{
    scaler->bypass = 0;
    if (scaler->inWidth == scaler->outWidth) {
        scaler->ihinc = SCALER_RADIO_1_TIME;
        scaler->bypass |= YUV_SCALER_ENABLE_HOR;
    }

    if (scaler->inHeight == scaler->outHeight) {
        scaler->ivinc = SCALER_RADIO_1_TIME;
        scaler->bypass |= YUV_SCALER_ENABLE_VER;
    }
}

void hsv_disable(struct Hsv *hsv)
{
    hsv->hueEn = 0;
    hsv->satEn = 0;
    hsv->hsv2rgbEn = 0;
    hsv->rgb2hsvEn = 0;
}

uint8_t hsv_en(struct Hsv *hsv)
{
    return ((hsv->hueEn == 1) || (hsv->satEn == 1) || (hsv->hsv2rgbEn == 1) || (hsv->rgb2hsvEn == 1));
}

void affine_disable(struct Affine *affine)
{
    affine->en = 0;
    affine->en3d = 0;
}

void pixaug_disable(struct PixAug *pixaug)
{
    pixaug->enhance.en = 0;
    pixaug->contrast.en = 0;
    pixaug->contrastV2.secondaryPointerEn = 0;
    pixaug->transform.en = 0;
    pixaug->normalize.en = 0;
    pixaug->clip.en = 0;
}

uint8_t mosaic_en(struct Mosaic *mosaic)
{
    uint8_t i;
    for (i = 0; i < MOSAIC_REGION_NUM; i++) {
        if (mosaic->mosaicRegion[i].en != 0) {
            return 1;
        }
    }

    return 0;
}

void mosaic_disable(struct Mosaic *mosaic)
{
    uint8_t i;
    for (i = 0; i < MOSAIC_REGION_NUM; i++) {
        mosaic->mosaicRegion[i].en = 0;
    }
}

uint8_t cover_en(struct Cover *cover)
{
    uint8_t i;
    for (i = 0; i < COVER_REGION_NUM; i++) {
        if (cover->coverRegion[i].en != 0) {
            return 1;
        }
    }

    return 0;
}

void cover_disable(struct Cover *cover)
{
    uint8_t i;
    for (i = 0; i < COVER_REGION_NUM; i++) {
        cover->coverRegion[i].en = 0;
    }
}

uint8_t osd_en(struct Osd *osd)
{
    uint8_t i;
    for (i = 0; i < OSD_REGION_NUM; i++) {
        if (osd->osdRegion[i].en != 0) {
            return 1;
        }
    }

    return 0;
}

void osd_disable(struct Osd *osd)
{
    uint8_t i;
    for (i = 0; i < OSD_REGION_NUM; i++) {
        osd->osdRegion[i].en = 0;
        osd->osdRegion[i].osdCsc.en = 0;
    }
}

void csc_disable(struct Csc *csc)
{
    uint8_t i;
    csc->en = 0;
    csc->alphaPaddingEn = 0;
    csc->cscOut10bEn = 0;
    csc->cvtMode.rndModeOut = RND_NEAREST_EVEN;
    csc->cvtMode.clipEnOut = 0;
    csc->cvtMode.clipEnIn = 0;
    csc->alpha = 0;
    csc->normalizeIn = 0x3F800000;
    csc->normalizeOut = 0x3F800000;
    for (i = 0; i < 6; i++) { // 6个阈值，2组，输入和输出，3个通道
        csc->clipThresh[i] = 0xffff0000;    
    }
}