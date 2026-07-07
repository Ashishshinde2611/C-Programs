#include <stdio.h>

int main() {
    int arr[10], i;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

    for(i = 0; i < 10; i++) {
        if(arr[i] > 0)
			printf("\nPositive: %d", arr[i]);
        if(arr[i] < 0)
			printf("\nNegative: %d", arr[i]);
        if(arr[i] % 2 == 0)
			printf("\nEven: %d", arr[i]);
        else
			printf("\nOdd: %d", arr[i]);
    }

    return 0;
}
