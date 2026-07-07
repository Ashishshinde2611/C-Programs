/*

Write a program in C to calculate the length of a string using a pointer.


*/

#include <stdio.h>

int main()
{
    char str[100], *ptr;
    int length = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    ptr = str;
    
    while(*ptr != '\0') {
        length++;
        ptr++;
    }
    
    printf("Length of the string is: %d\n", length);
    
      return 0;

}