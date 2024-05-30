#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char English[101];
	int count = 0;
	scanf("%s", English);
	for (int i = 0; i < 101; i++) {
		if (English[i] == '\0') {
			break;
			count--;
		}
		else {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}