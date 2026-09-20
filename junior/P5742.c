/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-20 22:21:39
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-20 22:30:23
 * @FilePath: /schoolwork/junior/P5742.c
 * @Description: https://www.luogu.com.cn/problem/P5742
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

// 虽然这一题是要用 struct 进行解决,
// 但是考虑到 C 并不能在 struct 中定义函数 (或者说不能直接定义),
// 所以干脆就不用 struct 了.
//  (C++ 里的 struct 就是 class 换皮吧...)

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int tmp = 0, a = 0, b = 0;
        scanf("%d %d %d", &tmp, &a, &b);
        int sum = a * 7 + b * 3;
        if (a + b > 140 && sum >= 800)
            printf("Excellent\n");
        else
            printf("Not excellent\n");
    }
    return 0;
}