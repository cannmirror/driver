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

#ifndef VPC_DRV_ARCH_COMM_H
#define VPC_DRV_ARCH_COMM_H

#include "dvpp_cmdlist_num_define.h"
#include "dvpp_cmdlist.h"
#include "dvpp_decoder.h"
#include "pipeline_module.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SET_MULTI_REG_OFFSET 24U

#define VP_WR_CFG 0U
#define VP_WR_AXI_LINE 1U
#define VP_WR_LWG 2U
#define VP_WR_HIGH_ADDR 3U
#define VP_WR_LOW_ADDR 4U
#define VP_RD_CFG 0U
#define VP_RD_LWH 1U
#define VP_RD_FHG 2U
#define VP_RD_AXI_LINE 3U
#define VP_RD_HIGH_ADDR 4U
#define VP_RD_LOW_ADDR 5U

#define SIDE_CHN0 1U
#define SIDE_CHN1 2U

#define BYTE_VLD_8_BIT   ((0x0U << 2U | 0x02u) << 20U)
#define BYTE_VLD_16_BIT  ((0x1U << 2U | 0x02U) << 20U)
#define BYTE_VLD_24_BIT  ((0x2U << 2U | 0x02U) << 20U)
#define BYTE_VLD_32_BIT  ((0x3U << 2U | 0x02U) << 20U)

int32_t drv_vpc_struct_assign(dvpp_decoder *decoder, uint32_t node_idx,
    void *dst, const uint16_t struct_len, uint32_t type);
void drv_vpc_config_sqe(struct CmdBuf *cmd_buf, enum dvpp_sqe_ptr_mode mode, uint32_t blkdim, struct dvpp_sqe *sqe);
void drv_vpc_config_sqelist(struct CmdBuf *cmd_buf, uint32_t sqe_idx, uint32_t blkdim);
void drv_vpc_build_cmdnode(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_cmdnode_set_next_node(struct CmdBuf *cmd_buf, struct CmdNode *node);
void drv_vpc_cmdnode_connect_last_node(struct CmdBuf *cmd_buf);

uint8_t drv_vpc_get_yuvscaler_half_line_mode(uint64_t iv, uint32_t hsize);
void drv_vpc_cmdnode_clear_interrupt(struct CmdNode *node);
void drv_vpc_cmdnode_config_interrupt(struct CmdNode *node);
void drv_vpc_cmdnode_connect_last_node(struct CmdBuf *cmd_buf);
void drv_vpc_cmdnode_config_writeback_front(struct CmdNode *pos_node, struct CmdNode *pre_node);

void drv_vpc_config_cmdnode_reverse_space(struct CmdNode *node);
void drv_vpc_config_cmdnode_top(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_in_swap(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_out_swap(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn);
void drv_vpc_config_cmdnode_uvup(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_csc(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_in0_uvdown(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_out_uvdown(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn);
void drv_vpc_config_cmdnode_xflip(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_precrop(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_postcrop(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_resize(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn);
void drv_vpc_config_cmdnode_prepadding(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_postpadding(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx, uint32_t chn);
void drv_vpc_config_cmdnode_affine(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_lut(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_blending(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_filter_control(struct CmdNode *node, struct Filter *filter);
void drv_vpc_config_cmdnode_filter(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_frame_start(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_vlc(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_head(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);
void drv_vpc_config_cmdnode_histogram(dvpp_decoder *decoder, struct CmdNode *node, uint32_t node_idx);

#ifdef __cplusplus
}
#endif
#endif // #ifndef VPC_DRV_ARCH_COMM_H
