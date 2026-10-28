#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int larger;

    larger = (a > b) ? a : b;

    printf("Larger number = %d\n", larger);

    return 0;
}

