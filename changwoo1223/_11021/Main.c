﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T, A, B, x = 1;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", x, A + B);
        x++;
    }
    return 0;
}