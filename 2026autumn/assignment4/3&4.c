#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int year;
    int month;
    int day;
} date;

typedef struct Career
{
    char institude[128];
    char title[128];
    char position[128];
} career;

typedef struct Person
{
    char name[128];
    int gender; // 0 for female and 1 for male
    date birth;
    career career_status;
} person;

int main()
{
    person persons[5];
    for (int i = 0; i < 5; ++i)
    {
        char genderTemp[128];
        scanf("%s %s %d/%d/%d %s %s %s",
              persons[i].name,
              genderTemp,
              &persons[i].birth.year,
              &persons[i].birth.month,
              &persons[i].birth.day,
              persons[i].career_status.institude,
              persons[i].career_status.title,
              persons[i].career_status.position);
        if (strcmp(genderTemp, "Male") == 0)
        {
            persons[i].gender = 1;
        }
        else
        {
            persons[i].gender = 0;
        }
    }
    int oldest = 0;
    for (int i = 1; i < 5; ++i)
    {
        if (persons[i].birth.year < persons[oldest].birth.year)
        {
            oldest = i;
        }
        else if (persons[i].birth.year == persons[oldest].birth.year)
        {
            if (persons[i].birth.month < persons[oldest].birth.month)
            {
                oldest = i;
            }
            else if (persons[i].birth.month == persons[oldest].birth.month)
            {
                if (persons[i].birth.day < persons[oldest].birth.day)
                {
                    oldest = i;
                }
            }
        }
    }
    printf("%s", persons[oldest].name);
    return 0;
}