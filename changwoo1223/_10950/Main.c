#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int count, num1, num2;
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
	return 0;
}