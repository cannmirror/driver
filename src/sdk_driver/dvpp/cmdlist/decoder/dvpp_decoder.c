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

#include "dvpp_decoder.h"
#include "dvpp_cmdlist_log.h"

static dvpp_decoder_ops g_dvpp_decoder_items[DVPP_PROTOCOL_BUTT] = {0};

dvpp_decoder_ops *dvpp_get_decoder_ops(void)
{
    return g_dvpp_decoder_items;
}

int32_t dvpp_init_decoder(dvpp_decoder *decoder)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_init_decoder != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_init_decoder(decoder->decoder);
    }

    return -1;
}
int32_t dvpp_decode_args(dvpp_decoder *decoder)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_decode_args != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_decode_args(decoder->decoder);
    }

    return -1;
}

uint16_t dvpp_get_node_cnt(dvpp_decoder *decoder)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_node_cnt != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_node_cnt(decoder->decoder);
    }

    return 0;
}

uint16_t dvpp_get_batch_cnt(dvpp_decoder *decoder)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_batch_cnt != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_batch_cnt(decoder->decoder);
    }

    return 1;
}

uint16_t dvpp_get_node_cnt_of_batch(dvpp_decoder *decoder, uint32_t index)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_node_cnt_of_batch != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_node_cnt_of_batch(decoder->decoder, index);
    }

    return 0;
}

uint32_t dvpp_get_module_type(dvpp_decoder *decoder)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_module_type != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_module_type(decoder->decoder);
    }

    return 0;
}

void* dvpp_get_vpu_mod_val(dvpp_decoder *decoder, uint32_t node_idx, uint32_t type)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_vpu_mod_val != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_vpu_mod_val(decoder->decoder, node_idx, type);
    }

    return NULL;
}

uint16_t dvpp_get_vpu_mod_len(dvpp_decoder *decoder, uint32_t node_idx, uint32_t type)
{
    if (g_dvpp_decoder_items[decoder->protocol].dvpp_get_vpu_mod_len != NULL) {
        return g_dvpp_decoder_items[decoder->protocol].dvpp_get_vpu_mod_len(decoder->decoder, node_idx, type);
    }

    return 0;
}