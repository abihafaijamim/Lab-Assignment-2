#include <stdio.h>

int main() {
    int N, i, prime = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    if(N < 2) {
        prime = 0;
    } else {
        for(i = 2; i * i <= N; i++) {
            if(N % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if(prime == 1) {
        printf("Prime Number");
    } else {
        printf("Not a Prime Number");
    }

    return 0;
}
