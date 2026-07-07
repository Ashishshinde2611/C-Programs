

#include<stdio.h>

int main()
{
	int no , digit;
	int Lowest = 9;
	printf("Enter the Number : ");
	scanf("%d",&no);
	for(;no>0;no = no / 10){
		digit = no % 10;
	    if (digit < Lowest)
		Lowest = digit;
	}
	printf("Lowest Digit : %d ",Lowest);
	
    return 0;
}