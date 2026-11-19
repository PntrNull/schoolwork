/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-12 19:10:38
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-19 00:19:02
 * @FilePath: /source/schoolwork/2026autumn/assignment5/coding2.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int countSteps(long long n)
{
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return 1 + countSteps(n / 2);
    return 1 + countSteps(3 * n + 1);
}

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    printf("%d\n", countSteps(n));
    return 0;
}