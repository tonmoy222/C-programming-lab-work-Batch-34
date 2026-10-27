#include <stdio.h>

int main()
{
    char character;
    char name[50];

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a word: ");
    scanf("%s", name);

    printf("Character: %c\n", character);
    printf("Word: %s\n", name);

    return 0;
}
