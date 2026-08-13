#ifndef P0_FINGERPRINT_H
#define P0_FINGERPRINT_H

#define P0_FINGERPRINT_COUNT 32
#define P0_FINGERPRINT_WORDS 6

struct p0_fingerprint {
    unsigned long long slide;
    unsigned long long words[P0_FINGERPRINT_WORDS];
};

static const unsigned long long p0_fingerprint_offsets[P0_FINGERPRINT_WORDS] = {
    0x00, 0x08, 0x10, 0x18, 0x20, 0x28
};

static const struct p0_fingerprint p0_fingerprints[P0_FINGERPRINT_COUNT] = {
    { 0x000000ULL, { 0xffffffc00840ffc8, 0xffffffc008410644, 0xffffffc0084107d0, 0xffffffc008410db8, 0xffffffc008411068, 0xffffffc0083da9a4 } },
    { 0x010000ULL, { 0xffffffc0083da9dc, 0xffffffc0083daa14, 0xffffffc0083dad24, 0xffffffc0083dad54, 0xffffffc0083dad84, 0xffffffc0083daee0 } },
    { 0x020000ULL, { 0xffffffc0083daf10, 0xffffffc0083daf40, 0xffffffc0083dafd4, 0xffffffc0083db004, 0xffffffc0083db034, 0xffffffc0083ef640 } },
    { 0x030000ULL, { 0xffffffc0080e2a90, 0xffffffc00840b20c, 0xffffffc008405c6c, 0xffffffc008406988, 0xffffffc008406bfc, 0xffffffc0083ce2f4 } },
    { 0x040000ULL, { 0xffffffc0083ce220, 0xffffffc0083b793c, 0xffffffc008404900, 0xffffffc008404a84, 0xffffffc008404f14, 0xffffffc0083b9f7c } },
    { 0x050000ULL, { 0xffffffc008765834, 0xffffffc008765b20, 0xffffffc0084267e8, 0xffffffc0083b1b50, 0xffffffc0083b1fb8, 0xffffffc0083b2ccc } },
    { 0x060000ULL, { 0xffffffc0083b3118, 0xffffffc0083b38c8, 0xffffffc0083b464c, 0xffffffc0083d1930, 0xffffffc0083d4230, 0xffffffc0083d4e0c } },
    { 0x070000ULL, { 0xffffffc008022abc, 0xffffffc0083f0508, 0xffffffc0083f0644, 0xffffffc00839a050, 0xffffffc00839a2fc, 0xffffffc00839a674 } },
    { 0x080000ULL, { 0xffffffc00839a6f8, 0xffffffc00839a790, 0xffffffc00839a8a8, 0xffffffc00839a94c, 0xffffffc00839ac38, 0xffffffc00839acc8 } },
    { 0x090000ULL, { 0xffffffc00839b018, 0xffffffc00839b200, 0xffffffc00839c334, 0xffffffc00839c780, 0xffffffc00839c7fc, 0xffffffc0083ac17c } },
    { 0x0a0000ULL, { 0xffffffc00844628c, 0xffffffc0083bc268, 0xffffffc00839d11c, 0xffffffc00839e540, 0xffffffc00839e654, 0xffffffc00839f30c } },
    { 0x0b0000ULL, { 0xffffffc00839f33c, 0xffffffc00839e744, 0xffffffc00839e8d4, 0xffffffc00839f36c, 0xffffffc00839f3e4, 0xffffffc00839f7fc } },
    { 0x0c0000ULL, { 0xffffffc0083bf1a0, 0xffffffc0083bf640, 0xffffffc008408ff0, 0xffffffc0083ec31c, 0xffffffc0083ec904, 0xffffffc0083ed208 } },
    { 0x0d0000ULL, { 0xffffffc0083a6de0, 0xffffffc0083a6c54, 0xffffffc0083a6d40, 0xffffffc0083ed64c, 0xffffffc0083ed96c, 0xffffffc0083eda3c } },
    { 0x0e0000ULL, { 0xffffffc0083edc78, 0xffffffc008409c44, 0xffffffc008409e48, 0xffffffc008409f04, 0xffffffc0083ee0f8, 0xffffffc0080e2bb0 } },
    { 0x0f0000ULL, { 0xffffffc0080be2f4, 0xffffffc0080be65c, 0xffffffc008022a38, 0xffffffc0080b51e8, 0xffffffc0080b52a0, 0xffffffc0080b52ec } },
    { 0x100000ULL, { 0xffffffc0080aa768, 0xffffffc0080ac334, 0xffffffc0081a1938, 0xffffffc0081a1424, 0xffffffc0081a1450, 0xffffffc008189734 } },
    { 0x110000ULL, { 0xffffffc008197af0, 0xffffffc008197f08, 0xffffffc0080e2c34, 0xffffffc008177760, 0xffffffc0081769cc, 0xffffffc008192580 } },
    { 0x120000ULL, { 0xffffffc0081928e4, 0xffffffc008192ab4, 0xffffffc008192ca0, 0xffffffc008192eb4, 0xffffffc008193284, 0xffffffc008193394 } },
    { 0x130000ULL, { 0xffffffc008193880, 0xffffffc008193e20, 0xffffffc00813d0d8, 0xffffffc0080c11d0, 0xffffffc0080f7488, 0xffffffc0080f744c } },
    { 0x140000ULL, { 0xffffffc0080f7a64, 0xffffffc0080f7ae8, 0xffffffc0080f828c, 0xffffffc0080f8538, 0xffffffc0080f874c, 0xffffffc0080f8a70 } },
    { 0x150000ULL, { 0xffffffc0080f8a9c, 0xffffffc0080f8ac8, 0xffffffc0080c7610, 0xffffffc0080c954c, 0xffffffc0080c9a4c, 0xffffffc0080c996c } },
    { 0x160000ULL, { 0xffffffc0080ca29c, 0xffffffc0080cca70, 0xffffffc0080cb7dc, 0xffffffc0080c7be4, 0xffffffc0080c7ff0, 0xffffffc0080c8fe4 } },
    { 0x170000ULL, { 0xffffffc0080c9b6c, 0xffffffc00801e404, 0xffffffc0080ce20c, 0xffffffc0080ce4d0, 0xffffffc0080e7820, 0xffffffc0080ce83c } },
    { 0x180000ULL, { 0xffffffc0080ce94c, 0xffffffc0080ceb38, 0xffffffc0080cecd0, 0xffffffc0080cef64, 0xffffffc0080cef94, 0xffffffc0080cf494 } },
    { 0x190000ULL, { 0xffffffc0080cf4c4, 0xffffffc0080cf8c4, 0xffffffc0080cf9d8, 0xffffffc0080cfb34, 0xffffffc0080cff58, 0xffffffc0080d00d4 } },
    { 0x1a0000ULL, { 0xffffffc0080d0198, 0xffffffc0080d02f4, 0xffffffc0080eb84c, 0xffffffc0080eb9e8, 0xffffffc0080d0318, 0xffffffc0080d076c } },
    { 0x1b0000ULL, { 0xffffffc0080d0b88, 0xffffffc0080d0d9c, 0xffffffc0080d16e4, 0xffffffc0080d1bd0, 0xffffffc0080d1e20, 0xffffffc0080d1e6c } },
    { 0x1c0000ULL, { 0xffffffc0080d2e1c, 0xffffffc0081810f8, 0xffffffc008181544, 0xffffffc008182164, 0xffffffc0080cf9fc, 0xffffffc0080cfa5c } },
    { 0x1d0000ULL, { 0xffffffc0080cfaa4, 0xffffffc0080cfac8, 0xffffffc0080cfaec, 0xffffffc0080cfb10, 0xffffffc0080cfa2c, 0xffffffc0080d3034 } },
    { 0x1e0000ULL, { 0xffffffc0080e2d00, 0xffffffc0080e2d18, 0xffffffc0080e2d24, 0xffffffc0080e2d3c, 0xffffffc0080e2d54, 0xffffffc0080e2d6c } },
    { 0x1f0000ULL, { 0xffffffc0080e2d84, 0xffffffc0080e2d9c, 0xffffffc0080e2dc0, 0xffffffc0080e2dd8, 0xffffffc0080e2df0, 0xffffffc0080e2e08 } },
};

#endif
