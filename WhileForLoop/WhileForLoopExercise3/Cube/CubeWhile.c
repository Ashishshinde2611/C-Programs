#include<stdio.h>
int main(){
	
	int n , i =1,a=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n){
		a= i*i*i;
	printf("cube of %d : %d\n", i ,a);
	i++;
	}
	return 0 ;
}