/*
Q.5 Write a C program to read the elements of a m x n Array and
display the array elements in proper row and column format.
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int m, n, i, j;

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

    printf("\nArray in row and column format:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}