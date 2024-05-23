#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    double A, B;
    scanf("%lf %lf", &A, &B);
    printf("%.10lf", A / B);

    return 0;
}