#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an uppercase character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) 
    {
        ch = ch + 32;         
        printf("Lowercase: %c\n", ch);
    }
    else
    {
        printf("Not an uppercase letter.\n");
    }

    return 0;
}
