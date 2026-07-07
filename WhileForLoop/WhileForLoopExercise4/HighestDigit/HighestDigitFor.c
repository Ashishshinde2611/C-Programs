

#include<stdio.h>

int main()
{
	int no , digit;
	int Highest = 0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	for(;no>0;no = no / 10){
		digit = no % 10;
	    if (digit > Highest)
			Highest = digit;
	}
	printf("Highest Digit : %d ",Highest);
	
    return 0;
}