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

    
    int last1 = arr[n - 2];
    int last2 = arr[n - 1];

    
    for(i = n - 1; i >= 2; i--) {
        arr[i] = arr[i - 2];
    }


    arr[0] = last1;
    arr[1] = last2;

    printf("Array after right rotation : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
