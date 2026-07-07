#include<stdio.h>
int main (void)
{
	int num1,num2,num3;
	char ch1,ch2,ch3;
	
	printf("\nEnter number 1:");
	scanf("%d",&num1);
	printf("\nEnter number 2:");
	scanf("%d",&num2);
	printf("\nEnter number 3:");
	scanf("%d",&num3);
	
	printf("\nEnter character 1:");
	scanf(" %c",&ch1);
	
	printf("\nEnter character 2:");
	scanf(" %c",&ch2);
	
	printf("\nEnter character 3:");
	scanf(" %c",&ch3);
	
	printf("\n\n");
	
	printf("\nSimple if statement output:");
	if(num1>num2)
	  {
		printf("\nNumber %d is greater than number %d\n",num1,num2);
	  }
	if(num1<num2)
	  {
		printf("\nNumber %d is smaller than number %d\n",num1,num2);
	  }
	if(num1==num2)
	  {
		printf("\nNumber %d is equal than number %d\n",num1,num2);
	  }
	  printf("\nSimple if-else statement output:");
	  if(ch1>ch2)
	  {
		  printf("\n character value %c is greater than character value %c\n",ch1,ch2);
	  }
	  else
	  {
		  printf("\n character value %c is greater than character value %c\n",ch2,ch1);
	  }
	  
	  printf("\nnested if-else lader output:");
	  if(num1<40)
	  {
		  printf("\nThe Score is less than 40 State; Failed\n");
	  }
	  else if(num1>40&&num1<=50)
	  {
		  printf("\nStatus: passed with F grade\n");
	  }
	  else if(num1>50&&num1<=60)
	  {
		  printf("\nStatus: passed with E grade\n");
	  }
	  else if(num1>60&&num1<=70)
	  {
		  printf("\nStatus: passed with D grade\n");
	  }
	  else if(num1>70&&num1<=80)
	  {
		  printf("\nStatus: passed with C grade\n");
	  }
	  else if(num1>80&&num1<=90)
	  {
		  printf("\nStatus: passed with B grade\n");
	  }else if(num1>90&&num1<=100)
	  {
		  printf("\nStatus: passed with A grade\n");
	  }
	  
	  
	  printf("\nnested if-else Lader inside if statement output:");
	  if(num3>0)
	  {
		  printf("\n Case Testing:");
		  if((ch1>=65)&&(ch1<=90))
		  {
			  printf("\nThe Character %c is in upper case\n",ch1);
		  }
		  else if((ch1>=97)&&(ch1<=122))
		  {
			  printf("\nThe Character %c is in lower case\n",ch1);
		  }
		  else
		  {
			  printf("\nThe Character %c is not alphabate\n",ch1);
		  }
	  }
	  else if(num3<0)
	{
		printf("\nAscii value:");
		if((ch2>='A')&&(ch2<='Z'))
		{
			printf("\nThe Charaacter %c has ascii value %d\n",ch2,ch2);
		}
		else if((ch2>='a')&&(ch2<='z'))
		{
			printf("\nThe Charaacter %c has ascii value %d\n",ch2,ch2);
		}
		else
		{
			printf("\nThe Charaacter %c is not alphabate\n",ch2);
		}
	}
	
	
	
	return 0;
}
		  
	  
	  
	
	