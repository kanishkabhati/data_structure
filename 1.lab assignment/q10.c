/*
Q.8 Write a C program to search for a given element in a two-dimensional
array. Display the row and column position of every occurrence of the
element and count its total occurrences.
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int m, n, i, j;
    int search, count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("\nOccurrences found at:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == search)
            {
                printf("Row = %d, Column = %d\n", i + 1, j + 1);
                count++;
            }
        }
    }

    printf("\nTotal occurrences = %d", count);

    if (count == 0)
    {
        printf("\nElement not found.");
    }

    return 0;
}