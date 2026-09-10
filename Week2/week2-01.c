#include <stdio.h>
#include <math.h>

int main()
{
    int input = 0;
    printf("Input x:\n");
    scanf("%d", &input);
    input = abs(input);
    int h = input / 100; // means hundred
    int t = input % 100 / 10; // means ten
    int o = input % 10; // means one
    int output = h * 1 + t * 10 + o * 100;
    printf("y=%d\n", output);
    return 0;
}