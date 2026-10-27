#include <stdio.h>

int main()
{
    float p = 1125;
    float r = 5;
    float t = 2;
    float interest;

    interest = (p * r * t) / 100;

    printf("Simple Interest = %f\n", interest);

    return 0;
}

