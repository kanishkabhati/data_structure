// Write a C program that uses a stack to determine whether
// a given string is a palindrome or not.

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
    int i, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters into stack
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    // Compare string with popped characters
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != pop())
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}