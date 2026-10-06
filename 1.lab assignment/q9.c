/*
Q.7 Write a C program to represent the attendance of N students for
M class days using a 2-D array, where 1 represents Present and 0
represents Absent. The array will contain roll no. and day wise
attendance. Display the attendance of each student and calculate
the total number of days present.
*/

#include <stdio.h>

int main()
{
    int attendance[100][100];
    int n, m;
    int i, j, total;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of class days: ");
    scanf("%d", &m);

    printf("\nEnter attendance (1 = Present, 0 = Absent):\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        for (j = 0; j < m; j++)
        {
            printf("Day %d: ", j + 1);
            scanf("%d", &attendance[i][j]);
        }
    }

    printf("\n===== ATTENDANCE REPORT =====\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        printf("\nRoll No. %d: ", i + 1);

        for (j = 0; j < m; j++)
        {
            printf("%d ", attendance[i][j]);

            if (attendance[i][j] == 1)
            {
                total++;
            }
        }

        printf("\nTotal days present = %d", total);
    }

    return 0;
}