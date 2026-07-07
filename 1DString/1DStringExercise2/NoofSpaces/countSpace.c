//Accept a sentence in string and count the spaces between the words  

#include <stdio.h>

int main()
{
    char str[100];
    int space_count = 0;

    printf("Enter the String: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            space_count++;
        }
    }

    printf("Number of spaces between words: %d\n", space_count);
    return 0;
}
