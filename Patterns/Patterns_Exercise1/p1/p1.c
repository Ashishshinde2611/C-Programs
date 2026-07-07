/*
Output: 

12345
12345
12345
12345
12345

*/
#include<stdio.h>

int main()
{
	for (int i=0 ; i<=4 ; i++){
		for(int j=1; j<=5 ; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}