#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int x;
	printf("\n\n");
	printf("Enter number A: ");
	scanf("%d",&a);
	
	printf("\n");
	printf("Enter number B: ");
	scanf("%d",&b);
	
	printf("\n\n");
	
	x=a;
	a+=b;
	printf("Addtion of A =%d and B=%d is equal to Result =%d\n",a,b,x);
	
	x =a;
	a-=b;
	printf("Subtraction of A =%d and B=%d is equal to Result =%d\n",a,b,x);
	
	x= a;
	a*=b;
	printf("multiplication of A =%d and B=%d is equal to Result =%d\n",a,b,x);
	
	x= a;
	a/=b;
	printf("Division of A =%d and B=%d is equal to Result =%d\n",a,b,x);
	
	x=a;
	a%=b;
	printf("Reminder of A =%d and B=%d is equal to Result =%d\n",a,b,x);
	
	return(0);
}	
	
	