// Accept two numbers and display its sum and Differance 

#include<stdio.h>

int main(void)
{ 
int a;
  int b;
  int sum = 0;
  
  printf("Enter the First numbers:");
  scanf("%d",&a);
   printf("Enter the Second numbers:");
  scanf("%d",&b);
  
  sum  = a + b;
  printf("Addition of numbers = %d",sum);
  
	return 0;
}
