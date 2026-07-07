#include<stdio.h>

int main(void)
{
    int a, b, remainder;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    remainder = a % b;

    printf("Remainder = %d\n", remainder);

    return 0;
}
