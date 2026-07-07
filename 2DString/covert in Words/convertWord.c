#include <stdio.h>

int main()
{
    int n, num, i, digit, rev, temp, j, k;
    char words[10][10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", 
                          "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    char result[10][100];

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num == 0) {
            result[i][0] = '\0';
            for (j = 0; words[0][j] != '\0'; j++)
                result[i][j] = words[0][j];
            result[i][j] = '\0';
            continue;
        }

        rev = 0;
        temp = num;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }

        k = 0;
        result[i][0] = '\0';
        while (rev > 0) {
            digit = rev % 10;
            rev /= 10;
            for (j = 0; words[digit][j] != '\0'; j++) {
                result[i][k] = words[digit][j];
                k++;
            }
            result[i][k] = ' ';
            k++;
        }
        result[i][k] = '\0';
    }

    printf("\nNumbers in Words:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}
