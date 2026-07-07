
#include<stdio.h>

int Addtion(int *p  ,int *q);
int main()
{
    int a = 10;
	int b = 15;
int *p = &a;
int *q = &b;
int Sum;

Sum = Addtion(p , q);
printf("Addition : %d", Sum);

return 0 ;
}

int Addtion(int *p, int*q){
int sum = (*p) + (*q);
return sum;
}
