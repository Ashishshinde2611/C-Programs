#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("Number of digits = 1\n");
    else {
        if (n < 0)
            n = -n;
        int digits = countDigits(n);
        printf("Number of digits = %d\n", digits);
    }
    return 0;
}
