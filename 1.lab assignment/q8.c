/*
Q.6 Write a menu driven C program to search and display a given
element in a one-dimensional array using the Linear Search technique.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, search, choice;
    int found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Display array\n");
        printf("2. Linear Search\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Array elements:\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &search);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == search)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Element not found.");
                }
                break;

            case 3:
                printf("Program ended.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 3);

    return 0;
}