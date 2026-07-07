//Accept number 'N' and calculate factorial of 'N' using recursion

#include <stdio.h>

int factorial(int n, int result) {
    if (n <= 1)
        return result;
    return factorial(n - 1, n * result);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }
    int fact = factorial(n, 1);
    printf("Factorial = %d\n", fact);
    return 0;
}

    
