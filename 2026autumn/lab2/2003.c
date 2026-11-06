/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:35:32
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:37:26
 * @FilePath: /schoolwork/2026autumn/lab2/2003.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{ 
    bool notprime[100000] = {false};
    int c = 0, d = 0;
    scanf("%d,%d", &c, &d);
    for (int i = 2; i <= sqrt((double)d); ++i) {
        if (notprime[i]) continue;
        for (int j = i * 2; j <= d; j += i) {
            notprime[j] = true;
        }
    }
    int sum = 0;
    for (int i = c; i < d - 1; ++i) {
        if ((!notprime[i]) && (!notprime[i + 2])) {
            printf("(%d,%d)", i, i + 2);
            sum++;
        }
    }
    printf("\n%d\n", sum);
    return 0;
}