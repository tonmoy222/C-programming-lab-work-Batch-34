#include <stdio.h>

int main()
{
    int length = 10, width = 5;
    int area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}

