#include<stdio.h>

int main()
{
	int num = 0;
	int flag = 0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int temp = 2;temp<num;temp++)
	{
		if(num%temp == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("Number is Prime");
	else
		printf("Number is not Prime");
    return 0;  
}