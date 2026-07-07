#include<stdio.h>


int main(){
	
    int a, b ,div=0,remainder;
	printf("Enter the no1:");
	scanf("%d",&a);
	printf("Enter the no2:");
	scanf("%d",&b);
	
	remainder = a;
	
while(remainder>=b){
	remainder = remainder - b;
	div++;
}
printf("Quotient = %d\n",div);
printf("Remainder = %d\n",remainder);
return 0;
}
	