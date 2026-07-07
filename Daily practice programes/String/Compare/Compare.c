#include <stdio.h>

int main() {
    char A[100], B[100];
    int i, countA = 0, countB = 0, flag = 0;

    printf("Enter string A: ");
    scanf("%s", A);

    printf("Enter string B: ");
    scanf("%s", B);

 
    for (i = 0; A[i] != '\0'; i++) {
        countA++;
    }
    for (i = 0; B[i] != '\0'; i++) {
        countB++;
    }
    if (countA != countB) {
        printf("Strings are NOT Equal \n");
    } else {
       
        for (i = 0; i < countA; i++) {
            if (A[i] != B[i]) {
                flag = 1; 
                break;
            }
        }

        if (flag == 0)
            printf("Strings are Equal\n");
        else
            printf("Strings are NOT Equal\n");
    }

    return 0;
}
