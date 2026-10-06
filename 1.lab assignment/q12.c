/*
Q.10 Write a C program using an array of structures to store book ID,
title, author, and price of N books. Display all books, search for a
book by ID, and display the most expensive book.
*/

#include <stdio.h>

struct Book
{
    int id;
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct Book b[100];
    int n, i, searchID;
    int found = 0;
    int expensive;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    /* Display all books */

    printf("\n========== ALL BOOKS ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", b[i].id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);
        printf("Price   : %.2f\n", b[i].price);
    }

    /* Search book by ID */

    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < n; i++)
    {
        if (b[i].id == searchID)
        {
            printf("\n========== BOOK FOUND ==========\n");
            printf("Book ID : %d\n", b[i].id);
            printf("Title   : %s\n", b[i].title);
            printf("Author  : %s\n", b[i].author);
            printf("Price   : %.2f\n", b[i].price);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Book not found.");
    }

    /* Find most expensive book */

    expensive = 0;

    for (i = 1; i < n; i++)
    {
        if (b[i].price > b[expensive].price)
        {
            expensive = i;
        }
    }

    printf("\n========== MOST EXPENSIVE BOOK ==========\n");
    printf("Book ID : %d\n", b[expensive].id);
    printf("Title   : %s\n", b[expensive].title);
    printf("Author  : %s\n", b[expensive].author);
    printf("Price   : %.2f\n", b[expensive].price);

    return 0;
}