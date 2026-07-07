#include<stdio.h>

int main(void)
{
    int no1, no2;

    printf("Enter first number (no1): ");
    scanf("%d", &no1);

    printf("Enter second number (no2): ");
	
    scanf("%d", &no2);

    printf("\nBefore swapping: no1 = %d, no2 = %d\n", no1, no2);

    no1 = no1 + no2;
	
    no2 = no1 - no2;
	
    no1 = no1 - no2;

    printf("After swapping: no1 = %d, no2 = %d\n", no1, no2);

    return 0;
}
