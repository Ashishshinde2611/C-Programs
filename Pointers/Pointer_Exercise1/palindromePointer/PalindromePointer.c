/*

Write a program in C to find whether the number is Palindrome or not using a double pointer

*/

#include <stdio.h>

int palindrome(int *num, int **revPtr) {
    int temp = *num;
    **revPtr = 0;

    while (temp != 0) {
        **revPtr = (**revPtr * 10) + (temp % 10);
        temp /= 10;
    }

    return (*num == **revPtr);
}
int main() {
    int n, rev;
    int *pN = &n;
    int *pR = &rev;
    int **ppR = &pR;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (palindrome(pN, ppR))
        printf("Number is a palindrome\n");
    else
        printf("Number is not a palindrome\n");

    return 0;
}
