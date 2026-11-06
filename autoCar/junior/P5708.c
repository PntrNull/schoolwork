/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 00:04:27
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:53:26
 * @FilePath: /schoolwork/junior/P5708.c
 * @Description: https://www.luogu.com.cn/problem/P5708
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (double)(a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f\n", S);
    return 0;
}