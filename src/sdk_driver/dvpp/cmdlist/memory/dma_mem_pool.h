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

#ifndef DMA_MEM_POOL_H
#define DMA_MEM_POOL_H

#include "mem_pool_comm.h"

#ifdef __cplusplus
extern "C" {
#endif

int32_t init_dma_pool(struct mem_pool_info* dma_pool);
void deinit_dma_pool(struct mem_pool_info* dma_pool);

#ifdef __cplusplus
}
#endif
#endif // #ifndef DMA_MEM_POOL_H