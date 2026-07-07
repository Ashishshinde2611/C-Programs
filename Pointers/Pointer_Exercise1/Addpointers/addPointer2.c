
#include<stdio.h>

int Addtion(int *p  ,int *q);
int main()
{
    int a;
	int b;
	int Sum;
	printf("Enter the numbers=");
	scanf("%d %d", &a, &b);
int *p = &a;
int *q = &b;

Sum = Addtion(p , q);
printf("Addition : %d", Sum);

return 0 ;
}

int Addtion(int *p, int*q){
int sum = (*p) + (*q);
return sum;
}