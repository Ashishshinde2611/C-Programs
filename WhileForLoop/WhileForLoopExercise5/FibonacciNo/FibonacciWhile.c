#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, count = 0;

    printf("Enter the number of iterations: ");
    scanf("%d", &n);

    while (count < n) {
        printf("%d ", a);  
        c = a + b;          
        a = b;
        b = c;
        count++;
    }

    return 0;
}
