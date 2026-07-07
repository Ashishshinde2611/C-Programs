#include <stdio.h>

int main() {
    int arr[50], n, i, j, num, size = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        int duplicate = 0;
        for(j = 0; j < size; j++) {
            if(arr[j] == num) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate) {
            arr[size] = num;
            size++;
        }
    }

    printf("\nUnique elements: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
