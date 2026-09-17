/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 00:04:27
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:53:21
 * @FilePath: /schoolwork/junior/P5705.c
 * @Description: https://www.luogu.com.cn/problem/P5705
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int first = 0, second = 0;
    scanf("%d.%d", &first, &second);
    first = (first % 10) * 100 + (first / 10 % 10) * 10 + (first / 100);
    printf("%d.%d\n", second, first);
    return 0;
}