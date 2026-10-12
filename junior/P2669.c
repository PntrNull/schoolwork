/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-09-18 22:12:13
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-09-18 22:15:33
 * @FilePath: /schoolwork/junior/P2669.c
 * @Description: https://www.luogu.com.cn/problem/P2669
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>


int main()
{
    int k = 0;
    scanf("%d", &k);
    int lastDay = k;
    int getCoinNow = 1;
    int getCoinSum = 0;
    while (lastDay >= getCoinNow)
    {
        getCoinSum += getCoinNow * getCoinNow;
        lastDay -= getCoinNow;
        getCoinNow++;
    }
    getCoinSum += lastDay * getCoinNow;
    printf("%d\n", getCoinSum);
    return 0;
}