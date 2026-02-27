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

#ifndef VPC_TOP_MILAN_REG_C_UNION_DEFINE_H
#define VPC_TOP_MILAN_REG_C_UNION_DEFINE_H

/* Define the union U_VPC_CONTROL_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_start             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CONTROL_1;

/* Define the union U_VPC_CONTROL_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_format_cfg        : 8   ; /* [7..0]  */
        unsigned int    in_bitwidth_cfg       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 2   ; /* [10..9]  */
        unsigned int    vcpi_axi_od_cfg       : 5   ; /* [15..11]  */
        unsigned int    rd_sel                : 2   ; /* [17..16]  */
        unsigned int    vpc_out_1to3_ch_en    : 3   ; /* [20..18]  */
        unsigned int    reserved_1            : 3   ; /* [23..21]  */
        unsigned int    in1_format_cfg        : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CONTROL_2;

/* Define the union U_VPC_CONTROL_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rdma_linebuf_clk_gt_en : 1   ; /* [0]  */
        unsigned int    vcpi_hfbcd_clk_gt_en  : 1   ; /* [1]  */
        unsigned int    reserved_0            : 14  ; /* [15..2]  */
        unsigned int    vpc_force_clk_on      : 1   ; /* [16]  */
        unsigned int    ecc_bypass            : 1   ; /* [17]  */
        unsigned int    reserved_1            : 6   ; /* [23..18]  */
        unsigned int    out_format_cfg        : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CONTROL_3;

/* Define the union U_VPC_RDMA_HADDR1_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcyh_addr_l      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_HADDR1_L;
/* Define the union U_VPC_RDMA_HADDR2_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcch_addr_l      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_HADDR2_L;
/* Define the union U_VPC_RDMA_HSTRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcpi_srcyh_stride     : 16  ; /* [15..0]  */
        unsigned int    vcpi_srcch_stride     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_RDMA_HSTRIDE;

/* Define the union U_VPC_RDMA_PADDR1_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcy_addr_l       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_PADDR1_L;
/* Define the union U_VPC_RDMA_PADDR2_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcc_addr_l       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_PADDR2_L;
/* Define the union U_VPC_RDMA_PSTRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vcpi_srcy_stride      : 16  ; /* [15..0]  */
        unsigned int    vcpi_srcc_stride      : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_RDMA_PSTRIDE;

/* Define the union U_VPC_INPUT0_PIC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_imgwidth_pix      : 16  ; /* [15..0]  */
        unsigned int    in0_imgheight_pix     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_INPUT0_PIC_SIZE;

/* Define the union U_VPC_INPUT1_PIC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_imgwidth_pix      : 16  ; /* [15..0]  */
        unsigned int    in1_imgheight_pix     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_INPUT1_PIC_SIZE;

/* Define the union U_VPC_OUTPUT_PIC_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_imgwidth_pix      : 16  ; /* [15..0]  */
        unsigned int    out_imgheight_pix     : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_OUTPUT_PIC_SIZE;

/* Define the union U_VPC_OUTPUT_FORMAT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out2_format_cfg       : 8  ; /* [7..0]  */
        unsigned int    reserved_0            : 8  ; /* [15..8]  */
        unsigned int    out3_format_cfg       : 8  ; /* [23..16]  */
        unsigned int    reserved_1            : 8  ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_OUTPUT_FORMAT;

/* Define the union U_VPC_BUS_CTRL_11 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg3_awuser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_11;
/* Define the union U_VPC_BUS_CTRL_12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg3_aruser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_12;
/* Define the union U_VPC_BUS_CTRL_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg_awaddr_ext         : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_1;
/* Define the union U_VPC_BUS_CTRL_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg_araddr_ext         : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_2;
/* Define the union U_VPC_BUS_CTRL_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg0_awuser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_3;
/* Define the union U_VPC_BUS_CTRL_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg1_awuser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_4;
/* Define the union U_VPC_BUS_CTRL_5 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg2_awuser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_5;
/* Define the union U_VPC_BUS_CTRL_6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg0_aruser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_6;
/* Define the union U_VPC_BUS_CTRL_7 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg1_aruser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_7;
/* Define the union U_VPC_BUS_CTRL_8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg2_aruser            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_8;
/* Define the union U_VPC_BUS_CTRL_9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cfg_awcache           : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 4   ; /* [7..4]  */
        unsigned int    cfg_arcache           : 4   ; /* [11..8]  */
        unsigned int    reserved_1            : 4   ; /* [15..12]  */
        unsigned int    cfg_awqos             : 4   ; /* [19..16]  */
        unsigned int    cfg_arqos             : 4   ; /* [23..20]  */
        unsigned int    cfg_awqos_en          : 1   ; /* [24]  */
        unsigned int    cfg_arqos_en          : 1   ; /* [25]  */
        unsigned int    reserved_2            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_BUS_CTRL_9;

/* Define the union U_VPC_BUS_CTRL_10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cfg_shim_ctrl          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_BUS_CTRL_10;
/* Define the union U_VPC_RDMA_DEBUG_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int hfbcd_debug_out1       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_DEBUG_1;
/* Define the union U_VPC_RDMA_DEBUG_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int hfbcd_debug_out2       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_DEBUG_2;
/* Define the union U_VPC_LINEBUF_DEBUG_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int linebuf_debug_info1    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_LINEBUF_DEBUG_1;
/* Define the union U_VPC_LINEBUF_DEBUG_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int linebuf_debug_info2    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_LINEBUF_DEBUG_2;
/* Define the union U_VPC_LINEBUF_DEBUG_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int linebuf_debug_info3    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_LINEBUF_DEBUG_3;
/* Define the union U_VPC_LINEBUF_DEBUG_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int linebuf_debug_info4    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_LINEBUF_DEBUG_4;
/* Define the union U_VPC_CMDLST_DEBUG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmdlst_debug_out      : 16  ; /* [15..0]  */
        unsigned int    cmdlst_task_cnt       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_CMDLST_DEBUG;

/* Define the union U_VPC_SP_RAM_CTRL */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int sp_ram_ctrl            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_SP_RAM_CTRL;
/* Define the union U_VPC_TP_RAM_CTRL */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int tp_ram_ctrl            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_TP_RAM_CTRL;
/* Define the union U_VPC_FRM_CYCLE_CNT */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_frm_cycle_cnt      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_FRM_CYCLE_CNT;
/* Define the union U_VPC_RDMA_HADDR1_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcyh_addr_h      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_HADDR1_H;
/* Define the union U_VPC_RDMA_HADDR2_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcch_addr_h      : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_HADDR2_H;
/* Define the union U_VPC_RDMA_PADDR1_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcy_addr_h       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_PADDR1_H;
/* Define the union U_VPC_RDMA_PADDR2_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vcpi_srcc_addr_h       : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_RDMA_PADDR2_H;
/* Define the union U_VPC_NORM_CVDR_INT_STATUS1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_eol_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_STATUS1;

/* Define the union U_VPC_NORM_CVDR_INT_STATUS2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_sta : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_sof_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_STATUS2;

/* Define the union U_VPC_NORM_CVDR_INT_STATUS3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eol_sta : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_STATUS3;

/* Define the union U_VPC_NORM_CVDR_INT_STATUS4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_rd_eof_sta : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    vpc_cvdr_vp_rd_sof_sta : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_STATUS4;

/* Define the union U_VPC_NORM_CVDR_INT_MASK1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_eol_mask : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK1;

/* Define the union U_VPC_NORM_CVDR_INT_MASK2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_mask : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_sof_mask : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK2;

/* Define the union U_VPC_NORM_CVDR_INT_MASK3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eol_mask : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK3;

/* Define the union U_VPC_NORM_CVDR_INT_MASK4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_rd_eof_mask : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    vpc_cvdr_vp_rd_sof_mask : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK4;

/* Define the union U_VPC_NORM_CVDR_INT_MASK_STATUS1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_eol_mask_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK_STATUS1;

/* Define the union U_VPC_NORM_CVDR_INT_MASK_STATUS2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_mask_sta : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_sof_mask_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK_STATUS2;

/* Define the union U_VPC_NORM_CVDR_INT_MASK_STATUS3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eol_mask_sta : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK_STATUS3;

/* Define the union U_VPC_NORM_CVDR_INT_MASK_STATUS4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_rd_eof_mask_sta : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    vpc_cvdr_vp_rd_sof_mask_sta : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_MASK_STATUS4;

/* Define the union U_VPC_NORM_CVDR_INT_CLR1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_eol_clr : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_CLR1;

/* Define the union U_VPC_NORM_CVDR_INT_CLR2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_clr : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_sof_clr : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_CLR2;

/* Define the union U_VPC_NORM_CVDR_INT_CLR3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eol_clr : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_CLR3;

/* Define the union U_VPC_NORM_CVDR_INT_CLR4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_rd_eof_clr : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    vpc_cvdr_vp_rd_sof_clr : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_CLR4;

/* Define the union U_VPC_NORM_CVDR_INT_SET1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_eol_set : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_SET1;

/* Define the union U_VPC_NORM_CVDR_INT_SET2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_set : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_wr_sof_set : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_SET2;

/* Define the union U_VPC_NORM_CVDR_INT_SET3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eol_set : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_SET3;

/* Define the union U_VPC_NORM_CVDR_INT_SET4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_rd_eof_set : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    vpc_cvdr_vp_rd_sof_set : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_CVDR_INT_SET4;

/* Define the union U_VPC_NORM_INT_STATUS2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_sta : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_sta : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_sta : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_sta : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_sta : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_sta : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_sta : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_sta : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_sta : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_sta : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_sta : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_sta : 1   ; /* [11]  */
        unsigned int    vpc_top_cache_eof_sta : 1   ; /* [12]  */
        unsigned int    vpc_rdma_frame_end_sta : 1   ; /* [13]  */
        unsigned int    vpc_pipe_lut_eof_sta  : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_sta : 1   ; /* [15]  */
        unsigned int    vpc_eof_int2_sta      : 1   ; /* [16]  */
        unsigned int    vpc_eof_int1_sta      : 1   ; /* [17]  */
        unsigned int    reserved_0            : 2   ; /* [19..18]  */
        unsigned int    vpc_pipe_hsv_eof_sta  : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_sta : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_sta : 1   ; /* [22]  */
        unsigned int    reserved_1            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_INT_STATUS2;

/* Define the union U_VPC_NORM_INT_MASK2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_mask : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_mask : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_mask : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_mask : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_mask : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_mask : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_mask : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_mask : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_mask : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_mask : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_mask : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_mask : 1   ; /* [11]  */
        unsigned int    vpc_top_cache_eof_mask : 1   ; /* [12]  */
        unsigned int    vpc_rdma_frame_end_mask : 1   ; /* [13]  */
        unsigned int    vpc_pipe_lut_eof_mask : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_mask : 1   ; /* [15]  */
        unsigned int    vpc_eof_int2_mask     : 1   ; /* [16]  */
        unsigned int    vpc_eof_int1_mask     : 1   ; /* [17]  */
        unsigned int    reserved_0            : 2   ; /* [19..18]  */
        unsigned int    vpc_pipe_hsv_eof_mask : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_mask : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_mask : 1   ; /* [22]  */
        unsigned int    reserved_1            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_INT_MASK2;

/* Define the union U_VPC_NORM_INT_MASK_STATUS2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_mask_sta : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_mask_sta : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_mask_sta : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_mask_sta : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_mask_sta : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_mask_sta : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_mask_sta : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_mask_sta : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_mask_sta : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_mask_sta : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_mask_sta : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_mask_sta : 1   ; /* [11]  */
        unsigned int    vpc_top_cache_eof_mask_sta : 1   ; /* [12]  */
        unsigned int    vpc_rdma_frame_end_mask_sta : 1   ; /* [13]  */
        unsigned int    vpc_pipe_lut_eof_mask_sta : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_mask_sta : 1   ; /* [15]  */
        unsigned int    vpc_eof_int2_mask_sta : 1   ; /* [16]  */
        unsigned int    vpc_eof_int1_mask_sta : 1   ; /* [17]  */
        unsigned int    reserved_0            : 2   ; /* [19..18]  */
        unsigned int    vpc_pipe_hsv_eof_mask_sta : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_mask_sta : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_mask_sta : 1   ; /* [22]  */
        unsigned int    reserved_1            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_INT_MASK_STATUS2;

/* Define the union U_VPC_NORM_INT_CLR2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_clr : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_clr : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_clr : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_clr : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_clr : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_clr : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_clr : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_clr : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_clr : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_clr : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_clr : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_clr : 1   ; /* [11]  */
        unsigned int    vpc_top_cache_eof_clr : 1   ; /* [12]  */
        unsigned int    vpc_rdma_frame_end_clr : 1   ; /* [13]  */
        unsigned int    vpc_pipe_lut_eof_clr  : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_clr : 1   ; /* [15]  */
        unsigned int    vpc_eof_int2_clr      : 1   ; /* [16]  */
        unsigned int    vpc_eof_int1_clr      : 1   ; /* [17]  */
        unsigned int    reserved_0            : 2   ; /* [19..18]  */
        unsigned int    vpc_pipe_hsv_eof_clr  : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_clr : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_clr : 1   ; /* [22]  */
        unsigned int    reserved_1            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_INT_CLR2;

/* Define the union U_VPC_NORM_INT_SET2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_set : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_set : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_set : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_set : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_set : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_set : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_set : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_set : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_set : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_set : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_set : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_set : 1   ; /* [11]  */
        unsigned int    vpc_top_cache_eof_set : 1   ; /* [12]  */
        unsigned int    vpc_rdma_frame_end_set : 1   ; /* [13]  */
        unsigned int    vpc_pipe_lut_eof_set  : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_set : 1   ; /* [15]  */
        unsigned int    vpc_eof_int2_set      : 1   ; /* [16]  */
        unsigned int    vpc_eof_int1_set      : 1   ; /* [17]  */
        unsigned int    reserved_0            : 2   ; /* [19..18]  */
        unsigned int    vpc_pipe_hsv_eof_set  : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_set : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_set : 1   ; /* [22]  */
        unsigned int    reserved_1            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_NORM_INT_SET2;

/* Define the union U_VPC_ERR_INT_STATUS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_sta : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_sta : 1   ; /* [1]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_sta : 1   ; /* [2]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_sta : 1   ; /* [3]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_sta : 1   ; /* [4]  */
        unsigned int    vpc_pipe_resize2_ovf_err_sta : 1   ; /* [5]  */
        unsigned int    vpc_pipe_resize1_ovf_err_sta : 1   ; /* [6]  */
        unsigned int    reserved_0            : 1   ; /* [7]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_sta : 1   ; /* [8]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_sta : 1   ; /* [9]  */
        unsigned int    vpc_s2p_even_width_err_sta : 1   ; /* [10]  */
        unsigned int    ecc_err_sta           : 1   ; /* [11]  */
        unsigned int    ecc_multi_err_sta     : 1   ; /* [12]  */
        unsigned int    crc_err_sta           : 1   ; /* [13]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_sta : 1   ; /* [14]  */
        unsigned int    vpc_reg_parity_err_sta : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_INT_STATUS;

/* Define the union U_VPC_ERR_INT_MASK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_mask : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_mask : 1   ; /* [1]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_mask : 1   ; /* [2]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_mask : 1   ; /* [3]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_mask : 1   ; /* [4]  */
        unsigned int    vpc_pipe_resize2_ovf_err_mask : 1   ; /* [5]  */
        unsigned int    vpc_pipe_resize1_ovf_err_mask : 1   ; /* [6]  */
        unsigned int    reserved_0            : 1   ; /* [7]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_mask : 1   ; /* [8]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_mask : 1   ; /* [9]  */
        unsigned int    vpc_s2p_even_width_err_mask : 1   ; /* [10]  */
        unsigned int    ecc_err_mask          : 1   ; /* [11]  */
        unsigned int    ecc_multi_err_mask    : 1   ; /* [12]  */
        unsigned int    crc_err_mask          : 1   ; /* [13]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_mask : 1   ; /* [14]  */
        unsigned int    vpc_reg_parity_err_mask : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_mask : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_INT_MASK;

/* Define the union U_VPC_ERR_INT_MASK_STATUS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_mask_sta : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_mask_sta : 1   ; /* [1]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_mask_sta : 1   ; /* [2]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_mask_sta : 1   ; /* [3]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_mask_sta : 1   ; /* [4]  */
        unsigned int    vpc_pipe_resize2_ovf_err_mask_sta : 1   ; /* [5]  */
        unsigned int    vpc_pipe_resize1_ovf_err_mask_sta : 1   ; /* [6]  */
        unsigned int    reserved_0            : 1   ; /* [7]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_mask_sta : 1   ; /* [8]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_mask_sta : 1   ; /* [9]  */
        unsigned int    vpc_s2p_even_width_err_mask_sta : 1   ; /* [10]  */
        unsigned int    ecc_err_mask_sta      : 1   ; /* [11]  */
        unsigned int    ecc_multi_err_mask_sta : 1   ; /* [12]  */
        unsigned int    crc_err_mask_sta      : 1   ; /* [13]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_mask_sta : 1   ; /* [14]  */
        unsigned int    vpc_reg_parity_err_mask_sta : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_mask_sta : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_INT_MASK_STATUS;

/* Define the union U_VPC_ERR_INT_CLR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_clr : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_clr : 1   ; /* [1]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_clr : 1   ; /* [2]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_clr : 1   ; /* [3]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_clr : 1   ; /* [4]  */
        unsigned int    vpc_pipe_resize2_ovf_err_clr : 1   ; /* [5]  */
        unsigned int    vpc_pipe_resize1_ovf_err_clr : 1   ; /* [6]  */
        unsigned int    reserved_0            : 1   ; /* [7]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_clr : 1   ; /* [8]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_clr : 1   ; /* [9]  */
        unsigned int    vpc_s2p_even_width_err_clr : 1   ; /* [10]  */
        unsigned int    ecc_err_clr           : 1   ; /* [11]  */
        unsigned int    ecc_multi_err_clr     : 1   ; /* [12]  */
        unsigned int    crc_err_clr           : 1   ; /* [13]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_clr : 1   ; /* [14]  */
        unsigned int    vpc_reg_parity_err_clr : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_clr : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_INT_CLR;

/* Define the union U_VPC_ERR_INT_SET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_set : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_set : 1   ; /* [1]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_set : 1   ; /* [2]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_set : 1   ; /* [3]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_set : 1   ; /* [4]  */
        unsigned int    vpc_pipe_resize2_ovf_err_set : 1   ; /* [5]  */
        unsigned int    vpc_pipe_resize1_ovf_err_set : 1   ; /* [6]  */
        unsigned int    reserved_0            : 1   ; /* [7]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_set : 1   ; /* [8]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_set : 1   ; /* [9]  */
        unsigned int    vpc_s2p_even_width_err_set : 1   ; /* [10]  */
        unsigned int    ecc_err_set           : 1   ; /* [11]  */
        unsigned int    ecc_multi_err_set     : 1   ; /* [12]  */
        unsigned int    crc_err_set           : 1   ; /* [13]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_set : 1   ; /* [14]  */
        unsigned int    vpc_reg_parity_err_set : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_set : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_INT_SET;

/* Define the union U_VPC_SAFETY_ERR_INT_MASK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    safety_err_ecc_err_mask : 1   ; /* [0]  */
        unsigned int    safety_err_ecc_multi_err_mask : 1   ; /* [1]  */
        unsigned int    safety_err_crc_err_mask : 1   ; /* [2]  */
        unsigned int    safety_err_vpc_reg_parity_err_mask : 1   ; /* [3]  */
        unsigned int    safety_warn_ecc_err_mask : 1   ; /* [4]  */
        unsigned int    safety_warn_ecc_multi_err_mask : 1   ; /* [5]  */
        unsigned int    safety_warn_crc_err_mask : 1   ; /* [6]  */
        unsigned int    safety_warn_vpc_reg_parity_err_mask : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_SAFETY_ERR_INT_MASK;

/* Define the union U_VPC_ERR_OUT_DMUXEN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_int_merge_en      : 1   ; /* [0]  */
        unsigned int    vpc_int_to_gic_en     : 1   ; /* [1]  */
        unsigned int    vpc_int_to_stars_en   : 1   ; /* [2]  */
        unsigned int    vpc_int_err_mask_en   : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_ERR_OUT_DMUXEN;

/* Define the union U_EOF_INT1_MERGE_ENABLE_PIPE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_mint1_en : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_mint1_en : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_mint1_en : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_mint1_en : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_mint1_en : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_mint1_en : 1   ; /* [5]  */
        unsigned int    vpc_pipe_ch1_postcrop_eof_mint1_en : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_mint1_en : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_mint1_en : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_mint1_en : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_mint1_en : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_mint1_en : 1   ; /* [11]  */
        unsigned int    reserved_0            : 2   ; /* [13..12]  */
        unsigned int    vpc_pipe_lut_eof_mint1_en : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_mint1_en : 1   ; /* [15]  */
        unsigned int    reserved_1            : 4   ; /* [19..16]  */
        unsigned int    vpc_pipe_hsv_eof_mint1_en : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_mint1_en : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_mint1_en : 1   ; /* [22]  */
        unsigned int    reserved_2            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_EOF_INT1_MERGE_ENABLE_PIPE;

/* Define the union U_EOF_INT1_MERGE_ENABLE_RDMA_CVDR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_mint1_en : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eof_mint1_en : 11  ; /* [26..16]  */
        unsigned int    vpc_rdma_frame_end_mint1_en : 1   ; /* [27]  */
        unsigned int    vpc_top_cache_eof_mint1_en : 1   ; /* [28]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_EOF_INT1_MERGE_ENABLE_RDMA_CVDR;

/* Define the union U_EOF_INT2_MERGE_ENABLE_PIPE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_pipe_precrop_eof_mint2_en : 1   ; /* [0]  */
        unsigned int    vpc_pipe_prepad_eof_mint2_en : 1   ; /* [1]  */
        unsigned int    vpc_pipe_resize1_eof_mint2_en : 1   ; /* [2]  */
        unsigned int    vpc_pipe_resize2_eof_mint2_en : 1   ; /* [3]  */
        unsigned int    vpc_pipe_yuvscale_eof_mint2_en : 1   ; /* [4]  */
        unsigned int    vpc_pipe_histogram_eof_mint2_en : 1   ; /* [5]  */
        unsigned int    vpc_pipe_postcrop_eof_mint2_en : 1   ; /* [6]  */
        unsigned int    vpc_pipe_xflip_eof_mint2_en : 1   ; /* [7]  */
        unsigned int    vpc_pipe_postpad_eof_mint2_en : 1   ; /* [8]  */
        unsigned int    vpc_pipe_pyramid_eof_mint2_en : 1   ; /* [9]  */
        unsigned int    vpc_pipe_pointnet_eof_mint2_en : 1   ; /* [10]  */
        unsigned int    vpc_pipe_warp_eof_mint2_en : 1   ; /* [11]  */
        unsigned int    reserved_0            : 2   ; /* [13..12]  */
        unsigned int    vpc_pipe_lut_eof_mint2_en : 1   ; /* [14]  */
        unsigned int    vpc_pipe_filter_eof_mint2_en : 1   ; /* [15]  */
        unsigned int    reserved_1            : 4   ; /* [19..16]  */
        unsigned int    vpc_pipe_hsv_eof_mint2_en : 1   ; /* [20]  */
        unsigned int    vpc_pipe_pixaug_eof_mint2_en : 1   ; /* [21]  */
        unsigned int    vpc_pipe_affine_eof_mint2_en : 1   ; /* [22]  */
        unsigned int    reserved_2            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_EOF_INT2_MERGE_ENABLE_PIPE;

/* Define the union U_EOF_INT2_MERGE_ENABLE_RDMA_CVDR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_vp_wr_eof_mint2_en : 16  ; /* [15..0]  */
        unsigned int    vpc_cvdr_vp_rd_eof_mint2_en : 11  ; /* [26..16]  */
        unsigned int    vpc_rdma_frame_end_mint2_en : 1   ; /* [27]  */
        unsigned int    vpc_top_cache_eof_mint2_en : 1   ; /* [28]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_EOF_INT2_MERGE_ENABLE_RDMA_CVDR;

/* Define the union U_CMDLIST_STOP_INT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_rdma_hfbcd_dec_err_sta_cmdlst_en : 1   ; /* [0]  */
        unsigned int    vpc_rdma_axi_rd_resp_err_sta_cmdlst_en : 1   ; /* [1]  */
        unsigned int    vpc_cvdr_axi_wr_resp_err_sta_cmdlst_en : 1   ; /* [2]  */
        unsigned int    vpc_cvdr_axi_rd_resp_err_sta_cmdlst_en : 1   ; /* [3]  */
        unsigned int    vpc_s2p_even_width_err_sta_cmdlst_en : 1   ; /* [4]  */
        unsigned int    ecc_err_sta_cmdlst_en : 1   ; /* [5]  */
        unsigned int    ecc_multi_err_sta_cmdlst_en : 1   ; /* [6]  */
        unsigned int    crc_err_sta_cmdlst_en : 1   ; /* [7]  */
        unsigned int    vpc_pipe_in0_csc_ovf_err_sta_cmdlst_en : 1   ; /* [8]  */
        unsigned int    vpc_pipe_in1_csc_ovf_err_sta_cmdlst_en : 1   ; /* [9]  */
        unsigned int    vpc_pipe_out_csc_ovf_err_sta_cmdlst_en : 1   ; /* [10]  */
        unsigned int    vpc_pipe_resize2_ovf_err_sta_cmdlst_en : 1   ; /* [11]  */
        unsigned int    vpc_pipe_resize1_ovf_err_sta_cmdlst_en : 1   ; /* [12]  */
        unsigned int    vpc_pipe_pyramid_ovf_err_sta_cmdlst_en : 1   ; /* [13]  */
        unsigned int    vpc_reg_parity_err_sta_cmdlst_en : 1   ; /* [14]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    vpc_cvdr_vp_wr_dropped_sta_cmdlst_en : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CMDLIST_STOP_INT_CTRL;

/* Define the union U_CMDLIST_IN_INT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_eof_int2_sta_cmdlst_en : 1   ; /* [0]  */
        unsigned int    vpc_eof_int1_sta_cmdlst_en : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CMDLIST_IN_INT_CTRL;

/* Define the union U_VPC_CACHE_DEBUG_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cache_debug_out        : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_CACHE_DEBUG_1;
/* Define the union U_VPC_DEBUG_INFO_STA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_axi_wr_full_sta : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_DEBUG_INFO_STA;

/* Define the union U_VPC_DEBUG_INFO_CLR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_cvdr_axi_wr_full_clr : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VPC_DEBUG_INFO_CLR;

/* Define the union U_CRC_REFVALUE_CVDRWR0_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr0_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR0_0;
/* Define the union U_CRC_REFVALUE_CVDRWR0_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr0_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR0_1;
/* Define the union U_CRC_REFVALUE_CVDRWR1_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr1_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR1_0;
/* Define the union U_CRC_REFVALUE_CVDRWR1_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr1_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR1_1;
/* Define the union U_CRC_REFVALUE_CVDRWR2_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr2_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR2_0;
/* Define the union U_CRC_REFVALUE_CVDRWR2_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr2_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR2_1;
/* Define the union U_CRC_REFVALUE_CVDRWR3_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr3_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR3_0;
/* Define the union U_CRC_REFVALUE_CVDRWR3_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr3_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR3_1;
/* Define the union U_CRC_REFVALUE_CVDRWR4_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr4_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR4_0;
/* Define the union U_CRC_REFVALUE_CVDRWR4_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr4_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR4_1;
/* Define the union U_CRC_REFVALUE_CVDRWR5_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr5_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR5_0;
/* Define the union U_CRC_REFVALUE_CVDRWR5_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr5_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR5_1;
/* Define the union U_CRC_REFVALUE_CVDRWR6_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr6_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR6_0;
/* Define the union U_CRC_REFVALUE_CVDRWR6_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr6_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR6_1;
/* Define the union U_CRC_REFVALUE_CVDRWR7_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr7_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR7_0;
/* Define the union U_CRC_REFVALUE_CVDRWR7_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr7_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR7_1;
/* Define the union U_CRC_REFVALUE_CVDRWR8_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr8_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR8_0;
/* Define the union U_CRC_REFVALUE_CVDRWR8_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr8_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR8_1;
/* Define the union U_CRC_REFVALUE_CVDRWR9_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr9_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR9_0;
/* Define the union U_CRC_REFVALUE_CVDRWR9_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr9_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR9_1;
/* Define the union U_CRC_REFVALUE_CVDRWR10_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr10_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR10_0;
/* Define the union U_CRC_REFVALUE_CVDRWR10_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr10_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR10_1;
/* Define the union U_CRC_REFVALUE_CVDRWR11_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr11_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR11_0;
/* Define the union U_CRC_REFVALUE_CVDRWR11_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr11_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR11_1;
/* Define the union U_CRC_REFVALUE_CVDRWR12_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr12_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR12_0;
/* Define the union U_CRC_REFVALUE_CVDRWR12_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr12_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR12_1;
/* Define the union U_CRC_REFVALUE_CVDRWR13_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr13_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR13_0;
/* Define the union U_CRC_REFVALUE_CVDRWR13_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr13_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR13_1;
/* Define the union U_CRC_REFVALUE_CVDRWR14_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr14_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR14_0;
/* Define the union U_CRC_REFVALUE_CVDRWR14_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr14_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR14_1;
/* Define the union U_CRC_REFVALUE_CVDRWR15_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr15_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR15_0;
/* Define the union U_CRC_REFVALUE_CVDRWR15_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr15_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR15_1;
/* Define the union U_CRC_REFVALUE_CVDRWR16_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr16_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR16_0;
/* Define the union U_CRC_REFVALUE_CVDRWR16_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr16_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR16_1;
/* Define the union U_CRC_REFVALUE_CVDRWR16_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr16_2 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR16_2;
/* Define the union U_CRC_REFVALUE_CVDRWR16_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr16_3 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR16_3;
/* Define the union U_CRC_REFVALUE_CVDRWR17_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr17_0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR17_0;
/* Define the union U_CRC_REFVALUE_CVDRWR17_1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr17_1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR17_1;
/* Define the union U_CRC_REFVALUE_CVDRWR17_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr17_2 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR17_2;
/* Define the union U_CRC_REFVALUE_CVDRWR17_3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int crc_refvalue_cvdrwr17_3 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CRC_REFVALUE_CVDRWR17_3;
/* Define the union U_CRC_MONITOR_EN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    crc_monitor_en        : 18  ; /* [17..0]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CRC_MONITOR_EN;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg0    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG0;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg1    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG1;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg2    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG2;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg3    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG3;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg4    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG4;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg5    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG5;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg6    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG6;

/* Define the union U_LOCAL_BUS_ADDR_DEBUG7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vpc_lbus_addr_dbg7    : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LOCAL_BUS_ADDR_DEBUG7;

/* Define the union U_LOCAL_BUS_DATA_DEBUG0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg0     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG0;
/* Define the union U_LOCAL_BUS_DATA_DEBUG1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg1     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG1;
/* Define the union U_LOCAL_BUS_DATA_DEBUG2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg2     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG2;
/* Define the union U_LOCAL_BUS_DATA_DEBUG3 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg3     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG3;
/* Define the union U_LOCAL_BUS_DATA_DEBUG4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg4     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG4;
/* Define the union U_LOCAL_BUS_DATA_DEBUG5 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg5     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG5;
/* Define the union U_LOCAL_BUS_DATA_DEBUG6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg6     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG6;
/* Define the union U_LOCAL_BUS_DATA_DEBUG7 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_lbus_data_dbg7     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_LOCAL_BUS_DATA_DEBUG7;

/* Define the global struct */
typedef struct
{
    U_VPC_CONTROL_1                 VPC_CONTROL_1                    ; /* 0x0 */
    U_VPC_CONTROL_2                 VPC_CONTROL_2                    ; /* 0x4 */
    U_VPC_CONTROL_3                 VPC_CONTROL_3                    ; /* 0x8 */
    U_VPC_RDMA_HADDR1_L             VPC_RDMA_HADDR1_L                ; /* 0xc */
    U_VPC_RDMA_HADDR2_L             VPC_RDMA_HADDR2_L                ; /* 0x10 */
    U_VPC_RDMA_HSTRIDE              VPC_RDMA_HSTRIDE                 ; /* 0x14 */
    U_VPC_RDMA_PADDR1_L             VPC_RDMA_PADDR1_L                ; /* 0x18 */
    U_VPC_RDMA_PADDR2_L             VPC_RDMA_PADDR2_L                ; /* 0x1c */
    U_VPC_RDMA_PSTRIDE              VPC_RDMA_PSTRIDE                 ; /* 0x20 */
    U_VPC_INPUT0_PIC_SIZE           VPC_INPUT0_PIC_SIZE              ; /* 0x24 */
    U_VPC_INPUT1_PIC_SIZE           VPC_INPUT1_PIC_SIZE              ; /* 0x28 */
    U_VPC_OUTPUT_PIC_SIZE           VPC_OUTPUT_PIC_SIZE              ; /* 0x2c */
    U_VPC_OUTPUT_FORMAT             VPC_OUTPUT_FORMAT                ; /* 0x30 */
    unsigned int                    reserved_0[11]                   ; /* 0x34~0x5c */
    U_VPC_BUS_CTRL_11               VPC_BUS_CTRL_11                  ; /* 0x60 */
    unsigned int                    reserved_1                       ; /* 0x64 */
    U_VPC_BUS_CTRL_12               VPC_BUS_CTRL_12                  ; /* 0x68 */
    unsigned int                    reserved_2                       ; /* 0x6c */
    U_VPC_BUS_CTRL_1                VPC_BUS_CTRL_1                   ; /* 0x70 */
    U_VPC_BUS_CTRL_2                VPC_BUS_CTRL_2                   ; /* 0x74 */
    U_VPC_BUS_CTRL_3                VPC_BUS_CTRL_3                   ; /* 0x78 */
    U_VPC_BUS_CTRL_4                VPC_BUS_CTRL_4                   ; /* 0x7c */
    U_VPC_BUS_CTRL_5                VPC_BUS_CTRL_5                   ; /* 0x80 */
    U_VPC_BUS_CTRL_6                VPC_BUS_CTRL_6                   ; /* 0x84 */
    U_VPC_BUS_CTRL_7                VPC_BUS_CTRL_7                   ; /* 0x88 */
    U_VPC_BUS_CTRL_8                VPC_BUS_CTRL_8                   ; /* 0x8c */
    U_VPC_BUS_CTRL_9                VPC_BUS_CTRL_9                   ; /* 0x90 */
    U_VPC_BUS_CTRL_10               VPC_BUS_CTRL_10                  ; /* 0x94 */
    U_VPC_RDMA_DEBUG_1              VPC_RDMA_DEBUG_1                 ; /* 0x98 */
    U_VPC_RDMA_DEBUG_2              VPC_RDMA_DEBUG_2                 ; /* 0x9c */
    U_VPC_LINEBUF_DEBUG_1           VPC_LINEBUF_DEBUG_1              ; /* 0xa0 */
    U_VPC_LINEBUF_DEBUG_2           VPC_LINEBUF_DEBUG_2              ; /* 0xa4 */
    U_VPC_LINEBUF_DEBUG_3           VPC_LINEBUF_DEBUG_3              ; /* 0xa8 */
    U_VPC_LINEBUF_DEBUG_4           VPC_LINEBUF_DEBUG_4              ; /* 0xac */
    U_VPC_CMDLST_DEBUG              VPC_CMDLST_DEBUG                 ; /* 0xb0 */
    U_VPC_SP_RAM_CTRL               VPC_SP_RAM_CTRL                  ; /* 0xb4 */
    U_VPC_TP_RAM_CTRL               VPC_TP_RAM_CTRL                  ; /* 0xb8 */
    U_VPC_FRM_CYCLE_CNT             VPC_FRM_CYCLE_CNT                ; /* 0xbc */
    U_VPC_RDMA_HADDR1_H             VPC_RDMA_HADDR1_H                ; /* 0xc0 */
    U_VPC_RDMA_HADDR2_H             VPC_RDMA_HADDR2_H                ; /* 0xc4 */
    U_VPC_RDMA_PADDR1_H             VPC_RDMA_PADDR1_H                ; /* 0xc8 */
    U_VPC_RDMA_PADDR2_H             VPC_RDMA_PADDR2_H                ; /* 0xcc */
    unsigned int                    reserved_3[12]                   ; /* 0xd0~0xfc */
    U_VPC_NORM_CVDR_INT_STATUS1     VPC_NORM_CVDR_INT_STATUS1        ; /* 0x100 */
    U_VPC_NORM_CVDR_INT_STATUS2     VPC_NORM_CVDR_INT_STATUS2        ; /* 0x104 */
    U_VPC_NORM_CVDR_INT_STATUS3     VPC_NORM_CVDR_INT_STATUS3        ; /* 0x108 */
    U_VPC_NORM_CVDR_INT_STATUS4     VPC_NORM_CVDR_INT_STATUS4        ; /* 0x10c */
    U_VPC_NORM_CVDR_INT_MASK1       VPC_NORM_CVDR_INT_MASK1          ; /* 0x110 */
    U_VPC_NORM_CVDR_INT_MASK2       VPC_NORM_CVDR_INT_MASK2          ; /* 0x114 */
    U_VPC_NORM_CVDR_INT_MASK3       VPC_NORM_CVDR_INT_MASK3          ; /* 0x118 */
    U_VPC_NORM_CVDR_INT_MASK4       VPC_NORM_CVDR_INT_MASK4          ; /* 0x11c */
    U_VPC_NORM_CVDR_INT_MASK_STATUS1   VPC_NORM_CVDR_INT_MASK_STATUS1   ; /* 0x120 */
    U_VPC_NORM_CVDR_INT_MASK_STATUS2   VPC_NORM_CVDR_INT_MASK_STATUS2   ; /* 0x124 */
    U_VPC_NORM_CVDR_INT_MASK_STATUS3   VPC_NORM_CVDR_INT_MASK_STATUS3   ; /* 0x128 */
    U_VPC_NORM_CVDR_INT_MASK_STATUS4   VPC_NORM_CVDR_INT_MASK_STATUS4   ; /* 0x12c */
    U_VPC_NORM_CVDR_INT_CLR1        VPC_NORM_CVDR_INT_CLR1           ; /* 0x130 */
    U_VPC_NORM_CVDR_INT_CLR2        VPC_NORM_CVDR_INT_CLR2           ; /* 0x134 */
    U_VPC_NORM_CVDR_INT_CLR3        VPC_NORM_CVDR_INT_CLR3           ; /* 0x138 */
    U_VPC_NORM_CVDR_INT_CLR4        VPC_NORM_CVDR_INT_CLR4           ; /* 0x13c */
    U_VPC_NORM_CVDR_INT_SET1        VPC_NORM_CVDR_INT_SET1           ; /* 0x140 */
    U_VPC_NORM_CVDR_INT_SET2        VPC_NORM_CVDR_INT_SET2           ; /* 0x144 */
    U_VPC_NORM_CVDR_INT_SET3        VPC_NORM_CVDR_INT_SET3           ; /* 0x148 */
    U_VPC_NORM_CVDR_INT_SET4        VPC_NORM_CVDR_INT_SET4           ; /* 0x14c */
    U_VPC_NORM_INT_STATUS2          VPC_NORM_INT_STATUS2             ; /* 0x150 */
    U_VPC_NORM_INT_MASK2            VPC_NORM_INT_MASK2               ; /* 0x154 */
    U_VPC_NORM_INT_MASK_STATUS2     VPC_NORM_INT_MASK_STATUS2        ; /* 0x158 */
    U_VPC_NORM_INT_CLR2             VPC_NORM_INT_CLR2                ; /* 0x15c */
    U_VPC_NORM_INT_SET2             VPC_NORM_INT_SET2                ; /* 0x160 */
    U_VPC_ERR_INT_STATUS            VPC_ERR_INT_STATUS               ; /* 0x164 */
    U_VPC_ERR_INT_MASK              VPC_ERR_INT_MASK                 ; /* 0x168 */
    U_VPC_ERR_INT_MASK_STATUS       VPC_ERR_INT_MASK_STATUS          ; /* 0x16c */
    U_VPC_ERR_INT_CLR               VPC_ERR_INT_CLR                  ; /* 0x170 */
    U_VPC_ERR_INT_SET               VPC_ERR_INT_SET                  ; /* 0x174 */
    U_VPC_SAFETY_ERR_INT_MASK       VPC_SAFETY_ERR_INT_MASK          ; /* 0x178 */
    U_VPC_ERR_OUT_DMUXEN            VPC_ERR_OUT_DMUXEN               ; /* 0x17c */
    U_EOF_INT1_MERGE_ENABLE_PIPE    EOF_INT1_MERGE_ENABLE_PIPE       ; /* 0x180 */
    U_EOF_INT1_MERGE_ENABLE_RDMA_CVDR   EOF_INT1_MERGE_ENABLE_RDMA_CVDR  ; /* 0x184 */
    U_EOF_INT2_MERGE_ENABLE_PIPE    EOF_INT2_MERGE_ENABLE_PIPE       ; /* 0x188 */
    U_EOF_INT2_MERGE_ENABLE_RDMA_CVDR   EOF_INT2_MERGE_ENABLE_RDMA_CVDR  ; /* 0x18c */
    U_CMDLIST_STOP_INT_CTRL         CMDLIST_STOP_INT_CTRL            ; /* 0x190 */
    U_CMDLIST_IN_INT_CTRL           CMDLIST_IN_INT_CTRL              ; /* 0x194 */
    U_VPC_CACHE_DEBUG_1             VPC_CACHE_DEBUG_1                ; /* 0x198 */
    U_VPC_DEBUG_INFO_STA            VPC_DEBUG_INFO_STA               ; /* 0x19c */
    U_VPC_DEBUG_INFO_CLR            VPC_DEBUG_INFO_CLR               ; /* 0x1a0 */
    unsigned int                    reserved_4[23]                   ; /* 0x1a4~0x1fc */
    U_CRC_REFVALUE_CVDRWR0_0        CRC_REFVALUE_CVDRWR0_0           ; /* 0x200 */
    U_CRC_REFVALUE_CVDRWR0_1        CRC_REFVALUE_CVDRWR0_1           ; /* 0x204 */
    unsigned int                    reserved_5[2]                    ; /* 0x208~0x20c */
    U_CRC_REFVALUE_CVDRWR1_0        CRC_REFVALUE_CVDRWR1_0           ; /* 0x210 */
    U_CRC_REFVALUE_CVDRWR1_1        CRC_REFVALUE_CVDRWR1_1           ; /* 0x214 */
    unsigned int                    reserved_6[2]                    ; /* 0x218~0x21c */
    U_CRC_REFVALUE_CVDRWR2_0        CRC_REFVALUE_CVDRWR2_0           ; /* 0x220 */
    U_CRC_REFVALUE_CVDRWR2_1        CRC_REFVALUE_CVDRWR2_1           ; /* 0x224 */
    unsigned int                    reserved_7[2]                    ; /* 0x228~0x22c */
    U_CRC_REFVALUE_CVDRWR3_0        CRC_REFVALUE_CVDRWR3_0           ; /* 0x230 */
    U_CRC_REFVALUE_CVDRWR3_1        CRC_REFVALUE_CVDRWR3_1           ; /* 0x234 */
    unsigned int                    reserved_8[2]                    ; /* 0x238~0x23c */
    U_CRC_REFVALUE_CVDRWR4_0        CRC_REFVALUE_CVDRWR4_0           ; /* 0x240 */
    U_CRC_REFVALUE_CVDRWR4_1        CRC_REFVALUE_CVDRWR4_1           ; /* 0x244 */
    unsigned int                    reserved_9[2]                    ; /* 0x248~0x24c */
    U_CRC_REFVALUE_CVDRWR5_0        CRC_REFVALUE_CVDRWR5_0           ; /* 0x250 */
    U_CRC_REFVALUE_CVDRWR5_1        CRC_REFVALUE_CVDRWR5_1           ; /* 0x254 */
    unsigned int                    reserved_10[2]                   ; /* 0x258~0x25c */
    U_CRC_REFVALUE_CVDRWR6_0        CRC_REFVALUE_CVDRWR6_0           ; /* 0x260 */
    U_CRC_REFVALUE_CVDRWR6_1        CRC_REFVALUE_CVDRWR6_1           ; /* 0x264 */
    unsigned int                    reserved_11[2]                   ; /* 0x268~0x26c */
    U_CRC_REFVALUE_CVDRWR7_0        CRC_REFVALUE_CVDRWR7_0           ; /* 0x270 */
    U_CRC_REFVALUE_CVDRWR7_1        CRC_REFVALUE_CVDRWR7_1           ; /* 0x274 */
    unsigned int                    reserved_12[2]                   ; /* 0x278~0x27c */
    U_CRC_REFVALUE_CVDRWR8_0        CRC_REFVALUE_CVDRWR8_0           ; /* 0x280 */
    U_CRC_REFVALUE_CVDRWR8_1        CRC_REFVALUE_CVDRWR8_1           ; /* 0x284 */
    unsigned int                    reserved_13[2]                   ; /* 0x288~0x28c */
    U_CRC_REFVALUE_CVDRWR9_0        CRC_REFVALUE_CVDRWR9_0           ; /* 0x290 */
    U_CRC_REFVALUE_CVDRWR9_1        CRC_REFVALUE_CVDRWR9_1           ; /* 0x294 */
    unsigned int                    reserved_14[2]                   ; /* 0x298~0x29c */
    U_CRC_REFVALUE_CVDRWR10_0       CRC_REFVALUE_CVDRWR10_0          ; /* 0x2a0 */
    U_CRC_REFVALUE_CVDRWR10_1       CRC_REFVALUE_CVDRWR10_1          ; /* 0x2a4 */
    unsigned int                    reserved_15[2]                   ; /* 0x2a8~0x2ac */
    U_CRC_REFVALUE_CVDRWR11_0       CRC_REFVALUE_CVDRWR11_0          ; /* 0x2b0 */
    U_CRC_REFVALUE_CVDRWR11_1       CRC_REFVALUE_CVDRWR11_1          ; /* 0x2b4 */
    unsigned int                    reserved_16[2]                   ; /* 0x2b8~0x2bc */
    U_CRC_REFVALUE_CVDRWR12_0       CRC_REFVALUE_CVDRWR12_0          ; /* 0x2c0 */
    U_CRC_REFVALUE_CVDRWR12_1       CRC_REFVALUE_CVDRWR12_1          ; /* 0x2c4 */
    unsigned int                    reserved_17[2]                   ; /* 0x2c8~0x2cc */
    U_CRC_REFVALUE_CVDRWR13_0       CRC_REFVALUE_CVDRWR13_0          ; /* 0x2d0 */
    U_CRC_REFVALUE_CVDRWR13_1       CRC_REFVALUE_CVDRWR13_1          ; /* 0x2d4 */
    unsigned int                    reserved_18[2]                   ; /* 0x2d8~0x2dc */
    U_CRC_REFVALUE_CVDRWR14_0       CRC_REFVALUE_CVDRWR14_0          ; /* 0x2e0 */
    U_CRC_REFVALUE_CVDRWR14_1       CRC_REFVALUE_CVDRWR14_1          ; /* 0x2e4 */
    unsigned int                    reserved_19[2]                   ; /* 0x2e8~0x2ec */
    U_CRC_REFVALUE_CVDRWR15_0       CRC_REFVALUE_CVDRWR15_0          ; /* 0x2f0 */
    U_CRC_REFVALUE_CVDRWR15_1       CRC_REFVALUE_CVDRWR15_1          ; /* 0x2f4 */
    unsigned int                    reserved_20[2]                   ; /* 0x2f8~0x2fc */
    U_CRC_REFVALUE_CVDRWR16_0       CRC_REFVALUE_CVDRWR16_0          ; /* 0x300 */
    U_CRC_REFVALUE_CVDRWR16_1       CRC_REFVALUE_CVDRWR16_1          ; /* 0x304 */
    U_CRC_REFVALUE_CVDRWR16_2       CRC_REFVALUE_CVDRWR16_2          ; /* 0x308 */
    U_CRC_REFVALUE_CVDRWR16_3       CRC_REFVALUE_CVDRWR16_3          ; /* 0x30c */
    U_CRC_REFVALUE_CVDRWR17_0       CRC_REFVALUE_CVDRWR17_0          ; /* 0x310 */
    U_CRC_REFVALUE_CVDRWR17_1       CRC_REFVALUE_CVDRWR17_1          ; /* 0x314 */
    U_CRC_REFVALUE_CVDRWR17_2       CRC_REFVALUE_CVDRWR17_2          ; /* 0x318 */
    U_CRC_REFVALUE_CVDRWR17_3       CRC_REFVALUE_CVDRWR17_3          ; /* 0x31c */
    unsigned int                    reserved_21[56]                  ; /* 0x320~0x3fc */
    U_CRC_MONITOR_EN                CRC_MONITOR_EN                   ; /* 0x400 */
    unsigned int                    reserved_22[63]                  ; /* 0x404~0x4fc */
    U_LOCAL_BUS_ADDR_DEBUG0         LOCAL_BUS_ADDR_DEBUG0            ; /* 0x500 */
    U_LOCAL_BUS_ADDR_DEBUG1         LOCAL_BUS_ADDR_DEBUG1            ; /* 0x504 */
    U_LOCAL_BUS_ADDR_DEBUG2         LOCAL_BUS_ADDR_DEBUG2            ; /* 0x508 */
    U_LOCAL_BUS_ADDR_DEBUG3         LOCAL_BUS_ADDR_DEBUG3            ; /* 0x50c */
    U_LOCAL_BUS_ADDR_DEBUG4         LOCAL_BUS_ADDR_DEBUG4            ; /* 0x510 */
    U_LOCAL_BUS_ADDR_DEBUG5         LOCAL_BUS_ADDR_DEBUG5            ; /* 0x514 */
    U_LOCAL_BUS_ADDR_DEBUG6         LOCAL_BUS_ADDR_DEBUG6            ; /* 0x518 */
    U_LOCAL_BUS_ADDR_DEBUG7         LOCAL_BUS_ADDR_DEBUG7            ; /* 0x51c */
    U_LOCAL_BUS_DATA_DEBUG0         LOCAL_BUS_DATA_DEBUG0            ; /* 0x520 */
    U_LOCAL_BUS_DATA_DEBUG1         LOCAL_BUS_DATA_DEBUG1            ; /* 0x524 */
    U_LOCAL_BUS_DATA_DEBUG2         LOCAL_BUS_DATA_DEBUG2            ; /* 0x528 */
    U_LOCAL_BUS_DATA_DEBUG3         LOCAL_BUS_DATA_DEBUG3            ; /* 0x52c */
    U_LOCAL_BUS_DATA_DEBUG4         LOCAL_BUS_DATA_DEBUG4            ; /* 0x530 */
    U_LOCAL_BUS_DATA_DEBUG5         LOCAL_BUS_DATA_DEBUG5            ; /* 0x534 */
    U_LOCAL_BUS_DATA_DEBUG6         LOCAL_BUS_DATA_DEBUG6            ; /* 0x538 */
    U_LOCAL_BUS_DATA_DEBUG7         LOCAL_BUS_DATA_DEBUG7            ; /* 0x53c */

} S_VPC_TOP_NMANAGER_REGS_TYPE;

/* Declare the struct pointor of the module VPC_TOP_NMANAGER */
extern S_VPC_TOP_NMANAGER_REGS_TYPE *gopVPC_TOP_NMANAGERAllReg;


#endif // #ifndef VPC_TOP_NMANAGER_REG_C_UNION_DEFINE_H
