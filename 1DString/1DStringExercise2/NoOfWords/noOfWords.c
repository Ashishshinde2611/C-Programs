#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter the String: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ') && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}
