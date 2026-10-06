/*
Q.3 Write a C program to read N elements into an array and find:
(i) Largest element of the array.
(ii) Smallest element of the array.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d", smallest);

    return 0;
}