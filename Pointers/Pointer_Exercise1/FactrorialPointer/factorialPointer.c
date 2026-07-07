/*

Write a program in C to find the factorial of a given number using double pointers.
*/
#include <stdio.h>

void factorial(int long num, int long **result) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    **result = fact;
}

int main() {
    int long n, fact;
    int long*p = &n;
    int long*q = &fact;
    int long**pq = &q;

    printf("Enter the number: ");
    scanf("%d", p);

    factorial(*p, pq);

    printf("Factorial of the number: %d\n", fact);
    return 0;
}
