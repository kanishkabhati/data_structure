// Write a C program to find the GCD (Greatest Common Divisor)
// of two numbers using recursion.

#include <stdio.h>

// Recursive GCD function
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    return 0;
}