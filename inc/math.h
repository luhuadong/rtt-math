/*
 * Copyright (c) 2020, RudyLo <luhuadong@163.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-07-08     RudyLo       the first version
 */

#ifndef __RTT_MATH_H__
#define __RTT_MATH_H__

#include <rtthread.h>

#define M_PI 3.141592653589793238462643


int   random(const int min, const int max);
int   abs(const int x);
int   ceil(const int x);
int   floor(const int x);
int   round(const int x);

int   sqrt(const int x);
int   log(const int x);
int   log10(const int x);
int   exp(const int x);
int   ldexp(const int m, const int n);
int   frexp(const int x);

int   max(const int x, const int y);
int   min(const int x, const int y);
int   modf(const int x);
float rad(const float x);
float deg(const float x);

float sin(const float x);
float asin(const float x);
float sinh(const float x);
float cos(const float x);
float acos(const float x);
float cosh(const float x);
float tan(const float x);
float atan(const float x);
float atan2(const float y, const float x);
float tanh(const float x);

#endif /* __RTT_MATH_H__ */
