#include <stdio.h>

int main()
{
    int num = 12345;
    int rev = 0;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("Reverse = %d", rev);

    return 0;
}

