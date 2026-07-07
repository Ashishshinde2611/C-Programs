// accept two numbers and find the GCD of the numbers  using recursion 

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    int result = gcd(a, b);
    printf("GCD = %d\n", result);
    return 0;
}
