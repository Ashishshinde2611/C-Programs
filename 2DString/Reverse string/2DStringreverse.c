//Accept a sentence in 2D string and reverse each word of that sentence 

#include <stdio.h>

int main() {
    char str[100], words[20][20];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);  

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[k][j++] = str[i];
        } else {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }
    words[k][j] = '\0';
    int numWords = k + 1;

    printf("\nReversed words:\n");
    for (i = 0; i < numWords; i++) {
        int len = 0;
        while (words[i][len] != '\0') {
            len++;
        }

        for (j = len - 1; j >= 0; j--) {
            printf("%c", words[i][j]);
        }
        printf(" ");
    }

    return 0;
}
