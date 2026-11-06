/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-18 22:15:59
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 21:02:34
 * @FilePath: /schoolwork/junior/P1428.c
 * @Description: https://www.luogu.com.cn/problem/P1428
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[101] = {};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int res[101] = {};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j])
            {
                res[i]++;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}