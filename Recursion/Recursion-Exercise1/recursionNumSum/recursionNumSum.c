#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        n = -n;
    int sum = sumOfDigits(n);
    printf("Sum of digits = %d\n", sum);
    return 0;
}
