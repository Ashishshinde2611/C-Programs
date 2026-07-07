#include<stdio.h>
int main()

{
	int i,j;
	
	printf("\nPrinting digits 1 to 10 and 100 to 10\n");
	
	i = 1;
	j = 100;
	
	while(i <= 10,j >= 10)
	{
		printf("\t%d \t%d\n",i,j);
		i++;
		j = j-10;
	}
	return 0;
}
