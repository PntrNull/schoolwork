/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-12 19:10:38
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-19 00:16:51
 * @FilePath: /source/schoolwork/2026autumn/assignment5/coding1.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Stack
{
    char stack[10001];
    char *ptr;
} stack;

void init(stack *stk)
{
    for (int i = 0; i < 10001; ++i)
    {
        stk->stack[i] = '\0';
    }
    stk->ptr = stk->stack - 1;
}

int is_empty(stack *stk)
{
    return stk->ptr == stk->stack - 1;
}

int push(stack *stk, char c)
{
    if (stk->ptr - stk->stack >= 10000)
        return 0;
    *++stk->ptr = c;
    return 1;
}

int pop(stack *stk, char *out)
{
    if (is_empty(stk))
        return 0;
    *out = *stk->ptr--;
    return 1;
}

char query(stack *stk)
{
    return *stk->ptr;
}

int main(void)
{
    char s[10001];
    fgets(s, 10000, stdin);
    s[strcspn(s, "\r\n")] = '\0';

    stack stk;
    init(&stk);

    size_t n = strlen(s);
    for (size_t i = 0; i < n; ++i)
        if (!push(&stk, s[i]))
            break;

    char c;
    while (pop(&stk, &c))
        putchar(c);
    putchar('\n');

    return 0;
}