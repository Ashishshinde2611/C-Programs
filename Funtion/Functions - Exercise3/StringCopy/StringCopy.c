// Write a separate function to copy one string into another string

#include <stdio.h>

void copyString(char s[], char d[]);

int main() {
    char s[100], d[100];

    printf("Enter a string: ");
    scanf(" %[^\n]",s);   

    copyString(s, d);

    printf("Copied string: %s\n", d);

    return 0;
}

void copyString(char s[], char d[]) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0'; 
}
