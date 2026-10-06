// Write a C program that uses a stack to determine whether
// the parentheses in a given arithmetic expression are balanced.

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

int isMatching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main()
{
    char expression[MAX];
    int i, balanced = 1;

    printf("Enter an expression: ");
    scanf("%s", expression);

    for (i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '(' ||
            expression[i] == '{' ||
            expression[i] == '[')
        {
            push(expression[i]);
        }
        else if (expression[i] == ')' ||
                 expression[i] == '}' ||
                 expression[i] == ']')
        {
            if (top == -1 || !isMatching(pop(), expression[i]))
            {
                balanced = 0;
                break;
            }
        }
    }

    if (top != -1)
        balanced = 0;

    if (balanced)
        printf("Expression is Balanced.\n");
    else
        printf("Expression is Not Balanced.\n");

    return 0;
}