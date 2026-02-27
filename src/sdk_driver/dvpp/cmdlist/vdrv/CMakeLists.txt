# ------------------------------------------------------------------------------------------------------------
# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software, you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You may not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.
# ------------------------------------------------------------------------------------------------------------
set(vdrv_dvpp_cmdlist_depends asdrv_trs asdrv_svm drv_dvpp_cmdlist drv_pcie_host ts_agent_vm
    drv_seclib_host asdrv_vvpc ascend_kernel_open_adapt)
add_host_ko(LOCAL_MODULE vdrv_dvpp_cmdlist
    KO_SRC_FOLDER ${CMAKE_CURRENT_SOURCE_DIR}
    USE_LOCAL_MODULE_BIN_FOLDER
    MAKE_ARGS ${MAKE_ARGS}
    TARGETE_DPENDS "${vdrv_dvpp_cmdlist_depends}")
