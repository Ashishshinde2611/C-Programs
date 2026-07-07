/*
Output: 

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/


#include<stdio.h>

int main()
{
	for (char i=65 ; i<=69 ; i++){
		for(char j=65; j<=69 ; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}