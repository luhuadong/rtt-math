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

#define M_E              2.7182818284590452354
#define M_LOG2E          1.4426950408889634074        /* log_2 e */
#define M_1_PI           0.31830988618379067154       /* 1/pi */
#define M_2_PI           0.63661977236758134308       /* 2/pi */
#define M_2_SQRTPI       1.12837916709551257390       /* 2/sqrt(pi) */
#define M_LN10           2.30258509299404568402       /* log_e 10 */
#define M_LN2            0.69314718055994530942       /* log_e 2 */
#define M_LOG10E         0.43429448190325182765       /* log_10 e */
#define M_PI             3.14159265358979323846       /* pi */
#define M_PI_2           1.57079632679489661923       /* pi/2 */
#define M_PI_4           0.78539816339744830962       /* pi/4 */
#define M_SQRT1_2        0.70710678118654752440       /* 1/sqrt(2) */
#define M_SQRT2          1.41421356237309504880       /* sqrt(2) */


double random(void);
int    randrange(int start, int stop, int step);
int    randint(int start, int stop);

int    abs(const int x);
int    ceil(const int x);
int    floor(const int x);
int    round(const int x);

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

double sin(const double x);   /* returns sine of x radians */
double asin(const double x);  /* returns A, the angle corresponding to sin (A) = x */
double sinh(const double x);
double cos(const double x);   /* returns cosine of y radians */
double acos(const double x);  /* returns A, the angle corresponding to cos (A) = x */
double cosh(const double x);
double tan(const double x);   /* returns the tangent of x radians */
double atan(const double x);  /* returns A, the angle corresponding to tan (A) = x */
double atan2(const double y, const double x);
double tanh(const double x);

#endif /* __RTT_MATH_H__ */
