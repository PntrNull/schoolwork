/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-06 18:34:23
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-06 18:35:00
 * @FilePath: /schoolwork/2026autumn/lab1/1002.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>

/**
 * @brief 检查该年是否为闰年
 * @param y 年份
 * @return 返回结果, 1 表示闰年, 0 表示非闰年
 * @author PntrNull
 */
int checkRun(int y)
{
    if (y % 100 == 0)
    {
        if (y % 400 == 0)
        {
            return 1;
        }
    }
    else if (y % 4 == 0)
    {
        return 1;
    }
    return 0;
}

/**
 * @brief 检查日期是否合法
 * @details 同时也用作检查是否到达月底
 * @param y 年份
 * @param m 月份
 * @param d 日期
 * @return 返回检验结果, 1 表示合法, 2 表示非法
 * @author PntrNull
 */
int checkValid(int y, int m, int d)
{
    if (y < 1990)
    {
        return 1;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d >= 1 && d <= 31)
        {
            return 1;
        }
    }
    else if (m == 2)
    {
        if (checkRun(y))
        {
            if (d >= 1 && d <= 29)
            {
                return 1;
            }
        }
        else
        {
            if (d >= 1 && d <= 28)
            {
                return 1;
            }
        }
    }
    else
    {
        if (d >= 1 && d <= 30)
        {
            return 1;
        }
    }
    return 0;
}

/**
 * @brief 计算 yyyy/mm/dd 时状态
 * @param y 年份
 * @param m 月份
 * @param d 日期
 * @return 返回状态, 1 表示打渔, 0 表示晒网
 * @author PntrNull
 */
int calcState(int y, int m, int d)
{
    int nowy = 1990, nowm = 1, nowd = 1;
    int state = 0; // 0~2 表示打渔, 3~4 表示晒网
    while (y != nowy || m != nowm || d != nowd)
    {
        nowd++;
        state++;
        state %= 5;
        if (!checkValid(nowy, nowm, nowd))
        {
            if (nowm == 12)
            {
                nowy++;
                nowm = 1;
                nowd = 1;
            }
            else
            {
                nowm++;
                nowd = 1;
            }
        }
    }
    if (state >= 0 && state <= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return -1;
}

int main()
{
    int y = 0, m = 0, d = 0;
    scanf("%4d-%2d-%2d", &y, &m, &d);
    if (checkValid(y, m, d))
    {
        int state = calcState(y, m, d);
        if (state)
        {
            printf("working");
        }
        else
        {
            printf("rest");
        }
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}