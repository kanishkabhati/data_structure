// Write a C program that uses a stack to reverse a given string
// and display the reversed string.

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Push characters into stack
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("Reversed string: ");

    // Pop characters
    while (top != -1)
    {
        printf("%c", pop());
    }

    printf("\n");

    return 0;
}