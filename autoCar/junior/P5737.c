/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 21:42:39
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 21:47:16
 * @FilePath: /schoolwork/junior/P5737.c
 * @Description: https://www.luogu.com.cn/problem/P5737
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    int res = 0;
    int sol[1000] = {};
    for (int i = x; i <= y; ++i)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0))
        {

            sol[res] = i;
            res++;
        }
    }
    printf("%d\n", res);
    for (int i = 0; i < res; ++i)
    {
        printf("%d ", sol[i]);
    }
    printf("\n");
    return 0;
}