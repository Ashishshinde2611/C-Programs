/*
Output: 

1 2 3 4 5
  2 3 4 5
    3 4 5
	  4 5
	    5

*/


#include<stdio.h>

int main()
{
	for(int i=5; i>=1;i--){
		for(int j=1 ; j<=5-i ; j++){
			printf(" ");
		}
		for(int j=1; j<=i ; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}