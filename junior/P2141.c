/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 21:28:05
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 21:34:07
 * @FilePath: /schoolwork/junior/P2141.c
 * @Description: https://www.luogu.com.cn/problem/P2141
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int inp[101] = {};
    int check[20002] = {};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &inp[i]);
        check[inp[i]] = 1;
    }
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int add_res = inp[i] + inp[j];
            if (check[add_res] == 1)
            {
                res++;
                check[add_res] = 0;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}