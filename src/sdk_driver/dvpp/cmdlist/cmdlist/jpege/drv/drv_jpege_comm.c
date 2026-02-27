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

#include "drv_jpege_comm.h"
#include "securec.h"
#include "dvpp_cmdlist_log.h"
#include "dvpp_cmdlist_define.h"
#include "dvpp_tlv_types.h"

const uint32_t JPEGE_CMD_NODE_HEAD_SIZE = 32; // 32:cmd node预留一段长度用于中断配置和下一个node信息记录

int32_t drv_jpege_struct_assign(dvpp_decoder *decoder, uint32_t node_idx, void *dst, const uint16_t struct_len)
{
    // 适配场景：结构体新增成员, 需要考虑新旧2 & 3包的兼容性
    // 场景1: 2包是新的, 3包是新的, 功能正常, 无需操作
    // 场景2: 2包是旧的, 3包是新的, tlv_len要大, 二包的结构体要小, 此时无影响, 功能不生效, 无需操作
    // 场景3: 2包是新的, 3包是旧的, tlv_len要小, 二包的结构体要大, 此时直接结构体强转, 会取到新增成员的值,
    //        此时会越界, 需要判断取小值
    int32_t ret = 0;
    uint16_t cpy_len = 0;
    const uint16_t tlv_len = dvpp_get_vpu_mod_len(decoder, node_idx, VPU_JPEGE_TYPE_ENC);
    void *tlv_data = dvpp_get_vpu_mod_val(decoder, node_idx, VPU_JPEGE_TYPE_ENC);
    if (tlv_data == NULL) {
        // 如果tlv_data为null，有可能没有copy过来，不需要打ERROR日志
        return -1;
    }

    cpy_len = ((tlv_len < struct_len) ? tlv_len : struct_len);
    if (decoder->protocol == DVPP_PROTOCOL_VPU) {
        cpy_len = struct_len;
    }
    ret = memcpy_s(dst, (size_t)cpy_len, tlv_data, (size_t)cpy_len);
    if (ret != 0) {
        DVPP_CMDLIST_JPEGE_LOG_ERROR("memcpy_s failed, ret:%d, size:%u.", ret, (uint32_t)cpy_len);
        return ret;
    }
    return 0;
}

void drv_jpege_build_cmdnode(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx)
{
    const uint16_t struct_len = (uint16_t)sizeof(jpege_config);
    jpege_config jpege_cfg = {};
    (void)drv_jpege_struct_assign(decoder, node_idx, &jpege_cfg, struct_len);

    // 配置cmdnode寄存器
    config_jpege_cmdnode(node, &jpege_cfg);
}

void drv_jpege_cmdnode_set_next_node(struct CmdBuf *cmd_buf, struct CmdNode *node)
{
    config_jepge_next_node(cmd_buf, node);
}

void drv_jpege_cmdnode_set_interrupt(struct CmdNode *node, uint32_t isLastNode)
{
    config_jpege_interrupt(node, isLastNode);
}

void drv_jpege_config_sqelist(struct CmdBuf *cmd_buf, uint32_t sqe_idx, uint32_t blkdim)
{
    uint32_t* cur_sqe_addr = (uint32_t*)(uintptr_t)(cmd_buf->bufAddr + sqe_idx * SQE_LEN);
    uint64_t offset = (uint64_t)(uintptr_t)(cmd_buf->cmdHeadNode->startAddr) - (uintptr_t)(cmd_buf->startAddr);
    uint64_t startAddr = cmd_buf->ioStartAddr + offset;

    cur_sqe_addr[NUM_0] |= DVPP_SQE_JPEGE; // Type=13 JPEGE任务
    cur_sqe_addr[NUM_0] |= (blkdim << SQE_BLKDIM_OFFSET); // 第0个4字节的第16-31位表示blockdim的数量
    cur_sqe_addr[NUM_3] = (KERNEL_CREDIT << SQE_TIMEOUT_OFFSET);
    cur_sqe_addr[NUM_3] |= (0x1 << SQE_PTRMODE_OFFSET);
    cur_sqe_addr[NUM_4] = GET_LOW_ADDR((startAddr >> NUM_7));
    cur_sqe_addr[NUM_5] = (uint32_t)(startAddr >> NUM_39);
    cur_sqe_addr[NUM_6] = (cmd_buf->cmdHeadNode->len0 >> ALIGN_LEN) |
                          ((cmd_buf->cmdHeadNode->len1 >> ALIGN_LEN) << NUM_16);
}

void config_jpege_cmdnode_reverse_space(struct CmdNode *node)
{
    uint32_t i;
    for (i = 0; i < JPEGE_CMD_NODE_HEAD_SIZE; i++) {
        dvpp_seq_set_cmdnode_val(node, CMDLST_PADDING_DATA);
    }
}
