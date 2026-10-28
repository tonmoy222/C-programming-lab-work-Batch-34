#include <stdio.h>

int main()
{
    int number = -5;

    if (number > 0)
    {
        printf("Positive number\n");
    }
    else if (number < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}
