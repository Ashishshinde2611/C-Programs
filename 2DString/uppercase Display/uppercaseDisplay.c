#include <stdio.h>

int main()
{
    char str[50][50];   
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);

    for (i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]", str[i]);   
    }

    printf("\nYou entered :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; str[i][j] != '\0'; j++) {
            if (str[i][j] >= 'a' && str[i][j] <= 'z') {
                str[i][j] = str[i][j] - 32;  
            }
        }
        printf("%s\n", str[i]);
    }

    return 0;
}
