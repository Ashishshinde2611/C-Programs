#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows (n > 1): ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    if (n <= 1) {
        printf("Number of rows must be greater than 1.\n");
        return 0;
    }

    int arr[n][m];
    int sum = 0;

    printf("Enter elements of %dx%d matrix:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        sum += arr[n-1][j];
    }

    printf("Sum of %dth row = %d\n", n-1, sum);

    return 0;
}
