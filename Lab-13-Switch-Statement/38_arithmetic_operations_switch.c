
#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 5;
    char op;

    op = '+';
    switch (op)
    {
        case '+':
            printf("Addition = %d\n", num1 + num2);
            break;
    }

    op = '-';
    switch (op)
    {
        case '-':
            printf("Subtraction = %d\n", num1 - num2);
            break;
    }

    op = '*';
    switch (op)
    {
        case '*':
            printf("Multiplication = %d\n", num1 * num2);
            break;
    }

    op = '/';
    switch (op)
    {
        case '/':
            if (num2 != 0)
                printf("Division = %d\n", num1 / num2);
            else
                printf("Division by zero is not allowed\n");
            break;
    }

    return 0;
}
