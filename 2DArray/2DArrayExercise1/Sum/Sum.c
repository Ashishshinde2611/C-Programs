#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int arr[n][m];
    int sum = 0;

    printf(" matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; 
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
