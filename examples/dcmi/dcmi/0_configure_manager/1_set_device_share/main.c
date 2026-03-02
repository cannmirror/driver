/**
 * Copyright (c) 2025 Huawei Technologies Co., Ltd.
 * This program is free software, you can redistribute it and/or modify it under the terms and conditions of
 * CANN Open Software License Agreement Version 2.0 (the "License").
 * Please refer to the License for details. You may not use this file except in compliance with the License.
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
 * See LICENSE in the root of the software repository for the full text of the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "dcmi_interface_api.h"

#define NPU_OK (0)

int main(int argc, char **argv)
{
    int ret;
    int card_count = 0;
    int card_id_list[MAX_CARD_NUM] = {0};
    int device_id = 0;
    int enable_flag = 0;
    int new_enable_flag;


    ret = dcmi_init();
    if (ret != NPU_OK) {
        printf("Failed to init dcmi.\n");
        return ret;
    }
    ret = dcmi_get_card_num_list(&card_count, card_id_list, MAX_CARD_NUM);
    if (ret != NPU_OK) {
        printf("Failed to get card number.\n");
        return ret;
    }
    printf("card count is %d \n", card_count);

    // 备份当前device share状态
    ret = dcmi_get_device_share_enable(card_id_list[0], device_id, &enable_flag);
    if (ret != NPU_OK) {
        printf("Failed to get device share status. ret=%d\n", ret);
        return ret;
    }

    printf("current device share status is %s.\n", enable_flag ? "enable" : "disable");

    // 设置新状态为相反的状态
    new_enable_flag = enable_flag ? 0 : 1;
    printf("set device share status to %s.\n", new_enable_flag ? "enable" : "disable");
    ret = dcmi_set_device_share_enable(card_id_list[0], device_id, new_enable_flag);
    if (ret != NPU_OK) {
        printf("Failed to set device share. ret=%d\n", ret);
        return ret;
    }

    // 从设备获取新状态
    ret = dcmi_get_device_share_enable(card_id_list[0], device_id, &new_enable_flag);
    if (ret != NPU_OK) {
        printf("Failed to get device share status. ret=%d\n", ret);
        return ret;
    }
    printf("new device share status is %s.\n", new_enable_flag ? "enable" : "disable");

    // 恢复设置前的状态
    ret = dcmi_set_device_share_enable(card_id_list[0], device_id, enable_flag);
    if (ret != NPU_OK) {
        printf("recover original device share status fail. ret=%d\n", ret);
        return ret;
    }
    printf("recover original device share status ok.\n");

    return ret;
}