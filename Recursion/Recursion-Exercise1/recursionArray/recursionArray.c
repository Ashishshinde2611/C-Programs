#include <stdio.h>

void displayReverse(int arr[], int n) {
    if (n == 0)
        return;
    printf("%d ", arr[n - 1]);
    displayReverse(arr, n - 1);
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    displayReverse(arr, n);
    return 0;
}
