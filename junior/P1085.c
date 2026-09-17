/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-17 23:53:43
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-18 00:02:46
 * @FilePath: /schoolwork/junior/P1085.c
 * @Description: https://www.luogu.com.cn/problem/P1085
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int week[7] = {};
    for (int i = 0; i < 7; ++i)
    {
        int sc = 0, ac = 0; // sc: school; ac: after school
        scanf("%d %d", &sc, &ac);
        week[i] = sc + ac;
    }
    int maxAngry = 0;
    int angryDay = 0;
    for (int i = 0; i < 7; ++i)
    {
        if (week[i] > 8 && week[i] > maxAngry)
        {
            maxAngry = week[i];
            angryDay = i + 1;
        }
    }
    printf("%d\n", angryDay);
    return 0;
}
