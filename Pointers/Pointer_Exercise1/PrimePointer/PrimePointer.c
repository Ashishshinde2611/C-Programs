/*
tdioWrite a program in C to find whether the number is Prime or not using a double pointer (use function)

*/

#include<stdio.h>
int isPrime(int *p);

int main() {
    int num;
	int *p = &num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime (p))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
int isPrime(int *p){
	int n = *p;
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}