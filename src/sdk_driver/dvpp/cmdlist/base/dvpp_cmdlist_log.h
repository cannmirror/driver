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

#ifndef BASE_DVPP_CMDLIST_LOG_H
#define BASE_DVPP_CMDLIST_LOG_H

#ifdef __KERNEL__
#include <stdarg.h>
#include "ka_dfx_pub.h"
#else
#include "dlog_pub.h"
#endif

// 个人修改统计，版本号统计
#define VERSION_WCG (0)
#define VERSION_LJC (0)
#define VERSION_LXC (0)
#define VERSION_LYT (1)
#define VERSION_SL  (0)
#define VERSION_WJ  (0)
#define VERSION_XH  (0)
#define VERSION_WYW (0)
#define VERSION ( \
    VERSION_WCG + VERSION_LJC + VERSION_LXC + VERSION_LYT + VERSION_SL + VERSION_WJ + VERSION_XH + VERSION_WYW)

#define DVPP_CMDLIST_FACILITY  87
#ifdef __KERNEL__
#ifdef DVPP_MINI_V2_MDC
__inline static int dvpp_cmdlist_vprintk_emit(const int level, const char *fmt, ...)
{
    va_list args;
    int ret;
    va_start(args, fmt);
    ret = ka_dfx_vprintk_emit(DVPP_CMDLIST_FACILITY, level, fmt, args);
    va_end(args);
    return ret;
}

#define DVPP_LOG_INFO(module, format, ...) \
do { \
    (void)dvpp_cmdlist_vprintk_emit(KA_LOGLEVEL_INFO, "[ascend][DVPP_CMDLIST][%s] [%s:%d] "  "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_DEBUG(module, format, ...) \
do { \
    (void)dvpp_cmdlist_vprintk_emit(KA_LOGLEVEL_DEBUG, "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_WARN(module, format, ...) \
do { \
    (void)dvpp_cmdlist_vprintk_emit(KA_LOGLEVEL_WARNING, "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_ERROR(module, format, ...) \
do { \
    (void)dvpp_cmdlist_vprintk_emit(KA_LOGLEVEL_ERR, "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)
#else  // #ifdef DVPP_MINI_V2_MDC
#define DVPP_LOG_INFO(module, format, ...) \
do { \
    (void)ka_dfx_printk(KA_KERN_INFO "[ascend][DVPP_CMDLIST][%s] [%s:%d] "  "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_DEBUG(module, format, ...) \
do { \
    (void)ka_dfx_printk(KA_KERN_DEBUG "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_WARN(module, format, ...) \
do { \
    (void)ka_dfx_printk(KA_KERN_WARNING "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#define DVPP_LOG_ERROR(module, format, ...) \
do { \
    (void)ka_dfx_printk(KA_KERN_ERR "[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)
#endif  // #ifdef DVPP_MINI_V2_MDC
// 动态日志输出功能可以通过配置/sys/kernel/debug/dynamic_debug/control进行启用
#define DVPP_DYNAMIC_DEBUG(module, format, ...) \
do { \
    ka_dfx_pr_debug("[ascend][DVPP_CMDLIST][%s] [%s:%d] "   "[T%d] " format "", \
        module, __func__, __LINE__, VERSION, ##__VA_ARGS__); \
} while (0)

#else // #ifdef __KERNEL__

#define DVPP_LOG_INFO(module, format, ...)                                                  \
do {                                                                                        \
    dlog_info(DVPP, "[DVPP_CMDLIST][%s] [%s:%d] " "[T%d] " format "",                       \
              module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__);                      \
} while (0)

#define DVPP_LOG_WARN(module, format, ...)                                                  \
do {                                                                                        \
    dlog_warn(DVPP, "[DVPP_CMDLIST][%s] [%s:%d] " "[T%d] " format "",                       \
              module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__);                      \
} while (0)

#define DVPP_LOG_ERROR(module, format, ...)                                                 \
do {                                                                                        \
    dlog_error(DVPP, "[DVPP_CMDLIST][%s] [%s:%d] " "[T%d] " format "",                      \
               module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__);                     \
} while (0)

#define DVPP_DYNAMIC_DEBUG(module, format, ...)                                             \
do {                                                                                        \
    dlog_debug(DVPP, "[DVPP_CMDLIST][%s] [%s:%d] " "[T%d] " format "",                      \
               module, __FUNCTION__, __LINE__, VERSION, ##__VA_ARGS__);                     \
} while (0)

#endif // #ifdef __USER__

#define DVPP_CMDLIST_JPEGD_LOG_INFO(format, argv...)   DVPP_LOG_INFO("JPEGD", format, ##argv)
#define DVPP_CMDLIST_JPEGD_LOG_DEBUG(format, argv...)  DVPP_DYNAMIC_DEBUG("JPEGD", format, ##argv)
#define DVPP_CMDLIST_JPEGD_LOG_WARN(format, argv...)   DVPP_LOG_WARN("JPEGD", format, ##argv)
#define DVPP_CMDLIST_JPEGD_LOG_ERROR(format, argv...)  DVPP_LOG_ERROR("JPEGD", format, ##argv)

#define DVPP_CMDLIST_JPEGE_LOG_INFO(format, argv...)   DVPP_LOG_INFO("JPEGE", format, ##argv)
#define DVPP_CMDLIST_JPEGE_LOG_DEBUG(format, argv...)  DVPP_DYNAMIC_DEBUG("JPEGE", format, ##argv)
#define DVPP_CMDLIST_JPEGE_LOG_WARN(format, argv...)   DVPP_LOG_WARN("JPEGE", format, ##argv)
#define DVPP_CMDLIST_JPEGE_LOG_ERROR(format, argv...)  DVPP_LOG_ERROR("JPEGE", format, ##argv)

#define DVPP_CMDLIST_VPC_LOG_INFO(format, argv...)   DVPP_LOG_INFO("VPC", format, ##argv)
#define DVPP_CMDLIST_VPC_LOG_DEBUG(format, argv...)  DVPP_DYNAMIC_DEBUG("VPC", format, ##argv)
#define DVPP_CMDLIST_VPC_LOG_WARN(format, argv...)   DVPP_LOG_WARN("VPC", format, ##argv)
#define DVPP_CMDLIST_VPC_LOG_ERROR(format, argv...)  DVPP_LOG_ERROR("VPC", format, ##argv)

#define DVPP_CMDLIST_LOG_INFO(format, argv...)   DVPP_LOG_INFO("DVPP", format, ##argv)
#define DVPP_CMDLIST_LOG_DEBUG(format, argv...)  DVPP_DYNAMIC_DEBUG("DVPP", format, ##argv)
#define DVPP_CMDLIST_LOG_WARN(format, argv...)   DVPP_LOG_WARN("DVPP", format, ##argv)
#define DVPP_CMDLIST_LOG_ERROR(format, argv...)  DVPP_LOG_ERROR("DVPP", format, ##argv)

#endif // #ifndef BASE_DVPP_CMDLIST_LOG_H
