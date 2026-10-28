#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 5;

    if (a < b)
    {
        if (a < c)
        {
            printf("A is smallest\n");
        }
        else
        {
            printf("C is smallest\n");
        }
    }
    else
    {
        if (b < c)
        {
            printf("B is smallest\n");
        }
        else
        {
            printf("C is smallest\n");
        }
    }

    return 0;
}

