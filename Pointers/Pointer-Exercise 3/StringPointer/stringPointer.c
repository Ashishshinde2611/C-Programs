/*
    write a Program to print a string using pointer.
  
*/

#include <stdio.h>
int main()
{
	char str[100], *ptr;
	
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	ptr = str;
	
	printf("The string is: ");
	while(*ptr != '\0') {
		printf("%c", *ptr);
		ptr++;
	}
	
	return 0;
}
