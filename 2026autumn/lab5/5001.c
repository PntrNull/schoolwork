/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-12 18:34:16
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-12 18:36:52
 * @FilePath: /schoolwork/2026autumn/lab5/5001.c
 * @Description:
 * hello, world
 * LICENSE: Unlicense
 */

/*
 * n(n≤100)名同学参加歌唱比赛，并接受 m(m≤20)名评委的评分，评分范围是 0到 10分。
 * 这名同学的得分就是这些评委给分中去掉一个最高分，去掉一个最低分，剩下 m-2 个评分的平均数。
 * 请问得分最高的同学分数是多少？评分保留 2 位小数。
 */

#include <stdio.h>

typedef struct student
{
    int score[20];
    int m;
    int max;
    int min;
    int sum;
    double avg;
} student;

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int maxInt(int a, int b)
{
    return (a > b) ? a : b;
}

double maxDouble(double a, double b)
{
    return (a > b) ? a : b;
}

int findMinScore(student stu)
{
    int minScore = 0x7fff;
    for (int i = 0; i < stu.m; ++i)
    {
        minScore = min(minScore, stu.score[i]);
    }
    return minScore;
}

int findMaxScore(student stu)
{
    int maxScore = -1;
    for (int i = 0; i < stu.m; ++i)
    {
        maxScore = maxInt(maxScore, stu.score[i]);
    }
    return maxScore;
}

int calculateSumScore(student stu)
{
    int sumScore = 0;
    for (int i = 0; i < stu.m; ++i)
    {
        sumScore += stu.score[i];
    }
    return sumScore;
}

double calculateAvgScore(student stu)
{
    return (stu.sum - stu.max - stu.min) / (double)(stu.m - 2);
}

double findBest(student stu[100], int n)
{
    double bestScore = -1;
    for (int i = 0; i < n; ++i)
    {
        bestScore = maxDouble(bestScore, stu[i].avg);
    }
    return bestScore;
}

int main()
{
    int n = 0;
    int m = 0;
    student stu[100] = {};

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &stu[i].score[j]);
        }
        stu[i].m = m;
        stu[i].min = findMinScore(stu[i]);
        stu[i].max = findMaxScore(stu[i]);
        stu[i].sum = calculateSumScore(stu[i]);
        stu[i].avg = calculateAvgScore(stu[i]);
        // printf("%d %d %d %d %lf\n",
        //        stu[i].m,
        //        stu[i].min,
        //        stu[i].max,
        //        stu[i].sum,
        //        stu[i].avg);
    }
    printf("%.2lf", findBest(stu, n));
    return 0;
}