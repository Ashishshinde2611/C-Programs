// Accept N numbers and calculate sum of all numbers using recursion

#include <stdio.h>

int sum(int n) {
    int num;
    if (n == 0)
        return 0;
    else {
        printf("Enter number: ");
        scanf("%d", &num);
        return num + sum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int total = sum(n);
    printf("\nSum of all numbers = %d\n", total);
    return 0;
}
