/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:37:56
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:57:32
 * @FilePath: /schoolwork/2026autumn/lab4/4001.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

typedef struct bigInt
{
    int num[51];
    int n;
} bigInt;

bigInt Add(bigInt a, bigInt b)
{
    bigInt c;
    for (int i = 0; i < 51; ++i)
    {
        c.num[i] = 0;
    }
    c.n = max(a.n, b.n);
    for (int i = 0; i < c.n; ++i)
    {
        c.num[i] += a.num[i] + b.num[i];
        if (c.num[i] >= 10)
        {
            c.num[i] -= 10;
            c.num[i + 1]++;
            if (i == c.n - 1 && c.num[i + 1] != 0)
            {
                c.n++;
            }
        }
    }
    return c;
}

bigInt Scan()
{
    char str[51];
    scanf("%s", &str);
    bigInt result;
    for (int i = 0; i < 51; ++i)
    {
        result.num[i] = 0;
    }
    result.n = strlen(str);
    for (int i = 0; i < strlen(str); ++i)
    {
        result.num[strlen(str) - i - 1] = (int)str[i] - (int)'0';
    }
    return result;
}

void Print(bigInt a)
{
    for (int i = a.n - 1; i >= 0; --i)
    {
        printf("%d", a.num[i]);
    }
}

int main()
{
    bigInt a, b;
    a = Scan();
    b = Scan();
    Print(Add(a, b));
}