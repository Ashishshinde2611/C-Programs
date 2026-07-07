#include<stdio.h>

int main()
{
    int size = 5;
    int i, j, k;
    int mid = (size + 1) / 2;

    for (i = 1; i <= mid; i++) 
    {
        for (j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        printf("*");
        if (i > 1) 
        {
            for (k = 1; k <= 2 * i - 3; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (i = mid - 1; i >= 1; i--) 
    {
        for (j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        printf("*");
        if (i > 1) 
        {
            for (k = 1; k <= 2 * i - 3; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}