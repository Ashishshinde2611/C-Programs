#include<stdio.h>
int main(){
	
	int n ,a=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i =1;i<=n;i++){
		a= i*i*i;
	printf("cube of %d : %d\n", i ,a);
	
	}
	return 0 ;
}