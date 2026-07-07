#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int first = arr[0];
    int second = arr[1];

    for(i = 0; i < n - 2; i++) {
        arr[i] = arr[i + 2];
    }

    arr[n - 2] = first;
    arr[n - 1] = second;

    printf("Array after left rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
