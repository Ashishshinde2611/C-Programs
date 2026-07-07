#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, flag;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] <= 1)
            continue; 

        flag = 1;
        for(j = 2; j <= arr[i] / 2; j++) {
            if(arr[i] % j == 0) {
                flag = 0; 
                break;
            }
        }
        if(flag == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
	arr =NULL;
    return 0;
}
