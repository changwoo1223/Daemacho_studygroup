﻿#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int H, M;
	scanf("%d %d", &H, &M);
	if (H >= 1) {
		if (M >= 45) {
			M = M - 45;
		}
		else {
			H--;
			M = M + 15;
		}
	}
	else {
		if (M >= 45) {
			M = M - 45;
		}
		else {
			H = 23;
			M = M + 15;
		}
	}
	printf("%d %d", H, M);
	return 0;
}