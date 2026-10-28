#include <stdio.h>

int main()
{
    int marks = 45;

    if (marks >= 80)
    {
        if (marks >= 90)
        {
            printf("Grade A+\n");
        }
        else
        {
            printf("Grade A\n");
        }
    }
    else
    {
        if (marks >= 70)
        {
            printf("Grade B\n");
        }
        else
        {
            if (marks >= 60)
            {
                printf("Grade C\n");
            }
            else
            {
                if (marks >= 40)
                {
                    printf("Grade D\n");
                }
                else
                {
                    printf("Fail\n");
                }
            }
        }
    }

    return 0;
}
