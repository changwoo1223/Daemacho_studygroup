#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int X, N, sum = 0;
	scanf("%d\n %d", &X, &N);
	for (int i = 1; i <= N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (sum == X) {
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}