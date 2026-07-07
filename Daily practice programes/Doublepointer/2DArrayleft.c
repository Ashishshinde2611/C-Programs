#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int **arr = NULL;
    arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        *(arr + i) = (int *)malloc(col * sizeof(int));
    }

    printf("Enter elements of %dx%d matrix:\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", (*(arr + i) + j));
        }
    }

    int leftDiagonalSum = 0;
    int n;
    if(row <= col)
        n = row;
    else
        n = col;

    printf("Left diagonal elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(*(arr + i) + i));
        leftDiagonalSum += *(*(arr + i) + i);
}

    printf("\nLeft diagonal sum = %d\n", leftDiagonalSum);

    for (int i = 0; i < row; i++) {
        free(*(arr + i));
		arr + i = NULL;
    }
    free(arr);
	arr = NULL;

    return 0;
}
