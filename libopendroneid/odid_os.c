/* -*- tab-width: 2; mode: c; -*-

Copyright (c) 2023 Steve Jack

SPDX-License-Identifier: Apache-2.0

Open Drone ID OS dependent functions.

*/

#include "odid_os.h"

#if 0 && __ZEPHYR__

/*
 *  Only needed when using the minimal Zephyr library (which is the default).
 */

float roundf(float f) {

  float rounded;

  if (f > 0.0) {
    rounded = (int) (f + 0.5);
  } else {
    rounded = (int) (f - 0.5);
  }

  return rounded;
}

#endif
