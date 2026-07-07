#include<stdio.h>
int Fact (int);
int main()
{
	int no1,fact;
	printf("Enter the number:");
	scanf("%d",&no1);
	fact = Fact(no1);
	printf("Factorial of no1 : %d",fact);
		
    return 0; 
}
int Fact(int x){
	int fact = 1 ;
	while(x!=0){
		fact = fact *x;
		x = x - 1;
	}
	return fact;
}