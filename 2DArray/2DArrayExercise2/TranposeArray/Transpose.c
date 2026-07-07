#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter elements of the matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of Matrix:\n");
    for (int i = 0; i < m; i++) {          
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
