#include<stdio.h>

int main()
{
    int num, d1, d2, d3, min, max;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    min = max = d1;

    if(d2 < min)
		min = d2;
	
    if(d3 < min)
		min = d3;

    if(d2 > max)
		max = d2;
	
    if(d3 > max)
		max = d3;

    printf("Smaller digit = %d\n", min);
    printf("Greater digit = %d\n", max);

    return 0;
}
