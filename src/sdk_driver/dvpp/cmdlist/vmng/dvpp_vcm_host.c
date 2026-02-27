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
#include "dvpp_vcm_host.h"
#include "comm_kernel_interface.h"
#include "vmng_kernel_interface.h"
#include "dvpp_cmdlist_log.h"
#include "dvpp_vmng.h"

static DVPP_VCM_RECV_F g_dvpp_vcm_recv_cbs[(uint32_t)DVPP_VCM_MAXCMD] = {0};

static int32_t dvpp_vcm_check_rx_msg_para(uint32_t dev_id, uint32_t fid, struct vmng_rx_msg_proc_info *proc_info)
{
    if (proc_info == NULL) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm check rx msg proc_info is NULL, dev_id=%u, fid=%u\n", dev_id, fid);
        return -1;
    }

    if (proc_info->real_out_len == NULL) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm check rx msg real_out_len is NULL, dev_id=%u, fid=%u\n", dev_id, fid);
        return -1;
    }

    if (proc_info->data == NULL) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm check rx msg data is NULL, dev_id=%u, fid=%u\n", dev_id, fid);
        return -1;
    }

    // dev_id 0~63是物理设备, 100~1123为切分设备,
    if (dev_id >= DVPP_VMNG_DEVICE_NUM_MAX) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm check rx msg dev_id=%u invalid\n", dev_id);
        return -1;
    }

    // fid 都为0
    if (fid != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev_id=%u check rx msg fid=%u invalid\n", dev_id, fid);
        return -1;
    }

    if ((proc_info->in_data_len != sizeof(struct dvpp_vcm_msg))
        || (proc_info->out_data_len != sizeof(struct dvpp_vcm_msg))) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm check rx msg in_data_len=%u or out_data_len=%u invalid\n",
            proc_info->in_data_len, proc_info->out_data_len);
        return -1;
    }
    return 0;
}

static void dvpp_vcm_call_recv_cb(uint32_t dev_id, uint32_t fid, struct dvpp_vcm_msg *msg)
{
    int32_t ret = 0;
    uint32_t cmd_index = (uint32_t)msg->cmd;

    if ((cmd_index >= DVPP_VCM_MAXCMD) || (msg->msg_data_len > DVPP_VCM_MSG_DATA_MAXLEN)) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm cmd=%u or msg_data_len=%u invalid\n", cmd_index, msg->msg_data_len);
        msg->complete_code = -1;
        return;
    }

    if (g_dvpp_vcm_recv_cbs[cmd_index] == NULL) {
        msg->complete_code = -1;
        return;
    }

    ret = g_dvpp_vcm_recv_cbs[cmd_index](dev_id, fid, (void *)&(msg->msg_data[0]), msg->msg_data_len);
    if (ret != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev=%u fid=%u cmd=%u call recv cb failed ret=%d\n",
            dev_id, fid, cmd_index, ret);
    }
    msg->complete_code = ret;
    return;
}

static int32_t dvpp_vcm_vpc_msg_recv(uint32_t dev_id, uint32_t fid, struct vmng_rx_msg_proc_info *proc_info)
{
    if (dvpp_vcm_check_rx_msg_para(dev_id, fid, proc_info) != 0) {
        return 0;
    }

    dvpp_vcm_call_recv_cb(dev_id, fid, (struct dvpp_vcm_msg *)proc_info->data);
    *(proc_info->real_out_len) = sizeof(struct dvpp_vcm_msg);
    return 0;
}

static struct vmng_vpc_client dvpp_vpc_client = {
    .vpc_type = VMNG_VPC_TYPE_DVPP,
    .init = NULL,
    .msg_recv = dvpp_vcm_vpc_msg_recv,
};

int32_t dvpp_vcm_vpc_register_client(uint32_t dev_id, uint32_t fid)
{
    int32_t ret = 0;
    ret = vmngh_vpc_register_client_safety(dev_id, fid, &dvpp_vpc_client);
    if (ret != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev=%u fid=%u vpc client register failed, ret=%d\n", dev_id, fid, ret);
    }
    return ret;
}

int32_t dvpp_vcm_vpc_unregister_client(uint32_t dev_id, uint32_t fid)
{
    int32_t ret = 0;
    ret = vmngh_vpc_unregister_client(dev_id, fid, &dvpp_vpc_client);
    if (ret != 0) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm dev=%u fid=%u vpc client unregister failed, ret=%d\n", dev_id, fid, ret);
    }
    return ret;
}

int32_t dvpp_vcm_register_msg_recv_cb(enum dvpp_vcm_cmd cmd, DVPP_VCM_RECV_F func)
{
    uint32_t cmd_index = (uint32_t)cmd;
    if ((cmd_index >= DVPP_VCM_MAXCMD) || (func == NULL)) {
        DVPP_CMDLIST_LOG_ERROR("dvpp vcm register recv cb failed, cmd=%u\n", cmd_index);
        return -1;
    }
    g_dvpp_vcm_recv_cbs[cmd_index] = func;
    return 0;
}