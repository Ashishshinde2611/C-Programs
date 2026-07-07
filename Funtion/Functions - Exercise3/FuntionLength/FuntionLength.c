// Write a function to find the length of a string

#include <stdio.h>


int Length(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    int len = Length(str);

    printf("Length of the string = %d\n", len);

    return 0;
}

int Length(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
