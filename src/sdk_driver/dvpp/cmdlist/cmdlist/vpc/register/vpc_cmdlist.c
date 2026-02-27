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

#include "vpc_cmdlist.h"
#include "vpc_reg.h"
#include "dvpp_cmdlist_log.h"
#include "dvpp_cmdlist.h"
#include "drv_arch_comm.h"
#include "dvpp_vpu_types.h"

static int32_t vpc_check_cmdlist_param(dvpp_decoder *decoder, uint32_t node_idx)
{
    uint32_t i = 0;
    static vpu_mod_vpc_type req_types[] = {
        VPU_VPC_TYPE_TOP,
        VPU_VPC_TYPE_CHNL_CVDR,
        VPU_VPC_TYPE_CHNL_CACHE,
        VPU_VPC_TYPE_PIPE_PRECROP_CHN0,
        VPU_VPC_TYPE_PIPE_POSTCROP_CHN0,
        VPU_VPC_TYPE_PIPE_TOP,
        VPU_VPC_TYPE_PIPE_IN0SWAP,
        VPU_VPC_TYPE_PIPE_IN0UVUP,
        VPU_VPC_TYPE_PIPE_IN0CSC,
        VPU_VPC_TYPE_PIPE_IN0UVDOWN,
        VPU_VPC_TYPE_PIPE_OUT0SWAP,
        VPU_VPC_TYPE_PIPE_OUT0UVUP,
        VPU_VPC_TYPE_PIPE_OUT0CSC,
        VPU_VPC_TYPE_PIPE_OUT0UVDOWN,
        VPU_VPC_TYPE_PIPE_CONVERT,
    };

    for (i = 0; i < (sizeof(req_types) / sizeof(vpu_mod_vpc_type)); i++) {
        if (dvpp_get_vpu_mod_val(decoder, node_idx, req_types[i]) == NULL) {
            DVPP_CMDLIST_VPC_LOG_ERROR("vpu type %u is required, but the pointer is empty\n", req_types[i]);
            return -1;
        }
    }

    return 0;
}

static int32_t vpc_fill_one_cmdnode(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    drv_vpc_build_cmdnode(decoder, node, node_idx);
    return 0;
}

static int32_t vpc_fill_sqelist(struct CmdBuf *cmd_buf, uint32_t sqe_idx, uint32_t blkdim)
{
    drv_vpc_config_sqelist(cmd_buf, sqe_idx, blkdim);
    return 0;
}

static int32_t vpc_gen_sqe(struct CmdBuf *cmd_buf, enum dvpp_sqe_ptr_mode mode, uint32_t blkdim, struct dvpp_sqe *sqe)
{
    drv_vpc_config_sqe(cmd_buf, mode, blkdim, sqe);
    return 0;
}

static void vpc_cmdnode_clear_interrupt(struct CmdNode *node)
{
    drv_vpc_cmdnode_clear_interrupt(node);
}

static void vpc_cmdnode_set_next_node(struct CmdBuf *cmd_buf, struct CmdNode *node)
{
    drv_vpc_cmdnode_set_next_node(cmd_buf, node);
}

static void vpc_cmdnode_connect_last_node(struct CmdBuf *cmd_buf)
{
    drv_vpc_cmdnode_connect_last_node(cmd_buf);
}

static void vpc_cmdnode_config_interrupt(struct CmdNode *node)
{
    drv_vpc_cmdnode_config_interrupt(node);
}

static void vpc_cmdnode_config_writeback(struct CmdNode *pos_node, struct CmdNode *pre_node)
{
    drv_vpc_cmdnode_config_writeback_front(pos_node, pre_node);
}

static int32_t vpc_connect_all_cmdnode(struct CmdBuf *cmd_buf)
{
    struct CmdNode* posNode = cmd_buf->cmdHeadNode;
    struct CmdNode* preNode = NULL;

    while (posNode != cmd_buf->cmdTailNode) {
        if ((preNode != NULL) && (preNode->isNeedWrBack == 1)) {
            vpc_cmdnode_config_writeback(posNode, preNode);
        }
        vpc_cmdnode_set_next_node(cmd_buf, posNode);
        vpc_cmdnode_clear_interrupt(posNode);
        vpc_cmdnode_config_interrupt(posNode);

        preNode = posNode;
        posNode = posNode->next;
    }

    vpc_cmdnode_connect_last_node(cmd_buf);

    return 0;
}

void vpc_cmdlist_engine_register(void)
{
    struct dvpp_cmdlist_engine_ops *engine_ops = dvpp_get_cmdlist_engine_ops();
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_fill_one_cmdnode = vpc_fill_one_cmdnode;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_connect_all_cmdnode = vpc_connect_all_cmdnode;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_fill_sqelist = vpc_fill_sqelist;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_gen_sqe = vpc_gen_sqe;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_check_param = vpc_check_cmdlist_param;
}

void vpc_cmdlist_engine_unregister(void)
{
    struct dvpp_cmdlist_engine_ops *engine_ops = dvpp_get_cmdlist_engine_ops();
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_fill_one_cmdnode = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_connect_all_cmdnode = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_fill_sqelist = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_gen_sqe = NULL;
    engine_ops[DVPP_CMDLIST_ENGINE_TYPE_VPC].dvpp_check_param = NULL;
}
