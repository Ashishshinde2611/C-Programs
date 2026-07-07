/*

Write a program in C to find the largest element using Dynamic Memory Allocation.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, largest;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    
    largest = *arr;
    for (i = 1; i < n; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    printf("The largest element is: %d\n", largest);

   
    free(arr);
    arr = NULL;
    return 0;
}

