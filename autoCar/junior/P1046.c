/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 13:24:16
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:34:08
 * @FilePath: /schoolwork/junior/P1046.c
 * @Description: https://www.luogu.com.cn/problem/P1046
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int main()
{
    int heightApple[10] = {0};
    int heightTao = 0;
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &heightApple[i]);
    }
    scanf("%d", &heightTao);
    int cnt = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (heightApple[i] <= heightTao + 30)
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}