#include<stdio.h>


int main(){
	
    int a, b ,div=0,remainder;
	printf("Enter the no1:");
	scanf("%d",&a);
	printf("Enter the no2:");
	scanf("%d",&b);
	
	remainder = a;
	
for(;remainder>=b;div++){
	remainder = remainder - b;
}
printf("Quotient = %d\n",div);
printf("Remainder = %d\n",remainder);
return 0;
}
	