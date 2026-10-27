#include <stdio.h>

int main()
{
    float celsius = 35;
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Celsius = %f\n", celsius);
    printf("Fahrenheit = %f\n", fahrenheit);

    return 0;
}
