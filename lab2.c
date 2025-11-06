#include <stdio.h>

void numberAnalysis(int n)
{

    // 1. Multiplication table with for loop
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // 2. Sum with while loop
    if (n > 0)
    {
        int sum = 0;
        int i = 1;
        while (i <= n)
        {
            sum += i;
            i++;
        }
        printf("Sum from 1 to %d = %d\n", n, sum);
    }
    else if (n == 0)
    {
        printf("Sum from 1 to 0 = 0\n");
    }
    else
    { // n < 0
        printf("Sum not applicable for negative numbers. \n");
    }

    // 3. Switch-case for Negative, Zero, Positive
    int key;
    if (n > 0)
    {
        key = 1;
    }
    else if (n < 0)
    {
        key = -1;
    }
    else
    { // n == 0
        key = 0;
    }

    switch (key)
    {
    case -1:
        printf("The number is Negative. \n");
        break;
    case 0:
        printf("The number is Zero. \n");
        break;
    case 1:
        printf("The number is Positive. \n");
        break;
    }
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    numberAnalysis(n);
    return 0;
}
