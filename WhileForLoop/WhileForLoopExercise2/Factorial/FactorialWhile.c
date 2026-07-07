//Accept a number and display its factorial
 
#include<stdio.h>

int main()
{
	int no1=0,fact = 1;
	printf("Enter the number:");
	scanf("%d",&no1);
	while(no1!=0){
		fact = fact *no1;
		no1=no1-1;
	}
	printf("Factorial of no1 : %d",fact);
		
    return 0; 
}