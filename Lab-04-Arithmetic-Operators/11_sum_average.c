#include <stdio.h>

int main()
{
    int a = 10, b = 21, c = 30;
    int sum;
    float average;

    sum = a + b + c;
    average = sum / 3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);

    return 0;
}

