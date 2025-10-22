// Copyright (c) The mlkem-native project authors
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: MIT-0

#include <stdint.h>
#include "common.h"


void mlk_ntt_butterfly_block(int16_t *r, int16_t root, unsigned start,
                             unsigned len, unsigned bound);

void harness(void)
{
  int16_t *r, root;
  unsigned start, stride, bound;
  mlk_ntt_butterfly_block(r, root, start, stride, bound);
}
