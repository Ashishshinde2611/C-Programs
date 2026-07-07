
#include<stdio.h>

int main()
{
	int no , digit;
	int Highest=0, Lowest = 9;
	printf("Enter the Number : ");
	scanf("%d",&no);
	while(no>0){
		digit = no % 10;
		if (digit > Highest){
			Highest = digit;
		}
	    else if (digit < Lowest){
		Lowest = digit;
		}
		no = no / 10;
	}
	printf("Lowest Digit : %d\n ",Lowest);
	printf("Highest Digit : %d\n ",Highest);
	printf("Sum Of lowest digit and highest digit : %d\n ", Lowest + Highest);
	printf("Difference Of lowest digit and highest digit : %d\n ", Highest - Lowest);
	printf("multiplication Of lowest digit and highest digit : %d\n ", Lowest * Highest);
    return 0;
}