

#include<stdio.h>

int main()
{
	int no , digit;
	int Highest = 0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	while(no>0){
		digit = no % 10;
	    if (digit > Highest){
			Highest = digit;
		}
		no = no / 10;
	}
	printf("Highest Digit : %d ",Highest);
	
    return 0;
}