
#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        *(arr + i) = (int *)malloc(col * sizeof(int));
    }

    printf("Enter elements of %dx%d matrix:\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", (*(arr + i) + j));
        }
    }
    int n;
    if(row <= col)
        n = row;
    else
        n = col;

    int highestLeft = *(*(arr + 0) + 0);
    for (int i = 1; i < n; i++) {
        if (*(*(arr + i) + i) > highestLeft) {
            highestLeft = *(*(arr + i) + i);
        }
    }

    int lowestRight = *(*(arr + 0) + (col - 1));
    for (int i = 1; i < n; i++) {
        if (*(*(arr + i) + (col - 1 - i)) < lowestRight) {
            lowestRight = *(*(arr + i) + (col - 1 - i));
        }
    }

    printf("Sum of highest left diagonal element and lowest right diagonal element = %d\n", highestLeft + lowestRight);

    for (int i = 0; i < row; i++) {
        free(*(arr + i));
    }
    free(arr);

    return 0;
}
