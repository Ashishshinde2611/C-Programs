#include<stdio.h>

int main()
{
    int size = 7;
    int i, j;
    int mid = (size + 1) / 2;

    for (i = 1; i <= mid; i++) 
    {
        for (j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    for (i = mid - 1; i >= 1; i--) 
    {
        for (j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}