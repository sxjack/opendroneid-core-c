/* -*- tab-width: 2; mode: c; -*-

Copyright (c) 2023 Steve Jack

SPDX-License-Identifier: Apache-2.0

Open Drone ID OS dependent functions.

*/

#ifndef _ODID_OS_H_
#define _ODID_OS_H_

#if __ZEPHYR__

#ifdef __cplusplus
extern "C" {
#endif

float roundf(float);

#ifdef __cplusplus
};
#endif

#endif // Zephyr

#endif // ODID_OS

