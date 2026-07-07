#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)  
    {
        ch = ch - 32;          
        printf("Uppercase: %c\n", ch);
    }
    else
    {
        printf("Not a lowercase letter.\n");
    }

    return 0;
}
