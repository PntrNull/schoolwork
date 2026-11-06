/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:35:28
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:37:02
 * @FilePath: /schoolwork/2026autumn/lab2/2002.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <math.h>

int getSum(int inp)
{
    int sum = 1;
    int i = 2;
    for (; i < sqrt(inp); ++i)
    {
        if (inp % i == 0)
        {
            sum += i;
            sum += inp / i;
        }
    }
    if (i * i == inp)
        sum += i;
    return sum;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 3; i <= n; ++i)
    {
        int sum = getSum(i);
        if (sum > i && getSum(sum) == i)
        {
            printf("(%d,%d)\n", i, sum);
        }
    }
    return 0;
}