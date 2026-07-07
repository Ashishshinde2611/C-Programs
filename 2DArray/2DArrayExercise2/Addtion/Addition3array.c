#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int a[n][m], b[n][m], c[n][m];

    printf("Enter elements of first matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix after Addition:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
