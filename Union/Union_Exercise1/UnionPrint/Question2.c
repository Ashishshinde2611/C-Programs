/*
	Write a c program to declare union containing an int, float, and double. and  display the size of each attribute.

*/
#include<stdio.h>

union Union{
	int a;
	float b;
	double c;
};

int main()
{
	union Union u1;
	u1.a = 10;
	u1.b = 22.0f;
	u1.c = 34;
	
	printf("Size of a:%d\n",sizeof(u1.a));
	printf("Size of b:%d\n",sizeof(u1.b));
	printf("Size of c:%d\n",sizeof(u1.c));
	
return 0;
}