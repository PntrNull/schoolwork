/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-11 00:04:27
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:49:34
 * @FilePath: /schoolwork/junior/P1055.c
 * @Description: https://www.luogu.com.cn/problem/P1055
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int first = 0, second = 0, third = 0;
    char fourth = 0;
    scanf("%d-%d-%d-%c", &first, &second, &third, &fourth);
    int result = first;
    result += (second / 100) * 2 + (second / 10 % 10) * 3 + (second % 10) * 4;
    result += (third / 10000) * 5 + (third / 1000 % 10) * 6 + (third / 100 % 10) * 7 + (third / 10 % 10) * 8 + (third % 10) * 9;
    result %= 11;
    int ans = 0;
    if (fourth == 'X')
    {
        if (result == 10)
        {
            ans = 1;
        }
    }
    else
    {
        if (result == (int)fourth - (int)'0')
        {
            ans = 1;
        }
    }
    if (ans == 1)
    {
        printf("Right");
    }
    else
    {
        if (result == 10)
        {
            printf("%d-%d-%d-X\n", first, second, third);
        }
        else
        {
            printf("%d-%d-%d-%d\n", first, second, third, result);
        }
    }
    return 0;
}