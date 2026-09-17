/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-17 23:21:05
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:49:27
 * @FilePath: /schoolwork/junior/P1422.c
 * @Description: https://www.luogu.com.cn/problem/P1422
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int usePower = 0;
    scanf("%d", &usePower);
    double change = 0;
    if (usePower <= 150)
    {
        change += usePower * 0.4463;
    }
    else
    {
        change += 150 * 0.4463;
        if (usePower <= 400)
        {
            change += (usePower - 150) * 0.4663;
        }
        else
        {
            change += 250 * 0.4663;
            change += (usePower - 400) * 0.5663;
        }
    }
    printf("%.1lf\n", change);
    return 0;
}