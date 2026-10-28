#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 145;

    if (a > b)
    {
        if (a > c)
        {
            printf("A is largest\n");
        }
        else
        {
            printf("C is largest\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is largest\n");
        }
        else
        {
            printf("C is largest\n");
        }
    }

    return 0;
}

