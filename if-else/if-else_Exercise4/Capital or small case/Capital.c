#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)   
        printf("Capital letter\n");
    else if (ch >= 97 && ch <= 122) 
        printf("Small letter\n");
    else
        printf("Not an alphabet letter\n");

    return 0;
}
