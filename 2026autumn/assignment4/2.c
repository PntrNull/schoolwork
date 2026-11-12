/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-09 23:52:01
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-10 00:21:24
 * @FilePath: /schoolwork/2026autumn/assignment4/2.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    input = malloc(sizeof(char) * 10);
    scanf("%s", input);
    int date = -1;
    if (strcmp(input, "Sunday")) {
        date = 0;
    }
    if (strcmp(input, "Monday")) {
        date = 1;
    }
    if (strcmp(input, "Tuesday")) {
        date = 2;
    }
    if (strcmp(input, "Wednesday")) {
        date = 3;
    }
    if (strcmp(input, "Thursday")) {
        date = 4;
    }
    if (strcmp(input, "Friday")) {
        date = 5;
    }
    if (strcmp(input, "Saturday")) {
        date = 6;
    }
    printf("%d", date);
    return 0;
}