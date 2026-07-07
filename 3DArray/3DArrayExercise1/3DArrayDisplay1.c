#include <stdio.h>

int main() {
    int arr[3][4][5];

   
    printf("Enter 60 integers for the 3x4x5 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 5; k++) {
                scanf("%d", &arr[i][j][k]);  
            }
        }
    }

   
    printf("\nElements of 3x4x5 3D array are:\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Block %d:\n", i);
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 5; k++) {
                printf("%3d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
