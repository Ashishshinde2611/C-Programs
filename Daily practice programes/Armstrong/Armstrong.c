#include<stdio.h>
int main(){
	int a;
	int digit = 0;
	int Am = 0;
	int c = 0;
	printf("Enter the numder:");
	scanf("%d",&a);
	c = a;
	
for(;a!=0;a/=10){
    digit = a % 10 ;
	Am = Am+(digit*digit*digit);
}
if (Am == c ){
printf("Number is Armstrong :");
}
else{
	printf(" Number is Not Armstrong ");
}
return 0;
}