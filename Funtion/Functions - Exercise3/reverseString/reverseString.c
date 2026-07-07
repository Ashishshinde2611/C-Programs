// Write a function to reverse the string

#include <stdio.h>

void reverseString(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}


void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;

    while (str[j] != '\0') {
        j++;
    }
    j--;  

    
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
         i++;
        j--;
    }
}
