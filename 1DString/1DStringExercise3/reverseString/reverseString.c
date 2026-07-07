//Accept a string and reverse the content of string 

#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int n = 0, i, j;

    printf("Enter the String: ");
    scanf(" %[^\n]", str1);

    
    while (str1[n] != '\0') {
        n++;
    }

    
    for(i = n - 1, j = 0; i >= 0; i--, j++) {
        str2[j] = str1[i];
    }
    str2[j] = '\0';  

    printf("Reversed string: %s\n", str2);

    return 0;
}

