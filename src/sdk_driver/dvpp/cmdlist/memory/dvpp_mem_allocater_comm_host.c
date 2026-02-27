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

#include "args_mem_pool.h"
#include "dma_mem_pool.h"
#include "mem_allocater.h"
#include "dvpp_cmdlist_log.h"
#include "dvpp_mem_allocater_comm.h"
#include "dvpp_vmng.h"

#define MEM_POOL_NUM DVPP_VMNG_DEVICE_NUM_MAX // 虚拟设备场景，打平后的device id 0~1123

static struct mem_pool_info *g_jpegd_args_pool[MEM_POOL_NUM] = {0};
static struct mem_pool_info *g_jpegd_dma_pool[MEM_POOL_NUM] = {0};
static struct mem_pool_info *g_jpege_args_pool[MEM_POOL_NUM] = {0};
static struct mem_pool_info *g_jpege_dma_pool[MEM_POOL_NUM] = {0};
static struct mem_pool_info *g_vpc_args_pool[MEM_POOL_NUM] = {0};
static struct mem_pool_info *g_vpc_dma_pool[MEM_POOL_NUM] = {0};

static const uint32_t JPEGD_MEM_NODE_NUM_HOST = 64 * 8; // jpegd args节点总个数64*8
static const uint32_t JPEGE_MEM_NODE_NUM_HOST = 64 * 2; // jpege args节点总个数64*2
static const uint32_t VPC_MEM_NODE_NUM_HOST = 64 * 4; // vpc args节点总个数64*4

int32_t dvpp_init_mem_allocater(void)
{
    // 因内存池首次创建在申请第一个node时进行，因此此接口暂不支持
    DVPP_CMDLIST_LOG_ERROR("the interface not supported\n");
    return -1;
}

void dvpp_create_mem_pools_by_id(uint32_t pool_id)
{
    // 只做创建pool，如果设备上未使用DVPP业务，不用初始化，避免资源浪费，初始化pool在首次创建申请第一个node时进行
    create_mem_pool(&g_jpegd_dma_pool[pool_id], get_mutex(DVPP_SQE_JPEGD));
    create_mem_pool(&g_jpegd_args_pool[pool_id], get_mutex(DVPP_SQE_JPEGD));

    create_mem_pool(&g_jpege_dma_pool[pool_id], get_mutex(DVPP_SQE_JPEGE));
    create_mem_pool(&g_jpege_args_pool[pool_id], get_mutex(DVPP_SQE_JPEGE));

    create_mem_pool(&g_vpc_dma_pool[pool_id], get_mutex(DVPP_SQE_VPC));
    create_mem_pool(&g_vpc_args_pool[pool_id], get_mutex(DVPP_SQE_VPC));
}

void dvpp_deinit_mem_allocater(void)
{
    // 循环遍历释放所有的内存池
    int i;
    for (i = 0; i < MEM_POOL_NUM; ++i) {
        dvpp_destroy_mem_pools_by_id(i);
    }
}

void dvpp_destroy_mem_pools_by_id(uint32_t pool_id)
{
    // 销毁各模块的dma和args内存池，同时销毁pool
    destroy_mem_pool(deinit_dma_pool, &g_jpegd_dma_pool[pool_id], get_mutex(DVPP_SQE_JPEGD));
    destroy_mem_pool(deinit_args_pool, &g_jpegd_args_pool[pool_id], get_mutex(DVPP_SQE_JPEGD));

    destroy_mem_pool(deinit_dma_pool, &g_jpege_dma_pool[pool_id], get_mutex(DVPP_SQE_JPEGE));
    destroy_mem_pool(deinit_args_pool, &g_jpege_args_pool[pool_id], get_mutex(DVPP_SQE_JPEGE));

    destroy_mem_pool(deinit_dma_pool, &g_vpc_dma_pool[pool_id], get_mutex(DVPP_SQE_VPC));
    destroy_mem_pool(deinit_args_pool, &g_vpc_args_pool[pool_id], get_mutex(DVPP_SQE_VPC));
}

struct mem_pool_info* get_mem_pool(enum dvpp_sqe_type mod_type, enum mem_node_type node_type, uint32_t pool_id)
{
    struct mem_pool_info** mod_mem_pool;
    ka_mutex_t* mtx;
    switch (mod_type) {
        case DVPP_SQE_VPC :
            mod_mem_pool = (node_type == ARGS_MEM_NODE) ? &g_vpc_args_pool[pool_id] : &g_vpc_dma_pool[pool_id];
            mtx = get_mutex(DVPP_SQE_VPC);
            break;

        case DVPP_SQE_JPEGE :
            mod_mem_pool = (node_type == ARGS_MEM_NODE) ? &g_jpege_args_pool[pool_id] : &g_jpege_dma_pool[pool_id];
            mtx = get_mutex(DVPP_SQE_JPEGE);
            break;

        case DVPP_SQE_JPEGD :
            mod_mem_pool = (node_type == ARGS_MEM_NODE) ? &g_jpegd_args_pool[pool_id] : &g_jpegd_dma_pool[pool_id];
            mtx = get_mutex(DVPP_SQE_JPEGD);
            break;

        default :
            DVPP_CMDLIST_LOG_ERROR("get mem pool fail, pool_id = %u, mod_type = %d, node_type = %d.\n",
                pool_id, mod_type, node_type);
            return NULL;
    }

    // 尝试创建pool，已经创建，不会重复创建
    create_mem_pool(mod_mem_pool, mtx);

    if (*mod_mem_pool == NULL) {
        DVPP_CMDLIST_LOG_ERROR("create mem pool fail, pool_id = %u, mod_type = %d, node_type = %d.\n",
            pool_id, mod_type, node_type);
    }
    return *mod_mem_pool;
}

uint32_t get_node_num(enum dvpp_sqe_type mod_type)
{
    switch (mod_type) {
        case DVPP_SQE_VPC :
            return VPC_MEM_NODE_NUM_HOST;

        case DVPP_SQE_JPEGE :
            return JPEGE_MEM_NODE_NUM_HOST;

        case DVPP_SQE_JPEGD :
            return JPEGD_MEM_NODE_NUM_HOST;

        default :
            DVPP_CMDLIST_LOG_ERROR("get node num fail, mod_type = %d not support.\n", mod_type);
            return 0;
    }
}

init get_init_func(enum mem_node_type node_type)
{
    init func = (node_type == ARGS_MEM_NODE) ? init_args_pool : init_dma_pool;
    return func;
}

int32_t check_pool_id(uint32_t pool_id)
{
    if (pool_id >= MEM_POOL_NUM) {
        DVPP_CMDLIST_LOG_ERROR("pool_id(%u) >= max_pool_num(%d)\n", pool_id, MEM_POOL_NUM);
        return -1;
    }
    return 0;
}
