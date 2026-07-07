#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, flag;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        flag = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            int count = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j])
                    count++;
            }
            printf("Element %d occurs %d time(s)\n", arr[i], count);
        }
    }

    free(arr);
	arr = NULL;
    return 0;
}

