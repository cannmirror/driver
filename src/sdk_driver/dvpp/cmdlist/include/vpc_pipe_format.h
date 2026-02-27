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

#ifndef VPC_PIPE_FORMAT_H
#define VPC_PIPE_FORMAT_H

#include "vpc_pipe_types.h"

typedef struct {
    vpc_pixel_fmt_e p0;
    vpc_pixel_fmt_e p1;
    vpc_pixel_fmt_e p2;
    vpc_pixel_fmt_e p3;
} port_fmt_t;

typedef struct {
    uint32_t x;
    uint32_t y;
} pixel_step_t;

typedef struct {
    uint32_t val[6];
} down_sample_coeff_t;

typedef struct {
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
} port_du_t;

typedef struct {
    vpc_pic_fmt_e vpc_pic_fmt; // vpc图像格式，配置芯片的值
    port_fmt_t port_fmt; // 端口号像素格式
    pixel_step_t pixel_step; // 图像格式的跨度
    down_sample_coeff_t down_sample_coeff; // 降采样系数
    uint8_t uvup_en; // 增采样开关
    port_du_t port_du; // Du值
    img_rank_type_e rank; // 像素格式排列
    swap_t swap; // 像素排列交换配置
    plannar_fmt_e plannar_fmt; // plannar类型
} vpc_fmt_info_t;

void vpc_pipe_init_format_info(vpc_fmt_info_t *fmt_info, vpc_pipe_pic_fmt_t format);
uint32_t vpc_pipe_get_vpc_format(const vpc_fmt_info_t *fmt_info);
uint32_t vpc_pipe_get_du_val(const vpc_fmt_info_t *fmt_info, uint32_t port);
vpc_pixel_fmt_e vpc_pipe_get_pixel_fmt(const vpc_fmt_info_t *fmt_info, uint32_t port);
img_rank_type_e vpc_pipe_get_fmt_rank(const vpc_fmt_info_t *fmt_info);
uint32_t vpc_pipe_get_pixel_step(const vpc_fmt_info_t *fmt_info, uint32_t dir);
uint32_t vpc_pipe_get_line_size(const vpc_fmt_info_t *fmt_info, uint32_t width, uint32_t port);
uint32_t vpc_pipe_get_frame_height(const vpc_fmt_info_t *fmt_info, uint32_t height, uint32_t port);
uint32_t vpc_pipe_get_stride(const vpc_fmt_info_t *fmt_info, uint32_t y_stride, uint32_t port);
uint32_t vpc_pipe_get_offset(const vpc_fmt_info_t *fmt_info, uint32_t width, uint32_t port);
down_sample_coeff_t vpc_pipe_get_uvdown_coeff(const vpc_fmt_info_t *fmt_info);
uint8_t vpc_pipe_get_uvup_en(const vpc_fmt_info_t *fmt_info);
swap_t vpc_pipe_get_swap_cfg(const vpc_fmt_info_t *fmt_info);

#endif // #ifndef VPC_PIPE_FORMAT_H
