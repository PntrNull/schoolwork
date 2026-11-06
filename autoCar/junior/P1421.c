/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 00:04:27
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:34:30
 * @FilePath: /schoolwork/junior/P1421.c
 * @Description: https://www.luogu.com.cn/problem/P1421
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int main()
{
    double a = 0, b = 0;
    scanf("%lf %lf", &a, &b);
    a += (b / 10);
    int cnt = 0;
    while (a >= 1.9)
    {
        a -= 1.9;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}