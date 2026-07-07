#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        int rowMax = a[i][0];
        int colIndex = 0;
        for (int j = 1; j < m; j++) {
            if (a[i][j] > rowMax) {
                rowMax = a[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for (int k = 0; k < n; k++) {
            if (a[k][colIndex] < rowMax) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) {
            printf("Saddle Point found: %d\n", rowMax);
            found = 1;
        }
    }

    if (!found) {
        printf("No Saddle Point found.\n");
    }

    return 0;
}
