#include <stdio.h>

int main()
{
    int n, remainder;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    printf("Binary = ");

    while (n > 0)
    {
        remainder = n % 2;
        printf("%d", remainder);
        n = n / 2;
    }

    return 0;
}