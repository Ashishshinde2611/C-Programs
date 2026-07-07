#include <stdio.h>

int main() {
    char A[100], B[50];   
    int i, j;

    printf("Enter string A: ");
    scanf("%s", A);

    printf("Enter string B: ");
    scanf("%s", B);

   
    for (i = 0; A[i] != '\0'; i++);

    for (j = 0; B[j] != '\0'; j++, i++) {
        A[i] = B[j];
    }

    
    A[i] = '\0';

    printf("Concatenated string in A: %s\n", A);

    return 0;
}
