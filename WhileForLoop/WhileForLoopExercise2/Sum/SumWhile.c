#include <stdio.h>

int main()
{
    int i = 1;
    int sum1 = 0, sum2 = 0;

    while (i <= 20)
    {
        if (i % 2 == 0)
            sum1 += i;
        else
            sum2 += i;

        i++;
    }

    printf("Sum of Even Numbers = %d\n", sum1);
    printf("Sum of Odd Numbers = %d\n", sum2);

    return 0;
}
