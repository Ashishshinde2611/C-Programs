#include <stdio.h>

int main() {
    int arr[5][3];
    int sum = 0;

    printf("Enter elements of the 5x3 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i][1]; 
    }

    printf("Sum of 2nd column = %d\n", sum);

    return 0;
}
