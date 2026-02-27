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

#include "ka_kernel_def_pub.h"
#include "ka_pci_pub.h"
#include "ka_task_pub.h"
#include "dvpp_trs_ops.h"
#include "dvpp_share_mem_ctrl.h"
#include "dvpp_cmdlist_ioctl.h"

#define PCI_VENDOR_ID_HUAWEI 0x19e5
static const ka_pci_device_id_t g_pci_dvpp_tbl[] = {
    {PCI_VDEVICE(HUAWEI, 0xd802), 0},
    {PCI_VDEVICE(HUAWEI, 0xd803), 0},
    {}};
KA_MODULE_DEVICE_TABLE(pci, g_pci_dvpp_tbl);

static int32_t __init dvpp_vdrv_init(void)
{
    dvpp_get_version_init();
    dvpp_trs_sqe_update_init();
    if (dvpp_cmdlist_dev_init() != 0) {
        dvpp_trs_sqe_update_uninit();
        return -1;
    }
    ka_task_spin_lock_init(&g_share_mem_pool_lock);
    return 0;
}

static void __exit dvpp_vdrv_exit(void)
{
    dvpp_cmdlist_dev_exit();
    dvpp_trs_sqe_update_uninit();
}

ka_module_init(dvpp_vdrv_init);
ka_module_exit(dvpp_vdrv_exit);

KA_MODULE_LICENSE("GPL");
