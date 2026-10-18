#include <stdio.h>

int main() {
    int N, i;
    printf("Enter N: ");
    scanf("%d", &N);

    for(i = N; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
