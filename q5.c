#include <stdio.h>

int main() {
    int lower, upper, i, j;
    int count = 0, isPrime;

    scanf("%d %d", &lower, &upper);

    for (i = lower; i <= upper; i++) {

        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers: %d", count);

    return 0;
}