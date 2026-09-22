#include <stdio.h>

int main()
{
    int n, i;
    double x, sum = 0.0;
    double power = 1.0, fact = 1.0, term;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        power = power * x;   // calculates x^i
        fact = fact * i;     // calculates i!

        term = power / fact;

        if (i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }

    printf("Sum of series = %.4lf\n", sum);

    return 0;
}