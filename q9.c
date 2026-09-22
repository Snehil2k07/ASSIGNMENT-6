#include <stdio.h>

int main()
{
    int choice, n, temp, digit, reverse, sum, count;
    int i, isPrime, power, armstrongSum;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                /* Check Palindrome */
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                reverse = 0;

                while (temp > 0)
                {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                }

                if (n == reverse)
                    printf("%d is a Palindrome number.\n", n);
                else
                    printf("%d is not a Palindrome number.\n", n);

                break;

            case 2:
                /* Check Armstrong Number */
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                count = 0;

                /* Count number of digits */
                while (temp > 0)
                {
                    count++;
                    temp = temp / 10;
                }

                temp = n;
                armstrongSum = 0;

                /* Calculate sum of digits raised to digit count */
                while (temp > 0)
                {
                    digit = temp % 10;
                    power = 1;

                    for (i = 1; i <= count; i++)
                    {
                        power = power * digit;
                    }

                    armstrongSum = armstrongSum + power;
                    temp = temp / 10;
                }

                if (armstrongSum == n)
                    printf("%d is an Armstrong number.\n", n);
                else
                    printf("%d is not an Armstrong number.\n", n);

                break;

            case 3:
                /* Check Prime Number */
                printf("Enter an integer: ");
                scanf("%d", &n);

                isPrime = 1;

                if (n <= 1)
                {
                    isPrime = 0;
                }
                else
                {
                    for (i = 2; i <= n / 2; i++)
                    {
                        if (n % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("%d is a Prime number.\n", n);
                else
                    printf("%d is not a Prime number.\n", n);

                break;

            case 4:
                /* Find Sum of Digits */
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while (temp > 0)
                {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                /* Count Number of Digits */
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                count = 0;

                if (temp == 0)
                {
                    count = 1;
                }
                else
                {
                    while (temp > 0)
                    {
                        count++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a choice between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}