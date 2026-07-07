#include<stdio.h>
int main()

{
	int i;
	printf("\n\n");
	printf("print digit 1 to 10:\n");
	i = 1;
	while(i<=10)
	{
		printf("\t%d\n",i);
		i++;
	}
	
	i = i-1;
	printf("print digit 10 to 1:\n");
	while(i>=1)
	{
		printf("\t%d\n",i);
		i--;
	}
	return 0;
}

	
	