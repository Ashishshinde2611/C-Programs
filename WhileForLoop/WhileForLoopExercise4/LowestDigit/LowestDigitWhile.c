

#include<stdio.h>

int main()
{
	int no , digit;
	int Lowest = 9;
	printf("Enter the Number : ");
	scanf("%d",&no);
	while(no>0){
		digit = no % 10;
	    if (digit <Lowest){
			Lowest = digit;
		}
		no = no / 10;
	}
	printf("Lowest Digit : %d ",Lowest);
	
    return 0;
}