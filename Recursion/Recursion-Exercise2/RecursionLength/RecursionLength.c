// accept a string and calculate the length of string  using recursion 
#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0')
        return 0;
    return 1 + stringLength(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",str);
    int len = stringLength(str);
    printf("Length of string = %d\n", len);
    return 0;
}
