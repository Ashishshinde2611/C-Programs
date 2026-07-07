

#include<stdio.h>

int main()
{
	int no , digit;
	int sum = 0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	while(no>0){
		digit = no % 10;
		sum = sum + digit;
		no = no / 10;
	}
	printf("Sum Digit : %d ",sum);
	
    return 0;
}