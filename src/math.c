/*
 * Copyright (c) 2020, RudyLo <luhuadong@163.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-07-08     luhuadong    the first version
 */

#define DBG_TAG "misc.math"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

#include <math.h>


int abs(const int x)
{
    return x > 0 ? x : -x;
}