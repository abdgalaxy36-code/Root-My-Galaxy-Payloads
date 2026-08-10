#ifndef TARGET_H
#define TARGET_H

#include "offsets.h"
#include "p0_fingerprint.h"

// Target identification
#define TARGET_MODEL "a37x"
#define TARGET_BUILD "A376BXXS4AZG4"
#define TARGET_FINGERPRINT "samsung/a37xnaxx/a37x:16/BP4A.251205.006/A376BXXS4AZG4_OJM4AZG4:user/release-keys"

// Kernel version
#define TARGET_KERNEL_RELEASE "6.1.157-android14-11"

// Architecture
#define TARGET_ARCH "arm64"

// Target-specific exploit configuration
#define TARGET_USE_PSELECT 1
#define TARGET_USE_TRACEFS 1

// P0 fingerprint table size (must match p0_fingerprint.h)
#define P0_FINGERPRINT_COUNT 32

#endif
