/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:33:58
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:34:12
 * @FilePath: /schoolwork/2026autumn/lab1/1001.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

int main()
{
    int result = 0;
    int inputInt = 0;
    char inputChar = '\0';
    char errorChar = (char)0;

    scanf("%d", &result);
    scanf("%c", &inputChar);
    while (inputChar != '=')
    {
        scanf("%d", &inputInt);
        switch (inputChar)
        {
        case '+':
            result += inputInt;
            break;
        case '-':
            result -= inputInt;
            break;
        case '*':
            result *= inputInt;
            break;
        case '/':
            result /= inputInt;
            break;
        default:
            errorChar = inputChar;
        }
        if (errorChar)
        {
            break;
        }
        scanf("%c", &inputChar);
    }
    if (errorChar)
    {
        printf("错误的运算符:%c\n", errorChar);
    }
    else
    {
        printf("%d\n", result);
    }
    return 0;
}
