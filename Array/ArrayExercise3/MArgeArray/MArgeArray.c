#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1 + n2;
    int arr3[n3];

   
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

   
    for(j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for(i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
