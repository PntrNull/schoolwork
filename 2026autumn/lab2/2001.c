/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:35:24
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:36:47
 * @FilePath: /schoolwork/2026autumn/lab2/2001.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

void hanoi(char from, char to, char mid, int left) {
    if (left == 1) {
        printf("Move disk from %c to %c\n", from, to);
        return;
    }
    hanoi(from, mid, to, left - 1);
    printf("Move disk from %c to %c\n", from, to);
    hanoi(mid, to, from, left - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    hanoi('A', 'C', 'B', n);
    return 0;
}