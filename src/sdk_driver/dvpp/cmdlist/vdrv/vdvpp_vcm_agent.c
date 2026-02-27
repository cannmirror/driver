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
#include "dvpp_vcm_agent.h"

#include "ka_errno_pub.h"
#include "ka_system_pub.h"

#include "vmng_kernel_interface.h"
#include "dvpp_cmdlist_log.h"

static int32_t dvpp_vcm_check_send_back_param(uint32_t dev_id, struct dvpp_vcm_msg *msg,
                                              struct vmng_tx_msg_proc_info *tx_info)
{
    if (tx_info->real_out_len > sizeof(struct dvpp_vcm_msg)) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev_id=%u cmd=%u check send back real out len=%u failed\n",
            dev_id, (uint32_t)msg->cmd, tx_info->real_out_len);
        return -1;
    }

    if (msg->complete_code != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev_id=%u cmd=%u check send back complete code=%d failed\n",
            dev_id, (uint32_t)msg->cmd, msg->complete_code);
        return -1;
    }
    return 0;
}

int32_t dvpp_vcm_msg_send(uint32_t dev_id, struct dvpp_vcm_msg *msg)
{
    const uint32_t RETRY_TIMES = 100;
    uint32_t retry_time = RETRY_TIMES;
    struct vmng_tx_msg_proc_info tx_info;
    int32_t ret;

    msg->complete_code = -1;
    tx_info.data = (void *)msg;
    tx_info.in_data_len = sizeof(struct dvpp_vcm_msg);
    tx_info.out_data_len = sizeof(struct dvpp_vcm_msg);
    tx_info.real_out_len = 0;

    do {
        ret = vpc_msg_send(dev_id, VPC_VM_FID, VMNG_VPC_TYPE_DVPP, &tx_info, VPC_DEFAULT_TIMEOUT);
        if (ret != -ENOSPC) {
            break;
        }
        ka_system_usleep_range(100, 200); /* 100us ~ 200us */
        retry_time--;
    } while (retry_time != 0);

    if (retry_time != RETRY_TIMES) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev_id=%u cmd=%u send msg retry times=%u\n",
            dev_id, (uint32_t)msg->cmd, (RETRY_TIMES - retry_time));
    }

    if (ret != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev_id=%u cmd=%u send msg failed ret=%d\n",
            dev_id, (uint32_t)msg->cmd, ret);
        return -1;
    }

    if (dvpp_vcm_check_send_back_param(dev_id, msg, &tx_info) != 0) {
        return -1;
    }
    return 0;
}