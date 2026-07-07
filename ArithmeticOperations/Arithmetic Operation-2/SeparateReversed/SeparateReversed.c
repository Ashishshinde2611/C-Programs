#include<stdio.h>

int main(void)
{
    int no1, digit1, digit2, rNo;

    printf("Enter a 2-digit number: ");
    scanf("%d", &no1);

    digit1 = no1 / 10; 
    digit2 = no1 % 10;   

    rNo = digit2 * 10 + digit1;

    printf("Reversed number = %d\n", rNo);

    return 0;
}


