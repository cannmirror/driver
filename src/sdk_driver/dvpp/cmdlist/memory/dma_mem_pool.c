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

#include "dma_mem_pool.h"

#include "ka_memory_pub.h"

#include "dvpp_cmdlist_log.h"
#include "dvpp_dma_mem_ctrl.h"

int32_t init_dma_pool(struct mem_pool_info* dma_pool)
{
    uint32_t i;
    uint32_t node_mem_size;
    uint32_t total_node_size = 0;
    struct mem_node* dma_node = NULL;

    if (dma_pool == NULL) {
        DVPP_CMDLIST_LOG_ERROR("dma_pool is null\n");
        return -1;
    }

    total_node_size = sizeof(struct mem_node) * dma_pool->mem_node_num;
    if (total_node_size == 0) {
        DVPP_CMDLIST_LOG_ERROR("dma_pool total_node_size = %u, mem_node_num = %u\n",
            total_node_size, dma_pool->mem_node_num);
        return -1;
    }

    // 初始化内存池链表
    KA_INIT_LIST_HEAD(&dma_pool->node_list.list);

    // 申请内存池，并记录基地址，用于后续统一释放
    dma_pool->base_vaddr = dvpp_dma_alloc(dma_pool->pool_id, dma_pool->mem_size, &dma_pool->base_paddr, KA_GFP_ATOMIC);
    if (dma_pool->base_vaddr == NULL) {
        DVPP_CMDLIST_LOG_ERROR("alloc dma mem fail. mem_size:%u\n", dma_pool->mem_size);
        return -1;
    }

    // 申请链表nodes，并记录基地址，用于后续统一释放
    dma_pool->base_nodes_addr = ka_mm_vmalloc(sizeof(struct mem_node) * dma_pool->mem_node_num);
    if (dma_pool->base_nodes_addr == NULL) {
        DVPP_CMDLIST_LOG_ERROR("alloc mem nodes fail. dma_nodes_size:%lu\n",
            (dma_pool->mem_node_num * sizeof(struct mem_node)));
        dvpp_dma_free(dma_pool->pool_id, dma_pool->mem_size, dma_pool->base_vaddr, dma_pool->base_paddr);
        dma_pool->base_vaddr = NULL;
        dma_pool->base_paddr = 0;
        return -1;
    }

    // 计算每个dma node的内存大小
    node_mem_size = dma_pool->mem_size / dma_pool->mem_node_num;
    // 依据链表节点个数，组建链表
    for (i = 0; i < dma_pool->mem_node_num; ++i) {
        dma_node = (struct mem_node*)(dma_pool->base_nodes_addr + (i * sizeof(struct mem_node)));
        dma_node->vaddr = dma_pool->base_vaddr + (i * node_mem_size);
        dma_node->paddr = dma_pool->base_paddr + (i * node_mem_size);
        ka_list_add_tail(&dma_node->list, &dma_pool->node_list.list);
    }

    return 0;
}

void deinit_dma_pool(struct mem_pool_info* dma_pool)
{
    if (dma_pool == NULL) {
        DVPP_CMDLIST_LOG_ERROR("dma_pool is null\n");
        return;
    }

    // 恢复内存池链表到初始状态
    KA_INIT_LIST_HEAD(&dma_pool->node_list.list);

    // 释放链表nodes的基地址
    if (dma_pool->base_nodes_addr != NULL) {
        ka_mm_vfree(dma_pool->base_nodes_addr);
        dma_pool->base_nodes_addr = NULL;
    }

    // 释放内存池的基地址
    if (dma_pool->base_vaddr != NULL) {
        dvpp_dma_free(dma_pool->pool_id, dma_pool->mem_size, dma_pool->base_vaddr, dma_pool->base_paddr);
        dma_pool->base_vaddr = NULL;
        dma_pool->base_paddr = 0;
    }
}
