/*
Q.9 Write a C program using an array of structures to store the roll
number, name, and marks of N students. Search and display student
record by roll number.
*/

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, searchRoll;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == searchRoll)
        {
            printf("\n===== STUDENT RECORD =====\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student record not found.");
    }

    return 0;
}