#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum1 = 0, sum2 = 0;

    for(i = 0; i < n/2; i++) {
        sum1 += arr[i]; 
    }
    for(i = n/2; i < n; i++) {
        sum2 += arr[i];
    }

    printf("Sum of 1st half = %d\n", sum1);
    printf("Sum of 2nd half = %d\n", sum2);
    printf("Difference = %d\n", sum1 - sum2);

    return 0;
}
