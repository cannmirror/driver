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

#include "pipeline_top.h"

void reset_pipeline(struct Top *top, struct Channel *channel, struct PipeLine *pipeline)
{
    top->vpcStart = 0;
    channel->cache.en3d = 0;
    channel->cache.runMode = 0;
    channel->earlyRunEn = 1;
    vp_disable(&channel->cvdr.vp);
    crop_disable(&pipeline->kernel.preCrop);
    crop_disable(&pipeline->kernel.postCrop[MAIN_CHN]);
    crop_disable(&pipeline->kernel.postCrop[SUB_CHN_1]);
    padding_disable(&pipeline->kernel.prePadding);
    padding_disable(&pipeline->kernel.postPadding[MAIN_CHN]);
    padding_disable(&pipeline->kernel.postPadding[SUB_CHN_1]);
    pipeline->kernel.blend.en = 0;
    pipeline->kernel.flip.enX = 0;
    pipeline->kernel.flip.enY = 0;
    pipeline->kernel.convert.en = 0;
    pipeline->kernel.convert.scaleEn = 0;
    resize_disable(&pipeline->kernel.resize[MAIN_CHN]);
    resize_disable(&pipeline->kernel.resize[SUB_CHN_1]);
    yuvscaler_disable(&pipeline->kernel.yuvScale[MAIN_CHN]);
    yuvscaler_disable(&pipeline->kernel.yuvScale[SUB_CHN_1]);
    pipeline->kernel.histogram.en = 0;
    pipeline->kernel.histogram.isYuvSum = 0;
    pipeline->kernel.histogram.maxminEn = 0;
    pipeline->kernel.dumpReg.en = 0;
    pipeline->kernel.lut.en = 0;
    pipeline->kernel.lut.posterizeEn = 0;
    pipeline->kernel.lut.cutoutEn = 0;
    pipeline->kernel.lut.lutSecondaryPointerEn = 0;
    pipeline->kernel.filter.en = 0;
    pipeline->kernel.pyramid.en = 0;
    hsv_disable(&pipeline->kernel.hsv);
    pixaug_disable(&pipeline->kernel.pixaug);
    affine_disable(&pipeline->kernel.affine);
    mosaic_disable(&pipeline->kernel.mosaic);
    cover_disable(&pipeline->kernel.cover);
    osd_disable(&pipeline->kernel.osd);
    pipeline->kernel.rotate.en = 0;
    pipeline->kernel.dataTransform.mode = 0;
    pipeline->kernel.dataTransform.en = 0;
    csc_disable(&pipeline->input.in0Csc);
    csc_disable(&pipeline->input.in1Csc);
    csc_disable(&pipeline->output[MAIN_CHN].csc);
    csc_disable(&pipeline->output[SUB_CHN_1].csc);
    csc_disable(&pipeline->output[SUB_CHN_2].csc);
    pipeline->input.in0IrCsc.en = 0;
    pipeline->input.in0IrCsc.readEn = 0;
    pipeline->kernel.level2Pointer.srcEn = 0;
    pipeline->kernel.level2Pointer.dstEn = 0;
}