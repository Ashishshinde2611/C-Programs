//Accept  4*4 matrix and display the following patern

/*

  * 1 1 1
  0 * 1 1
  0 0 * 1
  0 0 0 *  
  
*/
#include <stdio.h>

int main() {
    int a[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j)
                a[i][j] = -1; 
            else if (j > i)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == -1)
                printf("* ");
            else
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
