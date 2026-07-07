#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, sumRow, sumCol;
    int diag1 = 0, diag2 = 0;
    int magic = 1; 

    
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    int target = 0;
    for (j = 0; j < 3; j++) {
        target += a[0][j];
    }

    
    for (i = 0; i < 3; i++) {
        sumRow = 0;
        for (j = 0; j < 3; j++) {
            sumRow += a[i][j];
        }
        if (sumRow != target) {
            magic = 0;
            break;
        }
    }

   
    if (magic) {
        for (j = 0; j < 3; j++) {
            sumCol = 0;
            for (i = 0; i < 3; i++) {
                sumCol += a[i][j];
            }
            if (sumCol != target) {
                magic = 0;
                break;
            }
        }
    }

   
    if (magic) {
        for (i = 0; i < 3; i++) {
            diag1 += a[i][i];
            diag2 += a[i][2 - i];
        }
        if (diag1 != target || diag2 != target) {
            magic = 0;
        }
    }

    
    if (magic)
        printf("It is a Magic Square.\n");
    else
        printf("It is NOT a Magic Square.\n");

    return 0;
}
