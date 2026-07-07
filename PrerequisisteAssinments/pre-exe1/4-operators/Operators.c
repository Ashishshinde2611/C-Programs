#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int result;
	printf("\n\n");
	printf("Enter a number: ");
	scanf("%d",&a);
	
	printf("\n");
	printf("Enter another number: ");
	scanf("%d",&b);
	printf("\n\n");
	
	result =a+b;
	printf("Addtion of A =%d and B=%d is equal to Result =%d\n",a,b,result);
	
	result =a-b;
	printf("Subtraction of A =%d and B=%d is equal to Result =%d\n",a,b,result);
	
	result= a*b;
	printf("multiplication of A =%d and B=%d is equal to Result =%d\n",a,b,result);
	
	result= a/b;
	printf("Division of A =%d and B=%d is equal to Result =%d\n",a,b,result);
	
	result=a%b;
	printf("Reminder of A =%d and B=%d is equal to Result =%d\n",a,b,result);
	
	return(0);
}	
	
	