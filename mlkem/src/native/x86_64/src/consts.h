/*
 * Copyright (c) The mlkem-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

/* References
 * ==========
 *
 * - [REF_AVX2]
 *   CRYSTALS-Kyber optimized AVX2 implementation
 *   Bos, Ducas, Kiltz, Lepoint, Lyubashevsky, Schanck, Schwabe, Seiler, Stehlé
 *   https://github.com/pq-crystals/kyber/tree/main/avx2
 */

/*
 * This file is derived from the public domain
 * AVX2 Kyber implementation @[REF_AVX2].
 */

#ifndef MLK_NATIVE_X86_64_SRC_CONSTS_H
#define MLK_NATIVE_X86_64_SRC_CONSTS_H
#include "../../../common.h"

#define MLK_AVX2_BACKEND_DATA_OFFSET_REVIDXB 0
#define MLK_AVX2_BACKEND_DATA_OFFSET_REVIDXD 16
#define MLK_AVX2_BACKEND_DATA_OFFSET_ZETAS_EXP 32
#define MLK_AVX2_BACKEND_DATA_OFFSET_MULCACHE_TWIDDLES 496

#ifndef __ASSEMBLER__
#define mlk_qdata MLK_NAMESPACE(qdata)
extern const int16_t mlk_qdata[624];
#endif

#endif /* !MLK_NATIVE_X86_64_SRC_CONSTS_H */
