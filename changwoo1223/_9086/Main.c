#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	char sentence[1001];
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%s", sentence);
		printf("%c%c\n", sentence[0], sentence[strlen(sentence) - 1]);
	}
	return 0;
}