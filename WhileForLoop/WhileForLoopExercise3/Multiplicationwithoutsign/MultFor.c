

#include<stdio.h>

int main()
{
	int a, b ,mult=0;
	printf("Enter the no1:");
	scanf("%d",&a);
	printf("Enter the no2:");
	scanf("%d",&b);
	for(int i=0;i<b;i++){
		mult = mult + a;
	}
	 printf("Multiplication = %d", mult);
    return 0;	
}
