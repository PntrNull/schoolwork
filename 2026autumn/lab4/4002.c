/*
 *  @Author: PntrNull PntrNull@outlook.com
 *  @Date: 2026-11-06 19:00:21
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 20:07:47
 * @FilePath: /schoolwork/2026autumn/lab4/4002.c
 *  @Description:
 *  hello, world
 *  LICENSE: Unlicense
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char *initNotTokens()
{
    char *notTokens;
    notTokens = malloc(128 * sizeof(char));
    for (int i = 1; i < 128; ++i)
    {
        if (!((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')))
        {
            char tmp[2] = {(char)i, '\0'};
            strcat(notTokens, tmp);
        }
    }
    return notTokens;
}

int getTokensCount(char *str, char *notTokens)
{
    char *tokens[1001];
    for (int i = 0; i < 1000; ++i)
    {
        tokens[i] = malloc(1001 * sizeof(char));
    }
    int tokensCount = 0;
    char *newToken = strtok(str, notTokens);
    while (newToken != NULL)
    {
        bool existed = false;
        for (int i = 0; i < tokensCount; ++i)
        {
            if (!strcmp(newToken, tokens[i]))
            {
                existed = true;
                break;
            }
        }
        if (!existed)
        {
            tokens[tokensCount] = newToken;
            tokensCount++;
        }
        newToken = strtok(NULL, notTokens);
    }
    return tokensCount - 1;
}

int main()
{
    char *str = NULL;
    size_t n;
    getline(&str, &n, stdin);
    printf("%d", getTokensCount(str, initNotTokens()));
    return 0;
}