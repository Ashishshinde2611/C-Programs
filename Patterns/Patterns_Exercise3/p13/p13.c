
/*
Output: 

5 4 3 2 1
5 4 3 2
5 4 3 
5 4 
5

*/


#include<stdio.h>

int main()
{
	for(int i=5; i>=1;i--){
		for(int j=5 ; j>=6-i; j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
