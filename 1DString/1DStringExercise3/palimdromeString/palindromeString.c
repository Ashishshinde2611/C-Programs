#include <stdio.h>

int main() {
    char str[50];
    int i, j;

    printf("Enter the string: ");
    scanf(" %[^\n]", str);

    
    for(i = 0; str[i] != '\0'; i++);
    int length = i;

    
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            printf("String is not a palindrome\n");
            return 0;  
        }
    }

    
    printf("String is a palindrome\n");

    return 0;
}
