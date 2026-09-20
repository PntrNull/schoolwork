/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 21:02:59
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 21:27:10
 * @FilePath: /schoolwork/junior/P1047.c
 * @Description: https://www.luogu.com.cn/problem/P1047
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int l = 0, m = 0;
    scanf("%d %d", &l, &m);
    int tree_removed[10001] = {};
    for (int i = 0; i < m; ++i)
    {
        int start = 0, end = 0;
        scanf("%d %d", &start, &end);
        for (int j = start; j <= end; ++j)
        {
            tree_removed[j] = 1;
        }
    }
    int tree_sum = 0;
    for (int i = 0; i <= l; ++i)
    {
        if (tree_removed[i] == 0)
        {
            tree_sum++;
        }
    }
    printf("%d\n", tree_sum);
    return 0;
}