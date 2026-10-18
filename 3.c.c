#include <stdio.h>

int main() {
    int N, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
