//Accept a big number and display it in reverse order

#include<stdio.h>

int main()
{
	int no , digit;
	int reverse = 0;
	printf("Enter the Number : ");
	scanf("%d",&no);
	for(;no>0;no = no / 10){
		digit = no % 10;
		reverse = reverse * 10 + digit ;	
	}
	printf("Reversed Digit : %d ",reverse);
	
    return 0;
}