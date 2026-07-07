#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int mul = 1;   
    double avg;

    for (i = 1; i <= 10; i++){
        sum += i;      
        mul *= i;      
    }

    avg = sum / 10;   

    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", mul);
    printf("Average = %lf\n", avg);

    return 0;
}
