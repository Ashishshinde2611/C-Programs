/*

Write a program in C to print string in reverse order using a pointer.


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
    printf("Reversed string is: ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));

    }
    printf("\n");

      return 0;

}