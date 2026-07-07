#include <stdio.h>

int main() {
    int n, m, p;

    
    printf("Enter dimensions (n m p): ");
    scanf("%d %d %d", &n, &m, &p);

    int arr[n][m][p];  

   
    printf("\nEnter %d elements for %dx%dx%d array:\n", n * m * p, n, m, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    
    printf("\nElements of %dx%dx%d 3D array are:\n\n", n, m, p);
    for (int i = 0; i < n; i++) {
        printf("Block %d:\n", i);
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                printf("%3d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
