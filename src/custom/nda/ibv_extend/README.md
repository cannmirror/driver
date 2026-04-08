# ibv_extend - NDA(NPUDirect Async) function extension library based on ibverbs

## 概述

`ibv_extend` 是一个基于 libibverbs 的扩展库，用于支持 RDMA NDA (NPU Direct Async) 场景下的队列资源管理。该库扩展了标准 RDMA verbs 接口，允许在 NPU 侧管理 rdma 设备相关资源，支撑 NPU 内存与网卡之间的直接数据传输。

### 主要特性

- **NPU 内存队列管理**: 支持 NPU 侧 QP、CQ、SRQ 的创建和管理
- **支持多种 DMA 模式**: 支持 PCIe 总线 DMA 和独立 UB 总线 DMA 两种模式
- **可扩展驱动架构**: 支持动态加载厂商驱动，实现设备特定功能

## 目录结构

```
src/custom/nda/ibv_extend/
├── ibv_extend.h          # 公共头文件，定义扩展接口和数据结构
├── ibv_extend.c          # 核心实现文件
├── config.h.in           # 配置文件模板
├── CMakeLists.txt        # CMake 构建配置
├── build.sh              # 编译脚本
└── README.md             # 本文档
```

## 编译说明

### 编译依赖

- CMake >= 3.13
- GCC 或 Clang 编译器

### 使用 build.sh 脚本编译

#### 基本用法

```bash
# 默认编译（Release 模式，自动下载 rdma-core）
./build.sh

# Debug 模式编译
./build.sh -t=debug

# 查看帮助信息
./build.sh -h
```

#### 编译参数说明

| 参数 | 长参数 | 说明 |
|------|--------|------|
| `-b=PATH` | `--libibverbs-build-dir=PATH` | 指定预编译的 rdma-core 构建目录 |
| `-s=PATH` | `--libibverbs-source-dir=PATH` | 指定 rdma-core 源码目录 |
| `-t=TYPE` | `--type=TYPE` | 编译类型：`release` 或 `debug`（默认：release） |
| `-h` | `--help` | 显示帮助信息 |

**注意**: `-b` 和 `-s` 参数互斥，不能同时使用。

#### 编译示例

```bash
# 使用预编译的 rdma-core 构建库
./build.sh -b=/path/to/rdma-core/build

# 使用自定义 rdma-core 源码
./build.sh -s=/path/to/rdma-core

# Debug 模式 + 自定义源码
./build.sh -t=debug -s=/path/to/rdma-core
```

### 编译输出

编译完成后，输出文件位于以下目录：

#### output/ 目录（正式发布文件）

```
output/
├── lib/
│   └── libibv_extend.so      # 共享库
└── include/
    └── ibv_extend.h          # 头文件
```

#### build/ 目录（构建产物）

```
build/
├── libibv_extend.so         # 共享库（构建目录）
```

### CMake 编译选项

| 选项 | 默认值 | 说明 |
|------|--------|------|
| `BUILD_TESTS` | ON | 是否编译测试程序 |
| `LIBIBVERBS_BUILD_DIR` | - | 预编译 libibverbs 目录 |
| `LIBIBVERBS_SOURCE_DIR` | `3rd/rdma-core` | rdma-core 源码目录 |
| `CMAKE_BUILD_TYPE` | Release | 编译类型 |

## 运行配置

支持通过配置环境变量或配置文件两种方式动态加载扩展驱动：

### 环境变量

| 环境变量 | 说明 |
|----------|------|
| `IBV_EXTEND_DRIVERS` | 指定要加载的扩展驱动，多个驱动用 `:` 或 `;` 分隔 |

示例：
```bash
export IBV_EXTEND_DRIVERS="/path1/driver1.so:/path2/driver2.so"
```

### 配置文件

扩展驱动配置文件位于 `/etc/libibverbs_extend.d/` 目录，配置文件格式：

```
driver <driver_name>
```

示例配置文件 `/etc/libibverbs_extend.d/my_driver.conf`：
```
driver my_driver
```

### 驱动搜索路径

扩展驱动库按以下顺序搜索：

1. 环境变量 `IBV_EXTEND_DRIVERS` 中指定的绝对路径
2. 系统库目录（根据架构自动选择，如 `/usr/local/lib64`、`/usr/lib64`、`/usr/local/lib` 或 `/usr/lib`）
3. 当前目录

### 运行时依赖

运行时需要确保以下库可被找到：
- `libibverbs.so`
- `libibv_extend.so`

设置库路径：
```bash
export LD_LIBRARY_PATH=/path/to/lib:$LD_LIBRARY_PATH
```

## 核心接口说明

详见 [ibv_extend.h](./ibv_extend.h) 头文件

## 版本信息

- **版本**: v3.1.0
- **创建日期**: 2026/2/14
- **最后更新**: 2026/3/16
- **版权**: Copyright (c) Huawei Technologies Co., Ltd. 2026-2026. All rights reserved.
