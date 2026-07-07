//Accept a string and copy the string into another string without using the inbuilt copy function 

#include<stdio.h>

int main()
{
	char str1[50];
	char str2[50];
	
	printf("Enter the String: ");
    scanf(" %[^\n]", str1);
	
	for (int i = 0; str1[i] != '\0'; i++) {
		str2[i]=str1[i];
	}
	printf("in copy string :%s",str2);
	
	return 0;
	
}