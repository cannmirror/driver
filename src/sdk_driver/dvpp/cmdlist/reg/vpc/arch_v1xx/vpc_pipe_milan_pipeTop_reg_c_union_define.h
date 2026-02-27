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

#ifndef VPC_PIPE_MILAN_PIPETOP_REG_C_UNION_DEFINE_H
#define VPC_PIPE_MILAN_PIPETOP_REG_C_UNION_DEFINE_H

/* Define the union U_INPUT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_swap_cfg          : 8   ; /* [7..0]  */
        unsigned int    in0_swap_en_cfg       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 3   ; /* [11..9]  */
        unsigned int    channel_out           : 4   ; /* [15..12]  */
        unsigned int    kernel_format         : 8   ; /* [23..16]  */
        unsigned int    reserved_1            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INPUT;

/* Define the union U_UVUP_FILTER */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_uvup_filt_en      : 1   ; /* [0]  */
        unsigned int    in1_uvup_filt_en      : 1   ; /* [1]  */
        unsigned int    out_422to444_filt_en  : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_UVUP_FILTER;

/* Define the union U_VUP_FILTER_OFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_vup_filt_odd_line_offset : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    in0_vup_filt_even_line_offset : 2   ; /* [5..4]  */
        unsigned int    reserved_1            : 2   ; /* [7..6]  */
        unsigned int    in1_vup_filt_odd_line_offset : 2   ; /* [9..8]  */
        unsigned int    reserved_2            : 2   ; /* [11..10]  */
        unsigned int    in1_vup_filt_even_line_offset : 2   ; /* [13..12]  */
        unsigned int    reserved_3            : 18  ; /* [31..14]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VUP_FILTER_OFFSET;

/* Define the union U_PIPELINE_ENABLE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xflip_en              : 1   ; /* [0]  */
        unsigned int    xflip_pos             : 1   ; /* [1]  */
        unsigned int    multilevel_zoom_en    : 2   ; /* [3..2]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PIPELINE_ENABLE;

/* Define the union U_CSC_ENABLE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_en            : 1   ; /* [0]  */
        unsigned int    in1_csc_en            : 1   ; /* [1]  */
        unsigned int    out_csc_en            : 1   ; /* [2]  */
        unsigned int    in0_hi1910_cscout_10b : 1   ; /* [3]  */
        unsigned int    in1_hi1910_cscout_10b : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CSC_ENABLE;

/* Define the union U_OUT_SWAP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_swap_cfg          : 8   ; /* [7..0]  */
        unsigned int    out_swap_en_cfg       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 7   ; /* [15..9]  */
        unsigned int    in1_swap_cfg          : 8   ; /* [23..16]  */
        unsigned int    in1_swap_en_cfg       : 1   ; /* [24]  */
        unsigned int    reserved_1            : 7   ; /* [31..25]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUT_SWAP;

/* Define the union U_XFLIP_INSIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xflip_in_width        : 16  ; /* [15..0]  */
        unsigned int    xflip_in_height       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_XFLIP_INSIZE;

/* Define the union U_PRECROP_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    precrop_hmax          : 16  ; /* [15..0]  */
        unsigned int    precrop_hmin          : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRECROP_1;

/* Define the union U_PRECROP_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    precrop_vmax          : 16  ; /* [15..0]  */
        unsigned int    precrop_vmin          : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRECROP_2;

/* Define the union U_POSTCROP_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postcrop_hmax         : 16  ; /* [15..0]  */
        unsigned int    postcrop_hmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTCROP_1;

/* Define the union U_POSTCROP_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postcrop_vmax         : 16  ; /* [15..0]  */
        unsigned int    postcrop_vmin         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POSTCROP_2;

/* Define the union U_VPC_PIPE_IN0_INFOR */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_in0_vp_infor  : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_IN0_INFOR;
/* Define the union U_VPC_PIPE_IN1_INFOR */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_in1_vp_infor  : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_IN1_INFOR;
/* Define the union U_VPC_PIPE_KENEL_INFOR0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_kenel_vp_infor0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_KENEL_INFOR0;
/* Define the union U_VPC_PIPE_KENEL_INFOR1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_kenel_vp_infor1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_KENEL_INFOR1;
/* Define the union U_VPC_PIPE_OUTPUT_INFOR0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_output_vp_infor0 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_OUTPUT_INFOR0;
/* Define the union U_VPC_PIPE_OUTPUT_INFOR1 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_output_vp_infor1 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_OUTPUT_INFOR1;
/* Define the union U_VPC_PIPE_OUTPUT_INFOR2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_output_vp_infor2 : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_VPC_PIPE_OUTPUT_INFOR2;
/* Define the union U_PIPE_BUSY_INFOR */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int vpc_pipe_busy          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PIPE_BUSY_INFOR;
/* Define the union U_IN0_444TO422_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_444to422_0        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in0_444to422_1        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 5   ; /* [30..26]  */
        unsigned int    in0_444to422_uvcross_n : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0_444TO422_1;

/* Define the union U_IN0_444TO422_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_444to422_2        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in0_444to422_3        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0_444TO422_2;

/* Define the union U_IN0_444TO422_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_444to422_4        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in0_444to422_5        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0_444TO422_3;

/* Define the union U_IN1_444TO422_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_444to422_0        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in1_444to422_1        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 5   ; /* [30..26]  */
        unsigned int    in1_444to422_uvcross_n : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1_444TO422_1;

/* Define the union U_IN1_444TO422_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_444to422_2        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in1_444to422_3        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1_444TO422_2;

/* Define the union U_IN1_444TO422_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_444to422_4        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    in1_444to422_5        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1_444TO422_3;

/* Define the union U_OUT_444TO422_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_444to422_0        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    out_444to422_1        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 5   ; /* [30..26]  */
        unsigned int    out_444to422_uvcross_n : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUT_444TO422_1;

/* Define the union U_OUT_444TO422_2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_444to422_2        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    out_444to422_3        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUT_444TO422_2;

/* Define the union U_OUT_444TO422_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_444to422_4        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    out_444to422_5        : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUT_444TO422_3;

/* Define the union U_OUT_YUV422TO420_FILT_OR_CLIP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_422to420_clip_en  : 1   ; /* [0]  */
        unsigned int    out_422to420_filt_en  : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUT_YUV422TO420_FILT_OR_CLIP;

/* Define the union U_PRE_PADDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prepad_v_padding_sel  : 3   ; /* [2..0]  */
        unsigned int    prepad_v_mirror_mode  : 2   ; /* [4..3]  */
        unsigned int    reserved_0            : 3   ; /* [7..5]  */
        unsigned int    prepad_h_padding_sel  : 3   ; /* [10..8]  */
        unsigned int    prepad_h_mirror_mode  : 2   ; /* [12..11]  */
        unsigned int    reserved_1            : 3   ; /* [15..13]  */
        unsigned int    prepad_dir_priority   : 1   ; /* [16]  */
        unsigned int    prepad_mirror1_uv_sel : 1   ; /* [17]  */
        unsigned int    reserved_2            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRE_PADDING_MODE;

/* Define the union U_PRE_PADDING_SIZE_0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prepad_v_padding_lines_top : 16  ; /* [15..0]  */
        unsigned int    prepad_v_padding_lines_bottom : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRE_PADDING_SIZE_0;

/* Define the union U_PRE_PADDING_SIZE_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prepad_h_padding_columns_left : 16  ; /* [15..0]  */
        unsigned int    prepad_h_padding_columns_right : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRE_PADDING_SIZE_1;

/* Define the union U_PRE_PADDING_VALUE_HOR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_h_padding_value_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_HOR_L;
/* Define the union U_PRE_PADDING_VALUE_HOR_M */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_h_padding_value_m : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_HOR_M;
/* Define the union U_PRE_PADDING_VALUE_HOR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_h_padding_value_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_HOR_H;
/* Define the union U_PRE_PADDING_VALUE_VER_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_v_padding_value_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_VER_L;
/* Define the union U_PRE_PADDING_VALUE_VER_M */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_v_padding_value_m : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_VER_M;
/* Define the union U_PRE_PADDING_VALUE_VER_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int prepad_v_padding_value_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PRE_PADDING_VALUE_VER_H;
/* Define the union U_PRE_PADDING_RESOLUTION */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prepad_width          : 16  ; /* [15..0]  */
        unsigned int    prepad_height         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PRE_PADDING_RESOLUTION;

/* Define the union U_POST_PADDING_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postpad_v_padding_sel : 3   ; /* [2..0]  */
        unsigned int    postpad_v_mirror_mode : 2   ; /* [4..3]  */
        unsigned int    reserved_0            : 3   ; /* [7..5]  */
        unsigned int    postpad_h_padding_sel : 3   ; /* [10..8]  */
        unsigned int    postpad_h_mirror_mode : 2   ; /* [12..11]  */
        unsigned int    reserved_1            : 3   ; /* [15..13]  */
        unsigned int    postpad_dir_priority  : 1   ; /* [16]  */
        unsigned int    postpad_mirror1_uv_sel : 1   ; /* [17]  */
        unsigned int    reserved_2            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POST_PADDING_MODE;

/* Define the union U_POST_PADDING_SIZE_0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postpad_v_padding_lines_top : 16  ; /* [15..0]  */
        unsigned int    postpad_v_padding_lines_bottom : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POST_PADDING_SIZE_0;

/* Define the union U_POST_PADDING_SIZE_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postpad_h_padding_columns_left : 16  ; /* [15..0]  */
        unsigned int    postpad_h_padding_columns_right : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POST_PADDING_SIZE_1;

/* Define the union U_POST_PADDING_VALUE_HOR_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_h_padding_value_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_HOR_L;
/* Define the union U_POST_PADDING_VALUE_HOR_M */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_h_padding_value_m : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_HOR_M;
/* Define the union U_POST_PADDING_VALUE_HOR_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_h_padding_value_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_HOR_H;
/* Define the union U_POST_PADDING_VALUE_VER_L */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_v_padding_value_l : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_VER_L;
/* Define the union U_POST_PADDING_VALUE_VER_M */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_v_padding_value_m : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_VER_M;
/* Define the union U_POST_PADDING_VALUE_VER_H */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int postpad_v_padding_value_h : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_POST_PADDING_VALUE_VER_H;
/* Define the union U_POST_PADDING_RESOLUTION */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    postpad_width         : 16  ; /* [15..0]  */
        unsigned int    postpad_height        : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_POST_PADDING_RESOLUTION;

/* Define the union U_csc_alpha_padding */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_alpha_en          : 1   ; /* [0]  */
        unsigned int    in1_alpha_en          : 1   ; /* [1]  */
        unsigned int    out_alpha_en          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 5   ; /* [7..3]  */
        unsigned int    in0_alpha             : 8   ; /* [15..8]  */
        unsigned int    in1_alpha             : 8   ; /* [23..16]  */
        unsigned int    out_alpha             : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_csc_alpha_padding;

/* Define the union U_IN0CSC_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_cal_core      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    in0_csc_y_forward     : 1   ; /* [4]  */
        unsigned int    reserved_1            : 3   ; /* [7..5]  */
        unsigned int    in0_csc_fp_fmac_en    : 1   ; /* [8]  */
        unsigned int    reserved_2            : 3   ; /* [11..9]  */
        unsigned int    in0_csc_fp_order      : 1   ; /* [12]  */
        unsigned int    reserved_3            : 3   ; /* [15..13]  */
        unsigned int    in0_csc_fp_pre_offset : 1   ; /* [16]  */
        unsigned int    reserved_4            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_MODE;

/* Define the union U_IN0CSC_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff0_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_0;
/* Define the union U_IN0CSC_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff0_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_1;

/* Define the union U_IN0CSC_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff1_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_2;
/* Define the union U_IN0CSC_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff1_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_3;

/* Define the union U_IN0CSC_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff2_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_4;
/* Define the union U_IN0CSC_5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff2_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_5;

/* Define the union U_IN0CSC_6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff3_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_6;
/* Define the union U_IN0CSC_7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff3_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_7;

/* Define the union U_IN0CSC_8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff4_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_8;
/* Define the union U_IN0CSC_9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff4_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_9;

/* Define the union U_IN0CSC_10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff5_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_10;
/* Define the union U_IN0CSC_11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff5_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_11;

/* Define the union U_IN0CSC_12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff6_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_12;
/* Define the union U_IN0CSC_13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff6_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_13;

/* Define the union U_IN0CSC_14 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff7_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_14;
/* Define the union U_IN0CSC_15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff7_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_15;

/* Define the union U_IN0CSC_16 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_coeff8_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_16;
/* Define the union U_IN0CSC_17 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_coeff8_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_17;

/* Define the union U_IN0CSC_18 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_offset0_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_18;
/* Define the union U_IN0CSC_19 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_offset0_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_19;

/* Define the union U_IN0CSC_20 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_offset1_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_20;
/* Define the union U_IN0CSC_21 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_offset1_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_21;

/* Define the union U_IN0CSC_22 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_offset2_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_22;
/* Define the union U_IN0CSC_23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_offset2_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_23;

/* Define the union U_IN0CSC_CLIP_IN_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_in_low_thr0   : 16  ; /* [15..0]  */
        unsigned int    in0_csc_in_hig_thr0   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_IN_THRESHOLD0;

/* Define the union U_IN0CSC_CLIP_IN_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_in_low_thr1   : 16  ; /* [15..0]  */
        unsigned int    in0_csc_in_hig_thr1   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_IN_THRESHOLD1;

/* Define the union U_IN0CSC_CLIP_IN_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_in_low_thr2   : 16  ; /* [15..0]  */
        unsigned int    in0_csc_in_hig_thr2   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_IN_THRESHOLD2;

/* Define the union U_IN0CSC_CLIP_OUT_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_out_low_thr0  : 16  ; /* [15..0]  */
        unsigned int    in0_csc_out_hig_thr0  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_OUT_THRESHOLD0;

/* Define the union U_IN0CSC_CLIP_OUT_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_out_low_thr1  : 16  ; /* [15..0]  */
        unsigned int    in0_csc_out_hig_thr1  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_OUT_THRESHOLD1;

/* Define the union U_IN0CSC_CLIP_OUT_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_out_low_thr2  : 16  ; /* [15..0]  */
        unsigned int    in0_csc_out_hig_thr2  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CLIP_OUT_THRESHOLD2;

/* Define the union U_IN0CSC_NORMALIZE_IN */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_fp_normalize_in : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_NORMALIZE_IN;
/* Define the union U_IN0CSC_NORMALIZE_OUT */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in0_csc_fp_normalize_out : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN0CSC_NORMALIZE_OUT;
/* Define the union U_IN0CSC_CVT_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in0_csc_cvt_clip_en_in : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    in0_csc_cvt_rnd_mode_in : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 9   ; /* [15..7]  */
        unsigned int    in0_csc_cvt_clip_en_out : 1   ; /* [16]  */
        unsigned int    reserved_2            : 3   ; /* [19..17]  */
        unsigned int    in0_csc_cvt_rnd_mode_out : 3   ; /* [22..20]  */
        unsigned int    reserved_3            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN0CSC_CVT_MODE;

/* Define the union U_IN1CSC_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_cal_core      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    in1_csc_y_forward     : 1   ; /* [4]  */
        unsigned int    reserved_1            : 3   ; /* [7..5]  */
        unsigned int    in1_csc_fp_fmac_en    : 1   ; /* [8]  */
        unsigned int    reserved_2            : 3   ; /* [11..9]  */
        unsigned int    in1_csc_fp_order      : 1   ; /* [12]  */
        unsigned int    reserved_3            : 3   ; /* [15..13]  */
        unsigned int    in1_csc_fp_pre_offset : 1   ; /* [16]  */
        unsigned int    reserved_4            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_MODE;

/* Define the union U_IN1CSC_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff0_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_0;
/* Define the union U_IN1CSC_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff0_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_1;

/* Define the union U_IN1CSC_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff1_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_2;
/* Define the union U_IN1CSC_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff1_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_3;

/* Define the union U_IN1CSC_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff2_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_4;
/* Define the union U_IN1CSC_5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff2_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_5;

/* Define the union U_IN1CSC_6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff3_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_6;
/* Define the union U_IN1CSC_7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff3_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_7;

/* Define the union U_IN1CSC_8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff4_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_8;
/* Define the union U_IN1CSC_9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff4_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_9;

/* Define the union U_IN1CSC_10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff5_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_10;
/* Define the union U_IN1CSC_11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff5_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_11;

/* Define the union U_IN1CSC_12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff6_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_12;
/* Define the union U_IN1CSC_13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff6_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_13;

/* Define the union U_IN1CSC_14 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff7_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_14;
/* Define the union U_IN1CSC_15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff7_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_15;

/* Define the union U_IN1CSC_16 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_coeff8_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_16;
/* Define the union U_IN1CSC_17 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_coeff8_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_17;

/* Define the union U_IN1CSC_18 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_offset0_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_18;
/* Define the union U_IN1CSC_19 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_offset0_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_19;

/* Define the union U_IN1CSC_20 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_offset1_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_20;
/* Define the union U_IN1CSC_21 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_offset1_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_21;

/* Define the union U_IN1CSC_22 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_offset2_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_22;
/* Define the union U_IN1CSC_23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_offset2_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_23;

/* Define the union U_IN1CSC_CLIP_IN_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_in_low_thr0   : 16  ; /* [15..0]  */
        unsigned int    in1_csc_in_hig_thr0   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_IN_THRESHOLD0;

/* Define the union U_IN1CSC_CLIP_IN_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_in_low_thr1   : 16  ; /* [15..0]  */
        unsigned int    in1_csc_in_hig_thr1   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_IN_THRESHOLD1;

/* Define the union U_IN1CSC_CLIP_IN_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_in_low_thr2   : 16  ; /* [15..0]  */
        unsigned int    in1_csc_in_hig_thr2   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_IN_THRESHOLD2;

/* Define the union U_IN1CSC_CLIP_OUT_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_out_low_thr0  : 16  ; /* [15..0]  */
        unsigned int    in1_csc_out_hig_thr0  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_OUT_THRESHOLD0;

/* Define the union U_IN1CSC_CLIP_OUT_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_out_low_thr1  : 16  ; /* [15..0]  */
        unsigned int    in1_csc_out_hig_thr1  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_OUT_THRESHOLD1;

/* Define the union U_IN1CSC_CLIP_OUT_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_out_low_thr2  : 16  ; /* [15..0]  */
        unsigned int    in1_csc_out_hig_thr2  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CLIP_OUT_THRESHOLD2;

/* Define the union U_IN1CSC_NORMALIZE_IN */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_fp_normalize_in : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_NORMALIZE_IN;
/* Define the union U_IN1CSC_NORMALIZE_OUT */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int in1_csc_fp_normalize_out : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_IN1CSC_NORMALIZE_OUT;
/* Define the union U_IN1CSC_CVT_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in1_csc_cvt_clip_en_in : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    in1_csc_cvt_rnd_mode_in : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 9   ; /* [15..7]  */
        unsigned int    in1_csc_cvt_clip_en_out : 1   ; /* [16]  */
        unsigned int    reserved_2            : 3   ; /* [19..17]  */
        unsigned int    in1_csc_cvt_rnd_mode_out : 3   ; /* [22..20]  */
        unsigned int    reserved_3            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_IN1CSC_CVT_MODE;

/* Define the union U_OUTCSC_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_cal_core      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    out_csc_y_forward     : 1   ; /* [4]  */
        unsigned int    reserved_1            : 3   ; /* [7..5]  */
        unsigned int    out_csc_fp_fmac_en    : 1   ; /* [8]  */
        unsigned int    reserved_2            : 3   ; /* [11..9]  */
        unsigned int    out_csc_fp_order      : 1   ; /* [12]  */
        unsigned int    reserved_3            : 3   ; /* [15..13]  */
        unsigned int    out_csc_fp_pre_offset : 1   ; /* [16]  */
        unsigned int    reserved_4            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_MODE;

/* Define the union U_OUTCSC_0 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff0_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_0;
/* Define the union U_OUTCSC_1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff0_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_1;

/* Define the union U_OUTCSC_2 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff1_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_2;
/* Define the union U_OUTCSC_3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff1_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_3;

/* Define the union U_OUTCSC_4 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff2_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_4;
/* Define the union U_OUTCSC_5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff2_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_5;

/* Define the union U_OUTCSC_6 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff3_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_6;
/* Define the union U_OUTCSC_7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff3_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_7;

/* Define the union U_OUTCSC_8 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff4_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_8;
/* Define the union U_OUTCSC_9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff4_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_9;

/* Define the union U_OUTCSC_10 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff5_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_10;
/* Define the union U_OUTCSC_11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff5_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_11;

/* Define the union U_OUTCSC_12 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff6_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_12;
/* Define the union U_OUTCSC_13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff6_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_13;

/* Define the union U_OUTCSC_14 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff7_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_14;
/* Define the union U_OUTCSC_15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff7_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_15;

/* Define the union U_OUTCSC_16 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_coeff8_low     : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_16;
/* Define the union U_OUTCSC_17 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_coeff8_high   : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_17;

/* Define the union U_OUTCSC_18 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_offset0_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_18;
/* Define the union U_OUTCSC_19 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_offset0_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_19;

/* Define the union U_OUTCSC_20 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_offset1_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_20;
/* Define the union U_OUTCSC_21 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_offset1_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_21;

/* Define the union U_OUTCSC_22 */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_offset2_low    : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_22;
/* Define the union U_OUTCSC_23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_offset2_high  : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_23;

/* Define the union U_OUTCSC_CLIP_IN_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_in_low_thr0   : 16  ; /* [15..0]  */
        unsigned int    out_csc_in_hig_thr0   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_IN_THRESHOLD0;

/* Define the union U_OUTCSC_CLIP_IN_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_in_low_thr1   : 16  ; /* [15..0]  */
        unsigned int    out_csc_in_hig_thr1   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_IN_THRESHOLD1;

/* Define the union U_OUTCSC_CLIP_IN_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_in_low_thr2   : 16  ; /* [15..0]  */
        unsigned int    out_csc_in_hig_thr2   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_IN_THRESHOLD2;

/* Define the union U_OUTCSC_CLIP_OUT_THRESHOLD0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_out_low_thr0  : 16  ; /* [15..0]  */
        unsigned int    out_csc_out_hig_thr0  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_OUT_THRESHOLD0;

/* Define the union U_OUTCSC_CLIP_OUT_THRESHOLD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_out_low_thr1  : 16  ; /* [15..0]  */
        unsigned int    out_csc_out_hig_thr1  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_OUT_THRESHOLD1;

/* Define the union U_OUTCSC_CLIP_OUT_THRESHOLD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_out_low_thr2  : 16  ; /* [15..0]  */
        unsigned int    out_csc_out_hig_thr2  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CLIP_OUT_THRESHOLD2;

/* Define the union U_OUTCSC_NORMALIZE_IN */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_fp_normalize_in : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_NORMALIZE_IN;
/* Define the union U_OUTCSC_NORMALIZE_OUT */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int out_csc_fp_normalize_out : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_OUTCSC_NORMALIZE_OUT;
/* Define the union U_OUTCSC_CVT_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    out_csc_cvt_clip_en_in : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    out_csc_cvt_rnd_mode_in : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 9   ; /* [15..7]  */
        unsigned int    out_csc_cvt_clip_en_out : 1   ; /* [16]  */
        unsigned int    reserved_2            : 3   ; /* [19..17]  */
        unsigned int    out_csc_cvt_rnd_mode_out : 3   ; /* [22..20]  */
        unsigned int    reserved_3            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_OUTCSC_CVT_MODE;

/* Define the union U_PNET_ID */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pointnet_id           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PNET_ID;

/* Define the union U_PNET_M */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pointnet_m            : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PNET_M;

/* Define the union U_PNET_N */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pointnet_n            : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PNET_N;

/* Define the union U_PNET_XOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pointnet_xoffset      : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_PNET_XOFFSET;

/* Define the union U_PNET_TR */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int pointnet_tr            : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_PNET_TR;
/* Define the union U_HSV_MODE_SET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rgb2hsv_en            : 1   ; /* [0]  */
        unsigned int    hsv2rgb_en            : 1   ; /* [1]  */
        unsigned int    hsv_saturation_en     : 1   ; /* [2]  */
        unsigned int    hsv_hue_en            : 1   ; /* [3]  */
        unsigned int    reserved_0            : 4   ; /* [7..4]  */
        unsigned int    hsv_hue_fst           : 1   ; /* [8]  */
        unsigned int    reserved_1            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HSV_MODE_SET;

/* Define the union U_HSV_SCALE_SAT */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int hsv_scale_sat          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_HSV_SCALE_SAT;
/* Define the union U_HSV_DELTA_HUE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int hsv_delta_hue          : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_HSV_DELTA_HUE;
/* Define the union U_CVT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cvt_en                : 1   ; /* [0]  */
        unsigned int    cvt_scale_en          : 1   ; /* [1]  */
        unsigned int    reserved_0            : 6   ; /* [7..2]  */
        unsigned int    cvt_rnd               : 3   ; /* [10..8]  */
        unsigned int    reserved_1            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CVT_CTRL;

/* Define the union U_CVT_SCALE */
typedef union
{
    /* Define the struct bits  */
    struct
    {
        unsigned int cvt_scale              : 32  ; /* [31..0]  */
    } bits;

    /* Define an unsigned member */
        unsigned int    u32;

} U_CVT_SCALE;
/* Define the union U_LINE_BLK_CONVERT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_blk_convert      : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LINE_BLK_CONVERT;

/* Define the union U_LINE_BLK_CONVERT_INPUT_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_blk_cvt_src_width : 16  ; /* [15..0]  */
        unsigned int    line_blk_cvt_src_height : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LINE_BLK_CONVERT_INPUT_SIZE;

/* Define the union U_LINE_BLK_CONVERT_BLK_SIZE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_blk_cvt_blk_width : 16  ; /* [15..0]  */
        unsigned int    line_blk_cvt_blk_height : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_LINE_BLK_CONVERT_BLK_SIZE;

/* Define the global struct */
typedef struct
{
    U_INPUT                         INPUT                            ; /* 0x0 */
    U_UVUP_FILTER                   UVUP_FILTER                      ; /* 0x4 */
    U_VUP_FILTER_OFFSET             VUP_FILTER_OFFSET                ; /* 0x8 */
    U_PIPELINE_ENABLE               PIPELINE_ENABLE                  ; /* 0xc */
    unsigned int                    reserved_0                       ; /* 0x10 */
    U_CSC_ENABLE                    CSC_ENABLE                       ; /* 0x14 */
    U_OUT_SWAP                      OUT_SWAP                         ; /* 0x18 */
    unsigned int                    reserved_1                       ; /* 0x1c */
    U_XFLIP_INSIZE                  XFLIP_INSIZE                     ; /* 0x20 */
    unsigned int                    reserved_2                       ; /* 0x24 */
    U_PRECROP_1                     PRECROP_1                        ; /* 0x28 */
    U_PRECROP_2                     PRECROP_2                        ; /* 0x2c */
    U_POSTCROP_1                    POSTCROP_1                       ; /* 0x30 */
    U_POSTCROP_2                    POSTCROP_2                       ; /* 0x34 */
    unsigned int                    reserved_3[2]                    ; /* 0x38~0x3c */
    U_VPC_PIPE_IN0_INFOR            VPC_PIPE_IN0_INFOR               ; /* 0x40 */
    U_VPC_PIPE_IN1_INFOR            VPC_PIPE_IN1_INFOR               ; /* 0x44 */
    U_VPC_PIPE_KENEL_INFOR0         VPC_PIPE_KENEL_INFOR0            ; /* 0x48 */
    U_VPC_PIPE_KENEL_INFOR1         VPC_PIPE_KENEL_INFOR1            ; /* 0x4c */
    U_VPC_PIPE_OUTPUT_INFOR0        VPC_PIPE_OUTPUT_INFOR0           ; /* 0x50 */
    U_VPC_PIPE_OUTPUT_INFOR1        VPC_PIPE_OUTPUT_INFOR1           ; /* 0x54 */
    U_VPC_PIPE_OUTPUT_INFOR2        VPC_PIPE_OUTPUT_INFOR2           ; /* 0x58 */
    U_PIPE_BUSY_INFOR               PIPE_BUSY_INFOR                  ; /* 0x5c */
    U_IN0_444TO422_1                IN0_444TO422_1                   ; /* 0x60 */
    U_IN0_444TO422_2                IN0_444TO422_2                   ; /* 0x64 */
    U_IN0_444TO422_3                IN0_444TO422_3                   ; /* 0x68 */
    unsigned int                    reserved_4                       ; /* 0x6c */
    U_IN1_444TO422_1                IN1_444TO422_1                   ; /* 0x70 */
    U_IN1_444TO422_2                IN1_444TO422_2                   ; /* 0x74 */
    U_IN1_444TO422_3                IN1_444TO422_3                   ; /* 0x78 */
    unsigned int                    reserved_5                       ; /* 0x7c */
    U_OUT_444TO422_1                OUT_444TO422_1                   ; /* 0x80 */
    U_OUT_444TO422_2                OUT_444TO422_2                   ; /* 0x84 */
    U_OUT_444TO422_3                OUT_444TO422_3                   ; /* 0x88 */
    U_OUT_YUV422TO420_FILT_OR_CLIP   OUT_YUV422TO420_FILT_OR_CLIP     ; /* 0x8c */
    U_PRE_PADDING_MODE              PRE_PADDING_MODE                 ; /* 0x90 */
    U_PRE_PADDING_SIZE_0            PRE_PADDING_SIZE_0               ; /* 0x94 */
    U_PRE_PADDING_SIZE_1            PRE_PADDING_SIZE_1               ; /* 0x98 */
    U_PRE_PADDING_VALUE_HOR_L       PRE_PADDING_VALUE_HOR_L          ; /* 0x9c */
    U_PRE_PADDING_VALUE_HOR_M       PRE_PADDING_VALUE_HOR_M          ; /* 0xa0 */
    U_PRE_PADDING_VALUE_HOR_H       PRE_PADDING_VALUE_HOR_H          ; /* 0xa4 */
    U_PRE_PADDING_VALUE_VER_L       PRE_PADDING_VALUE_VER_L          ; /* 0xa8 */
    U_PRE_PADDING_VALUE_VER_M       PRE_PADDING_VALUE_VER_M          ; /* 0xac */
    U_PRE_PADDING_VALUE_VER_H       PRE_PADDING_VALUE_VER_H          ; /* 0xb0 */
    U_PRE_PADDING_RESOLUTION        PRE_PADDING_RESOLUTION           ; /* 0xb4 */
    unsigned int                    reserved_6[2]                    ; /* 0xb8~0xbc */
    U_POST_PADDING_MODE             POST_PADDING_MODE                ; /* 0xc0 */
    U_POST_PADDING_SIZE_0           POST_PADDING_SIZE_0              ; /* 0xc4 */
    U_POST_PADDING_SIZE_1           POST_PADDING_SIZE_1              ; /* 0xc8 */
    U_POST_PADDING_VALUE_HOR_L      POST_PADDING_VALUE_HOR_L         ; /* 0xcc */
    U_POST_PADDING_VALUE_HOR_M      POST_PADDING_VALUE_HOR_M         ; /* 0xd0 */
    U_POST_PADDING_VALUE_HOR_H      POST_PADDING_VALUE_HOR_H         ; /* 0xd4 */
    U_POST_PADDING_VALUE_VER_L      POST_PADDING_VALUE_VER_L         ; /* 0xd8 */
    U_POST_PADDING_VALUE_VER_M      POST_PADDING_VALUE_VER_M         ; /* 0xdc */
    U_POST_PADDING_VALUE_VER_H      POST_PADDING_VALUE_VER_H         ; /* 0xe0 */
    U_POST_PADDING_RESOLUTION       POST_PADDING_RESOLUTION          ; /* 0xe4 */
    unsigned int                    reserved_7[6]                    ; /* 0xe8~0xfc */
    U_csc_alpha_padding             csc_alpha_padding                ; /* 0x100 */
    U_IN0CSC_MODE                   IN0CSC_MODE                      ; /* 0x104 */
    unsigned int                    reserved_8[2]                    ; /* 0x108~0x10c */
    U_IN0CSC_0                      IN0CSC_0                         ; /* 0x110 */
    U_IN0CSC_1                      IN0CSC_1                         ; /* 0x114 */
    U_IN0CSC_2                      IN0CSC_2                         ; /* 0x118 */
    U_IN0CSC_3                      IN0CSC_3                         ; /* 0x11c */
    U_IN0CSC_4                      IN0CSC_4                         ; /* 0x120 */
    U_IN0CSC_5                      IN0CSC_5                         ; /* 0x124 */
    U_IN0CSC_6                      IN0CSC_6                         ; /* 0x128 */
    U_IN0CSC_7                      IN0CSC_7                         ; /* 0x12c */
    U_IN0CSC_8                      IN0CSC_8                         ; /* 0x130 */
    U_IN0CSC_9                      IN0CSC_9                         ; /* 0x134 */
    U_IN0CSC_10                     IN0CSC_10                        ; /* 0x138 */
    U_IN0CSC_11                     IN0CSC_11                        ; /* 0x13c */
    U_IN0CSC_12                     IN0CSC_12                        ; /* 0x140 */
    U_IN0CSC_13                     IN0CSC_13                        ; /* 0x144 */
    U_IN0CSC_14                     IN0CSC_14                        ; /* 0x148 */
    U_IN0CSC_15                     IN0CSC_15                        ; /* 0x14c */
    U_IN0CSC_16                     IN0CSC_16                        ; /* 0x150 */
    U_IN0CSC_17                     IN0CSC_17                        ; /* 0x154 */
    U_IN0CSC_18                     IN0CSC_18                        ; /* 0x158 */
    U_IN0CSC_19                     IN0CSC_19                        ; /* 0x15c */
    U_IN0CSC_20                     IN0CSC_20                        ; /* 0x160 */
    U_IN0CSC_21                     IN0CSC_21                        ; /* 0x164 */
    U_IN0CSC_22                     IN0CSC_22                        ; /* 0x168 */
    U_IN0CSC_23                     IN0CSC_23                        ; /* 0x16c */
    U_IN0CSC_CLIP_IN_THRESHOLD0     IN0CSC_CLIP_IN_THRESHOLD0        ; /* 0x170 */
    U_IN0CSC_CLIP_IN_THRESHOLD1     IN0CSC_CLIP_IN_THRESHOLD1        ; /* 0x174 */
    U_IN0CSC_CLIP_IN_THRESHOLD2     IN0CSC_CLIP_IN_THRESHOLD2        ; /* 0x178 */
    U_IN0CSC_CLIP_OUT_THRESHOLD0    IN0CSC_CLIP_OUT_THRESHOLD0       ; /* 0x17c */
    U_IN0CSC_CLIP_OUT_THRESHOLD1    IN0CSC_CLIP_OUT_THRESHOLD1       ; /* 0x180 */
    U_IN0CSC_CLIP_OUT_THRESHOLD2    IN0CSC_CLIP_OUT_THRESHOLD2       ; /* 0x184 */
    U_IN0CSC_NORMALIZE_IN           IN0CSC_NORMALIZE_IN              ; /* 0x188 */
    U_IN0CSC_NORMALIZE_OUT          IN0CSC_NORMALIZE_OUT             ; /* 0x18c */
    U_IN0CSC_CVT_MODE               IN0CSC_CVT_MODE                  ; /* 0x190 */
    unsigned int                    reserved_9[27]                   ; /* 0x194~0x1fc */
    U_IN1CSC_MODE                   IN1CSC_MODE                      ; /* 0x200 */
    unsigned int                    reserved_10[3]                   ; /* 0x204~0x20c */
    U_IN1CSC_0                      IN1CSC_0                         ; /* 0x210 */
    U_IN1CSC_1                      IN1CSC_1                         ; /* 0x214 */
    U_IN1CSC_2                      IN1CSC_2                         ; /* 0x218 */
    U_IN1CSC_3                      IN1CSC_3                         ; /* 0x21c */
    U_IN1CSC_4                      IN1CSC_4                         ; /* 0x220 */
    U_IN1CSC_5                      IN1CSC_5                         ; /* 0x224 */
    U_IN1CSC_6                      IN1CSC_6                         ; /* 0x228 */
    U_IN1CSC_7                      IN1CSC_7                         ; /* 0x22c */
    U_IN1CSC_8                      IN1CSC_8                         ; /* 0x230 */
    U_IN1CSC_9                      IN1CSC_9                         ; /* 0x234 */
    U_IN1CSC_10                     IN1CSC_10                        ; /* 0x238 */
    U_IN1CSC_11                     IN1CSC_11                        ; /* 0x23c */
    U_IN1CSC_12                     IN1CSC_12                        ; /* 0x240 */
    U_IN1CSC_13                     IN1CSC_13                        ; /* 0x244 */
    U_IN1CSC_14                     IN1CSC_14                        ; /* 0x248 */
    U_IN1CSC_15                     IN1CSC_15                        ; /* 0x24c */
    U_IN1CSC_16                     IN1CSC_16                        ; /* 0x250 */
    U_IN1CSC_17                     IN1CSC_17                        ; /* 0x254 */
    U_IN1CSC_18                     IN1CSC_18                        ; /* 0x258 */
    U_IN1CSC_19                     IN1CSC_19                        ; /* 0x25c */
    U_IN1CSC_20                     IN1CSC_20                        ; /* 0x260 */
    U_IN1CSC_21                     IN1CSC_21                        ; /* 0x264 */
    U_IN1CSC_22                     IN1CSC_22                        ; /* 0x268 */
    U_IN1CSC_23                     IN1CSC_23                        ; /* 0x26c */
    U_IN1CSC_CLIP_IN_THRESHOLD0     IN1CSC_CLIP_IN_THRESHOLD0        ; /* 0x270 */
    U_IN1CSC_CLIP_IN_THRESHOLD1     IN1CSC_CLIP_IN_THRESHOLD1        ; /* 0x274 */
    U_IN1CSC_CLIP_IN_THRESHOLD2     IN1CSC_CLIP_IN_THRESHOLD2        ; /* 0x278 */
    U_IN1CSC_CLIP_OUT_THRESHOLD0    IN1CSC_CLIP_OUT_THRESHOLD0       ; /* 0x27c */
    U_IN1CSC_CLIP_OUT_THRESHOLD1    IN1CSC_CLIP_OUT_THRESHOLD1       ; /* 0x280 */
    U_IN1CSC_CLIP_OUT_THRESHOLD2    IN1CSC_CLIP_OUT_THRESHOLD2       ; /* 0x284 */
    U_IN1CSC_NORMALIZE_IN           IN1CSC_NORMALIZE_IN              ; /* 0x288 */
    U_IN1CSC_NORMALIZE_OUT          IN1CSC_NORMALIZE_OUT             ; /* 0x28c */
    U_IN1CSC_CVT_MODE               IN1CSC_CVT_MODE                  ; /* 0x290 */
    unsigned int                    reserved_11[27]                  ; /* 0x294~0x2fc */
    U_OUTCSC_MODE                   OUTCSC_MODE                      ; /* 0x300 */
    unsigned int                    reserved_12[3]                   ; /* 0x304~0x30c */
    U_OUTCSC_0                      OUTCSC_0                         ; /* 0x310 */
    U_OUTCSC_1                      OUTCSC_1                         ; /* 0x314 */
    U_OUTCSC_2                      OUTCSC_2                         ; /* 0x318 */
    U_OUTCSC_3                      OUTCSC_3                         ; /* 0x31c */
    U_OUTCSC_4                      OUTCSC_4                         ; /* 0x320 */
    U_OUTCSC_5                      OUTCSC_5                         ; /* 0x324 */
    U_OUTCSC_6                      OUTCSC_6                         ; /* 0x328 */
    U_OUTCSC_7                      OUTCSC_7                         ; /* 0x32c */
    U_OUTCSC_8                      OUTCSC_8                         ; /* 0x330 */
    U_OUTCSC_9                      OUTCSC_9                         ; /* 0x334 */
    U_OUTCSC_10                     OUTCSC_10                        ; /* 0x338 */
    U_OUTCSC_11                     OUTCSC_11                        ; /* 0x33c */
    U_OUTCSC_12                     OUTCSC_12                        ; /* 0x340 */
    U_OUTCSC_13                     OUTCSC_13                        ; /* 0x344 */
    U_OUTCSC_14                     OUTCSC_14                        ; /* 0x348 */
    U_OUTCSC_15                     OUTCSC_15                        ; /* 0x34c */
    U_OUTCSC_16                     OUTCSC_16                        ; /* 0x350 */
    U_OUTCSC_17                     OUTCSC_17                        ; /* 0x354 */
    U_OUTCSC_18                     OUTCSC_18                        ; /* 0x358 */
    U_OUTCSC_19                     OUTCSC_19                        ; /* 0x35c */
    U_OUTCSC_20                     OUTCSC_20                        ; /* 0x360 */
    U_OUTCSC_21                     OUTCSC_21                        ; /* 0x364 */
    U_OUTCSC_22                     OUTCSC_22                        ; /* 0x368 */
    U_OUTCSC_23                     OUTCSC_23                        ; /* 0x36c */
    U_OUTCSC_CLIP_IN_THRESHOLD0     OUTCSC_CLIP_IN_THRESHOLD0        ; /* 0x370 */
    U_OUTCSC_CLIP_IN_THRESHOLD1     OUTCSC_CLIP_IN_THRESHOLD1        ; /* 0x374 */
    U_OUTCSC_CLIP_IN_THRESHOLD2     OUTCSC_CLIP_IN_THRESHOLD2        ; /* 0x378 */
    U_OUTCSC_CLIP_OUT_THRESHOLD0    OUTCSC_CLIP_OUT_THRESHOLD0       ; /* 0x37c */
    U_OUTCSC_CLIP_OUT_THRESHOLD1    OUTCSC_CLIP_OUT_THRESHOLD1       ; /* 0x380 */
    U_OUTCSC_CLIP_OUT_THRESHOLD2    OUTCSC_CLIP_OUT_THRESHOLD2       ; /* 0x384 */
    U_OUTCSC_NORMALIZE_IN           OUTCSC_NORMALIZE_IN              ; /* 0x388 */
    U_OUTCSC_NORMALIZE_OUT          OUTCSC_NORMALIZE_OUT             ; /* 0x38c */
    U_OUTCSC_CVT_MODE               OUTCSC_CVT_MODE                  ; /* 0x390 */
    unsigned int                    reserved_13[28]                  ; /* 0x394~0x400 */
    U_PNET_ID                       PNET_ID                          ; /* 0x404 */
    U_PNET_M                        PNET_M                           ; /* 0x408 */
    U_PNET_N                        PNET_N                           ; /* 0x40c */
    U_PNET_XOFFSET                  PNET_XOFFSET                     ; /* 0x410 */
    unsigned int                    reserved_14                      ; /* 0x414 */
    U_PNET_TR                       PNET_TR                          ; /* 0x418 */
    unsigned int                    reserved_15[9]                   ; /* 0x41c~0x43c */
    U_HSV_MODE_SET                  HSV_MODE_SET                     ; /* 0x440 */
    U_HSV_SCALE_SAT                 HSV_SCALE_SAT                    ; /* 0x444 */
    U_HSV_DELTA_HUE                 HSV_DELTA_HUE                    ; /* 0x448 */
    unsigned int                    reserved_16[13]                  ; /* 0x44c~0x47c */
    U_CVT_CTRL                      CVT_CTRL                         ; /* 0x480 */
    U_CVT_SCALE                     CVT_SCALE                        ; /* 0x484 */
    unsigned int                    reserved_17[6]                   ; /* 0x488~0x49c */
    U_LINE_BLK_CONVERT              LINE_BLK_CONVERT                 ; /* 0x4a0 */
    U_LINE_BLK_CONVERT_INPUT_SIZE   LINE_BLK_CONVERT_INPUT_SIZE      ; /* 0x4a4 */
    U_LINE_BLK_CONVERT_BLK_SIZE     LINE_BLK_CONVERT_BLK_SIZE        ; /* 0x4a8 */

} S_VPC_PIPE_NMANAGER_REGS_TYPE;

/* Declare the struct pointor of the module VPC_PIPE_NMANAGER */
extern S_VPC_PIPE_NMANAGER_REGS_TYPE *gopVPC_PIPE_NMANAGERAllReg;


#endif // #ifndef __VPC_PIPELINE_NMANAGER_REG_C_UNION_DEFINE_H__
