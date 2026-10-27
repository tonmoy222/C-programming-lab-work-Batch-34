#include <stdio.h>

int main()
{
    float radius = 5, pi = 3.1416;
    float area, circumference;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

