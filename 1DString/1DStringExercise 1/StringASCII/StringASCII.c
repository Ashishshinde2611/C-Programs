#include <stdio.h>
#include<String.h>
int main() {
    char str[100];   

    printf("Enter a string: ");
    scanf("%s",str);
	
	for (int i = 0; str[i] != '\0'; i++) {
        printf("%c %d\n", str[i], str[i]);
    }

    return 0;
}