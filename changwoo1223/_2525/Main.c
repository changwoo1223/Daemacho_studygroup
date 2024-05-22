#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int H, M, T, n;
	scanf("%d %d\n%d", &H, &M, &T);
	M = M + T;
	n = M / 60;
	if (M >= 60) {
		M = M - (n*60);
		H = H + n;
	}
	if (H >= 24) {
		H = H - 24;
	}
	printf("%d %d", H, M);
	return 0;
}