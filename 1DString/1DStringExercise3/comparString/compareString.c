#include<stdio.h>

int main() {
    char str1[50], str2[50];
    int flag = 0, i = 0;

    printf("Enter the first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

   
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("Strings are not equal\n");
    else
        printf("Strings are equal\n");

    return 0;
}
