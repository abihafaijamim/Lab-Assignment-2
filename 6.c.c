#include <stdio.h>

int main() {
    int N, count = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    if(N < 0)
        N = -N;

    if(N == 0) {
        count = 1;
    } else {
        for(; N > 0; N = N / 10) {
            count++;
        }
    }

    printf("Digits = %d", count);

    return 0;
}
