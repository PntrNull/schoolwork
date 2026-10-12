/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-10-12 23:39:29
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-10-12 23:42:05
 * @FilePath: /schoolwork/2026autumn/assignment2/3.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int userPow(int x, int y) // x ^ y
{
    if (y == 0) {
        return x;
    }
    return x * userPow(x, y - 1);
}


int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%d\n", userPow(n, k));
    return 0;
}