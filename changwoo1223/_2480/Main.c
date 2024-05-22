#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num1, num2, num3, highNum, reward = 0;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 == num2 && num2 == num3) {
		reward = 10000 + (num1 * 1000);
	}
	else if (num1 == num2 || num2 == num3 ){
		reward = 1000 + (num2 * 100);
	}
	else if (num1 == num3) {
		reward = 1000 + (num1 * 100);
	}
	else {
		if (num1 >= num2 && num1 >= num3) {
			highNum = num1;
		}
		else if (num2 >= num1 && num2 >= num3) {
			highNum = num2;
		}
		else if (num3 >= num1 && num3 >= num2) {
			highNum = num3;
		}
		reward = highNum * 100;
	}
	printf("%d", reward);
	return 0;
}