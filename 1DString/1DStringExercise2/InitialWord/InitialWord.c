//Accept a sentence in string and convert the initials of all words into capital letter

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the String: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        
        if ((i == 0 && str[i] != ' ') && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] -= 32; 
        }
        
        if (str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z') {
            str[i+1] -= 32;
        }
    }

    printf("String with initials capitalized: %s\n", str);
    return 0;
}

