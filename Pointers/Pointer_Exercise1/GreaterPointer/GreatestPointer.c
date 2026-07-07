/*

Write a program in C to find the Greater number between two numbers using a pointer

*/

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 16;
	
	int *p = &a;
	int *q = &b;
	int great;
	if(*p>*q){
		great = *p;
	}
	else if (*q>*p){
		great = *q;
	}
	printf("Greatest number in a & b:%d",great);		
	return 0;
}