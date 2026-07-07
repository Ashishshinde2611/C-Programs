#include<stdio.h>

int main(void)
{
    int no1, digit1, digit2, sum;

    printf("Enter a 2-digit number: ");
    scanf("%d", &no1);

    digit1 = no1 / 10;  
    digit2 = no1 % 10;   

    sum = digit1 + digit2;

    printf("Sum of digits = %d (%d + %d)\n", sum, digit1, digit2);

    return 0;
}
