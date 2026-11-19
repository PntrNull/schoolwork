/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-12 19:03:18
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-12 19:07:50
 * @FilePath: /schoolwork/2026autumn/assignment5/4.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[6] = {9, 3, 7, 1, 6, 2};
    int n = 6;
    for (int i = 0; i < n; ++i)
    {
        bool alreadySorted = true;
        for (int j = 0; j < (n - i - 1); ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                alreadySorted = false;
            }
        }
        if (alreadySorted)
        {
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}