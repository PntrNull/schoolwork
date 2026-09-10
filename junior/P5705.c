#include <stdio.h>

int main()
{
    int first = 0, second = 0;
    scanf("%d.%d", &first, &second);
    first = (first % 10) * 100 + (first / 10 % 10) * 10 + (first / 100);
    printf("%d.%d", second, first);
    return 0;
}