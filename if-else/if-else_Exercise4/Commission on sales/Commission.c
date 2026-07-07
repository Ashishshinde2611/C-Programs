#include <stdio.h>

int main()
{
    double sale, commission = 0;

    printf("Enter sale amount: ");
    scanf("%lf", &sale);

    if (sale > 40000)
        commission = sale * 0.05;

    printf("Commission = %lf\n", commission);

    return 0;
}
