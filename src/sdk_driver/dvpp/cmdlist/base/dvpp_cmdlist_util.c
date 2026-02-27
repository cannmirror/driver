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

#include "dvpp_cmdlist_util.h"

#include "ka_system_pub.h"

int64_t dvpp_cmdlist_get_usec(void)
{
    const int64_t ns_per_us = 1000;
    ka_timespec64_t t;
    ka_system_ktime_get_real_ts64(&t);

    return (t.tv_sec * 1000000LL) + t.tv_nsec / ns_per_us;
}
