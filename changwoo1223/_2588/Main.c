﻿#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", A * ((B % 100) % 10));
    printf("%d\n", A * ((B % 100) / 10));
    printf("%d\n", A * ((B / 100)));
    printf("%d\n", A * B);

    return 0;
}