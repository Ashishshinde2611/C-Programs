#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int counted[n]; 
    for (int i = 0; i < n; i++) {
        counted[i] = 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (counted[i] == 0) { 
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = 1; 
                }
            }
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
