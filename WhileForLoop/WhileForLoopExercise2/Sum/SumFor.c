#include <stdio.h>

int main()
{
    int i;
    int sum1 = 0, sum2 = 0;

    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            sum1 += i;
        else
            sum2 += i;
    }

    printf("Sum of Even Numbers = %d\n", sum1);
    printf("Sum of Odd Numbers = %d\n", sum2);

    return 0;
}
