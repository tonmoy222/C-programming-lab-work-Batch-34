#include <stdio.h>

int main()
{
    int age = 24;
    const float PI = 3.14159;

    printf("Initial age: %d\n", age);
    printf("Value of PI: %f\n", PI);

    age = 25;

    printf("Updated age: %d\n", age);

    return 0;
}
