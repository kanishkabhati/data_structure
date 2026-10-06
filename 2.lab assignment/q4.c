// Write a C program to evaluate a postfix arithmetic expression
// containing single-digit operands and standard arithmetic operators
// using a stack.

#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char postfix[MAX];
    int i, a, b, result;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        // If operand
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }

        // If operator
        else
        {
            b = pop();
            a = pop();

            switch (postfix[i])
            {
            case '+':
                result = a + b;
                break;

            case '-':
                result = a - b;
                break;

            case '*':
                result = a * b;
                break;

            case '/':
                result = a / b;
                break;

            case '%':
                result = a % b;
                break;

            case '^':
                result = pow(a, b);
                break;

            default:
                printf("Invalid operator!\n");
                return 0;
            }

            push(result);
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}