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

#include "jpege_cmdlist.h"
#include "drv_jpege_comm.h"
#include "dvpp_vpu_types.h"
#include "dvpp_cmdlist_log.h"

static int32_t jpege_fill_one_cmdnode(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    drv_jpege_build_cmdnode(decoder, node, node_idx);
    return 0;
}

static int32_t jpege_fill_sqelist(struct CmdBuf *cmd_buf, uint32_t sqe_idx, uint32_t blkdim)
{
    drv_jpege_config_sqelist(cmd_buf, sqe_idx, blkdim);
    return 0;
}

static int32_t jpege_gen_sqe(struct CmdBuf *cmd_buf, enum dvpp_sqe_ptr_mode mode, uint32_t blkdim, struct dvpp_sqe *sqe)
{
    drv_jpege_config_sqe(cmd_buf, mode, blkdim, sqe);
    return 0;
}

static void jpege_cmdnode_set_interrupt(struct CmdNode *node, uint32_t isLastNode)
{
    drv_jpege_cmdnode_set_interrupt(node, isLastNode);
}

static void jpege_cmdnode_set_next_node(struct CmdBuf *cmd_buf, struct CmdNode *node)
{
    drv_jpege_cmdnode_set_next_node(cmd_buf, node);
}

static void jpege_cmdnode_connect_last_node(struct CmdNode* node)
{
    jpege_cmdnode_set_interrupt(node, 1);
}

static int32_t jpege_connect_all_cmdnode(struct CmdBuf *cmd_buf)
{
    struct CmdNode* posNode = cmd_buf->cmdHeadNode;

    while (posNode != cmd_buf->cmdTailNode) {
        jpege_cmdnode_set_next_node(cmd_buf, posNode);
        jpege_cmdnode_set_interrupt(posNode, 0);

        posNode = posNode->next;
    }

    jpege_cmdnode_connect_last_node(posNode);
    return 0;
}

static int32_t jpege_check_param(dvpp_decoder *decoder, uint32_t node_idx)
{
    if (dvpp_get_vpu_mod_val(decoder, node_idx, VPU_JPEGE_TYPE_ENC) == NULL) {
        DVPP_CMDLIST_JPEGD_LOG_ERROR("tlv type %d is required, but the pointer is empty\n", VPU_JPEGE_TYPE_ENC);
        return -1;
    }
    return 0;
}

void jpege_cmdlist_engine_register(void)
{
    struct dvpp_cmdlist_engine_ops *engine_ops = dvpp_get_cmdlist_engine_ops();

    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_fill_one_cmdnode = jpege_fill_one_cmdnode;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_connect_all_cmdnode = jpege_connect_all_cmdnode;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_fill_sqelist = jpege_fill_sqelist;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_gen_sqe = jpege_gen_sqe;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_check_param = jpege_check_param;
}

void jpege_cmdlist_engine_unregister(void)
{
    struct dvpp_cmdlist_engine_ops *engine_ops = dvpp_get_cmdlist_engine_ops();

    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_fill_one_cmdnode = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_connect_all_cmdnode = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_fill_sqelist = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_gen_sqe = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_JPEGE].dvpp_check_param = NULL;
}
