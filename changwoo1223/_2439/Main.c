﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i < N+1; i++) {
        for (int j = N - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = i; k > 0; k--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}