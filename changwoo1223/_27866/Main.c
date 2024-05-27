#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char S[1000];
	int i;
	gets(S);
	scanf_s("%d", &i);
	printf("%c", S[i-1]);
	return 0;
}