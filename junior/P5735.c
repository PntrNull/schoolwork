/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 21:35:28
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 21:45:51
 * @FilePath: /schoolwork/junior/P5735.c
 * @Description: https://www.luogu.com.cn/problem/P5735
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double x1 = 0, y1 = 0;
    double x2 = 0, y2 = 0;
    double x3 = 0, y3 = 0;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    double l1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double l3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double res = l1 + l2 + l3;
    printf("%.2lf\n", res);
    return 0;
}