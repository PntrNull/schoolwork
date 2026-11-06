/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-02 23:12:05
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-02 23:18:10
 * @FilePath: /schoolwork/2026autumn/assignment3/3.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

const int N = 10;

// TEMPLATE BEGIN

void Transpose(int a[][N], int n);

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// TEMPLATE END

int main()
{
    int n;
    scanf("%d", &n);
    int a[N][N];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    Transpose(a, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void Transpose(int a[][N], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            Swap(&a[i][j], &a[j][i]);
        }
    }
}