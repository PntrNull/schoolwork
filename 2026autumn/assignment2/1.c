/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-10-12 23:27:25
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-10-12 23:33:49
 * @FilePath: /schoolwork/2026autumn/assignment2/1.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int maxOfInteger(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", maxOfInteger(a, b));
    return 0;
}