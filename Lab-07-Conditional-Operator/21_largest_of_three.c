#include <stdio.h>

int main()
{
    int a = 80;
    int b = 25;
    int c = 15;
    int largest;

    largest = (a > b) ? a : b;
    largest = (largest > c) ? largest : c;

    printf("Largest number = %d\n", largest);

    return 0;
}

