#include<stdio.h>

int main()
{
    int num, d1, d2, d3, max, min, sum, diff;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    max = d1;
    if(d2 > max)
		max = d2;
    if(d3 > max
	max = d3;

    min = d1;
    if(d2 < min)
		min = d2;
    if(d3 < min)
		min = d3;

    sum = max + min;
    diff = max - min;

    printf("Sum = %d (%d+%d)\n", sum, max, min);
    printf("Diff = %d (%d-%d)\n", diff, max, min);

    return 0;
}
