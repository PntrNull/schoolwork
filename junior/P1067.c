/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 21:54:30
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 22:16:11
 * @FilePath: /schoolwork/junior/P1067.c
 * @Description: https://www.luogu.com.cn/problem/P1067
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int inp[101] = {};
    for (int i = 0; i <= n; ++i)
    {
        scanf("%d", &inp[i]);
    }
    if (n == 0)
    {
        printf("%d\n", inp[0]);
        return 0;
    }
    for (int i = 0; i < n; ++i)
    {
        if (inp[i] == 0)
            continue;
        if (i == 0) {
            if (inp[i] < 0)
                printf("-");
        }
        else
        {
            if (inp[i] > 0)
                printf("+");
            else
                printf("-");
        }
        if (inp[i] != 1 && inp[i] != -1)
            printf("%d", abs(inp[i]));
        printf("x");
        if (i != n - 1)
            printf("^%d", (n - i));
    }
    if (inp[n] < 0)
        printf("-%d\n", abs(inp[n]));
    else if (inp[n] > 0)
        printf("+%d\n", abs(inp[n]));
    return 0;
}