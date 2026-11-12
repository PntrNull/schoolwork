/*
 * @Author: PntrNull PntrNull@outlook.com
 * @Date: 2026-11-12 18:36:14
 * @LastEditors: PntrNull PntrNull@outlook.com
 * @LastEditTime: 2026-11-12 18:36:43
 * @FilePath: /schoolwork/2026autumn/lab5/5002.c
 * @Description: 
 * hello, world
 * LICENSE: Unlicense
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student
{
    char name[20];
    char id[20];
    int gender; // 0 for female and 1 for male
} student;

bool compareInfo(student stu, char info[20])
{
    if ((strcmp(stu.name, info) == 0) || (strcmp(stu.id, info) == 0))
    {
        return true;
    }
    return false;
}

int searchStudent(student stu[1000], int n, char info[20])
{
    for (int i = 0; i < n; ++i)
    {
        if (compareInfo(stu[i], info) == true)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    student stu[1000];
    for (int i = 0; i < n; ++i)
    {
        char genderTemp = '\0';
        scanf("%s %s %c", stu[i].name, stu[i].id, &genderTemp);
        // printf("%s %s %c\n", stu[i].name, stu[i].id, genderTemp);
        switch (genderTemp)
        {
        case 'M':
            stu[i].gender = 1;
            break;
        case 'F':
            stu[i].gender = 0;
            break;
        default:
            break;
        }
    }
    int m = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i)
    {
        if (i != 0)
        {
            printf("\n");
        }
        char stu1[20], stu2[20];
        scanf("%s %s", stu1, stu2);
        // printf("%d %d\n", searchStudent(stu, n, stu1), searchStudent(stu, n, stu2));
        if ((stu[searchStudent(stu, n, stu1)].gender ^ stu[searchStudent(stu, n, stu2)].gender) == true)
        {
            printf("Y");
        }
        else
        {
            printf("N");
        }
    }
    return 0;
}