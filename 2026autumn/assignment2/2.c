/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-10-12 23:33:59
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-10-12 23:38:34
 * @FilePath: /schoolwork/2026autumn/assignment2/2.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int lcm(int a, int b)
{
    int i = max(a, b);
    for (; i < __INT_MAX__; ++i)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
    }
    return i;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", lcm(a, b));
    return 0;
}