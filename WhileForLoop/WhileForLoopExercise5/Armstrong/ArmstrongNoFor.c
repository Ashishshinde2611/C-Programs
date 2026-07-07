

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
		c = c + (b * b * b );
		
	}
		if(c == num )
			printf("Number is a Armstrong");
		else
			printf("Number is not a Armstrong");
	
    return 0;  
}