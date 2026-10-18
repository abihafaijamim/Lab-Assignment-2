#include <stdio.h>

int main() {
    int N, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 2; i <= N; i = i + 2) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
