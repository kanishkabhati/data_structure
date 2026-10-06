/*
Q.6 Write a menu driven C program to perform following operations
on a two-dimensional m x n array:

(i) Insert elements in the array.
(ii) Display the array.
(iii) Display sum of all elements in the array.
(iv) Display average of all the elements in the array.
(v) Find and display the smallest element in the array.
(vi) Find and display the largest element in the array.
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int m, n, i, j;
    int choice;
    int sum, smallest, largest;
    float average;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Insert elements\n");
        printf("2. Display array\n");
        printf("3. Sum of elements\n");
        printf("4. Average of elements\n");
        printf("5. Smallest element\n");
        printf("6. Largest element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter array elements:\n");

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("\nArray elements:\n");

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        printf("%d\t", arr[i][j]);
                    }

                    printf("\n");
                }
                break;

            case 3:
                sum = 0;

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        sum = sum + arr[i][j];
                    }
                }

                printf("Sum = %d", sum);
                break;

            case 4:
                sum = 0;

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        sum = sum + arr[i][j];
                    }
                }

                average = (float)sum / (m * n);

                printf("Average = %.2f", average);
                break;

            case 5:
                smallest = arr[0][0];

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        if (arr[i][j] < smallest)
                        {
                            smallest = arr[i][j];
                        }
                    }
                }

                printf("Smallest element = %d", smallest);
                break;

            case 6:
                largest = arr[0][0];

                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        if (arr[i][j] > largest)
                        {
                            largest = arr[i][j];
                        }
                    }
                }

                printf("Largest element = %d", largest);
                break;

            case 7:
                printf("Program ended.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 7);

    return 0;
}