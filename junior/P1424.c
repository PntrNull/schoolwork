/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 20:39:45
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:34:37
 * @FilePath: /schoolwork/junior/P1424.c
 * @Description: https://www.luogu.com.cn/problem/P1424
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int x = 0, n = 0;
    scanf("%d %d", &x, &n);
    int date = x;
    int dis = 0;
    while (n > 0)
    {
        if (date > 7)
        {
            date -= 7;
        }
        if (date >= 1 && date <= 5)
        {
            dis += 250;
        }
        date++;
        n--;
    }
    printf("%d\n", dis);
    return 0;
}