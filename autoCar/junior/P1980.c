/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-18 00:03:28
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-18 22:07:17
 * @FilePath: /schoolwork/junior/P1980.c
 * @Description: https://www.luogu.com.cn/problem/P1980
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, x = 0;
    scanf("%d %d", &n, &x);
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int num = i;
        while (num != 0)
        {
            if (num % 10 == x)
            {
                result++;
            }
            num /= 10;
        }
    }
    printf("%d\n", result);
    return 0;
}