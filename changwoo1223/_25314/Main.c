#include <stdio.h>

int main() {
    int N, output;

    scanf("%d", &N);
    output = N / 4;
    for (int i = 1; i <= output; i++) {
        printf("long ");
    }
    printf("int");
    return 0;
}