#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (double)(a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", S);
    return 0;
}