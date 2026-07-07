/*
Output: 

A A A A A
B B B B B
C C C C C 
D D D D D
E E E E E

*/


#include<stdio.h>

int main()
{
	for (char i=65 ; i<=69 ; i++){
		for(char j=65; j<=69 ; j++){
			printf("%c ",i);
		}
		printf("\n");
	}
	return 0;
}