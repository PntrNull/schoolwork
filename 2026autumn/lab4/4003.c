/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 19:34:41
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 19:47:28
 * @FilePath: /schoolwork/2026autumn/lab4/4003.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAXLENGTH = 100001;

char *encrypt(char *str)
{
    char *encrypted;
    encrypted = malloc(MAXLENGTH * sizeof(char));
    for (int i = 0; i < strlen(str); ++i)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'z')
            {
                encrypted[i] = 'a';
            }
            else if (str[i] == 'Z')
            {
                encrypted[i] = 'A';
            }
            else
            {
                encrypted[i] = str[i] + 1;
            }
        } else {
            encrypted[i] = str[i];
        }
    }
    return encrypted;
}

int main()
{
    char *input = "";
    long unsigned int length = 0;
    getline(&input, &length, stdin);
    printf("%s", encrypt(input));
    return 0;
}