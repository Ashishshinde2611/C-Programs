#include<stdio.h>

int main(void)
{
    int p, n, r, si;
	

    printf("Enter Principal amount: ");
    scanf("%d", &p);

    printf("Enter Number of years: ");
    scanf("%d", &n);

    printf("Enter Rate of interest: ");
    scanf("%d", &r);
	

    si = (p * n * r) / 100;

    printf("Simple Interest = %d\n", si);

    return 0;
}
