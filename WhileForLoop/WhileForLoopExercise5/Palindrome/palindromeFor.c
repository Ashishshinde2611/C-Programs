

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Enter the number:");
	scanf("%d",&a);
	int num = a;
	for(;a!=0;a = a / 10){
		b = a %10;
		c = ( c *  10) +b ;
		
	}
		if(c == num )
			printf("Number is a palindrome");
		else
			printf("Number is not a palindrome");
	
    return 0;  
}