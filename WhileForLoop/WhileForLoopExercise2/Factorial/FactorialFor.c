//Accept a number and display its factorial
 
#include<stdio.h>

int main()
{
	int no1,fact=1;
	printf("Enter the number:");
	scanf("%d",&no1);
	for(;no1!=0;no1--){
		fact = fact *no1;
		
	}
	printf("Factorial of no1 : %d",fact);
	
    return 0; 
}