/*
Q.1 Write a C program to implement an Array of size 10 and perform
following operations:
(i) Insert elements in the array.
(ii) Display elements of the array.
(iii) Display number of elements present in the array.
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int n, i;

    printf("Enter number of elements (maximum 10): ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
    {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of the array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nNumber of elements present = %d", n);

    return 0;
}