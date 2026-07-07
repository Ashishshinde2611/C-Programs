#include<stdio.h>
int main(){
	int a;
	int b = 0;
	int c = 0;
	printf("Enter the number:");
	scanf("%d",&a);
	
	for(;a!=0;){
		b = a%10;
	if (b>c){
		c=b;
	
	a/=10;
	printf("Hight number :%d",c);
	}
}
return 0;
}
