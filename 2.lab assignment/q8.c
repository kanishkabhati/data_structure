// Write a C program to find the sum of Fibonacci series
// using recursion.

#include <stdio.h>

// Recursive Fibonacci function
int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
        sum = sum + fibonacci(i);
    }

    printf("\nSum of Fibonacci series = %d\n", sum);

    return 0;
}