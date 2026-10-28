#include <stdio.h>

int main()
{
    int year = 2026;

    if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}
