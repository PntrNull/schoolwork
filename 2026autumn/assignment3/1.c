/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-02 00:58:39
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-02 23:12:37
 * @FilePath: /schoolwork/2026autumn/assignment3/1.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

double avg(int n, int *arr)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return (double)sum / (double)n;
}

int check(int n, int *arr)
{
    double average = avg(n, arr);
    int n = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > average)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    int score[41] = {0};
    int n = 0;
    int input = 0;
    while (input >= 0)
    {
        scanf("%d", input);
        score[n] = input;
        n++;
    }
    printf("%d", check(n, score));
    return 0;
}