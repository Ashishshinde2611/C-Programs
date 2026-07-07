

#include<stdio.h>

int main()
{
	int a, b ,mult=0,i=0;
	printf("Enter the no1:");
	scanf("%d",&a);
	printf("Enter the no2:");
	scanf("%d",&b);
	while(i<b){
		mult = mult + a;
	i++;
	}
	 printf("Multiplication = %d", mult);
    return 0;	
}
