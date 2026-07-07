#include<stdio.h>
int Accept(int,int);

int main(){
	int a,b,largest;
	scanf("%d%d",&a,&b);
	largest = Accept(a,b);
	printf("Largest No = %d",largest);
	return 0;
}
int Accept(int x,int y){
if (x>y)
	return x;
else
	return y;
}
	
	