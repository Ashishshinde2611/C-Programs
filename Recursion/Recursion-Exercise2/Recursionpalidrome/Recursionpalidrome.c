// accept number and check whether the number is a palindrome or not using recursion 

#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        n = -n;
    rev = reverseNumber(n, 0);
    if (n == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
