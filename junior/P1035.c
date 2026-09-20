/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-18 22:09:15
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-18 22:11:25
 * @FilePath: /schoolwork/junior/P1035.c
 * @Description: https://www.luogu.com.cn/problem/P1035
 * Hello, World!
 * LICENSE: Unlicense. Free to use in anywhere.
 */

#include <stdio.h>

int main()
{
    int k = 0;
    scanf("%d", &k);
    double Sn = 0;
    int cnt = 0;
    while (Sn <= k) {
        cnt++;
        Sn += 1.0 / cnt;
    }
    printf("%d\n", cnt);
    return 0;
}