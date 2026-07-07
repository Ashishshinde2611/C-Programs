

#include<stdio.h>

int main()
{
	int no, digit;
	int sum = 0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	for(;no>0;no = no / 10){
		digit = no % 10;
		sum = sum + digit;
	}
	printf("Sum Digit : %d ",sum);
	
    return 0;
}