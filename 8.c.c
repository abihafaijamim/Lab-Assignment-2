#include <stdio.h>

int main() {
    int N, digit, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    if(N < 0)
        N = -N;

    while(N > 0) {
        digit = N % 10;
        sum = sum + digit;
        N = N / 10;
    }

    printf("Sum = %d", sum);

    return 0;
}
