#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int mul = 1;
    double avg;

    while (i <= 10) {
        sum += i;
        mul *= i;
        i++;
    }

    avg = (double)sum / 10;   // typecasting for correct average

    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", mul);
    printf("Average = %.2lf\n", avg);

    return 0;
}
