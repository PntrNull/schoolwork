/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-17 23:40:23
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-17 23:51:49
 * @FilePath: /schoolwork/junior/P1909.c
 * @Description: https://www.luogu.com.cn/problem/P1909
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int devide(int a, int b)
{
    if (a % b == 0)
    {
        return a / b;
    }
    else
    {
        return a / b + 1;
    }
    return -1;
}

int main()
{
    int n = 0;
    int a1 = 0, a2 = 0;
    int b1 = 0, b2 = 0;
    int c1 = 0, c2 = 0;
    scanf("%d", &n);
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);
    int price1 = 0, price2 = 0, price3 = 0;
    price1 = devide(n, a1) * a2;
    price2 = devide(n, b1) * b2;
    price3 = devide(n, c1) * c2;
    int minPrice = min(min(price1, price2), price3);
    printf("%d\n", minPrice);
    return 0;
}