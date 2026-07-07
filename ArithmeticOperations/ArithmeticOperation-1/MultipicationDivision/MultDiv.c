#include<stdio.h>
int main()
{
  int a;
  int b;
  int  Multiplication = 0;
  float  Division = 0.0;
  printf("Enter the First numbers:");
  scanf("%d",&a);
   printf("Enter the Second numbers:");
  scanf("%d",&b);
  
   Multiplication  = a * b;
    if (b != 0)
		{
			
        Division = a / b;
		
        printf("Multiplication of numbers = %d\n", Multiplication);
        printf("Division of numbers = %.2f\n", Division);
    }
	
	return 0;
}