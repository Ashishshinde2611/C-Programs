#include <stdio.h>

int Sum(int);

int main() {
    int a, Add;
    scanf("%d", &a);
    Add = Sum(a);
    printf("Sum = %d", Add);
    return 0;
}

int Sum(int x) {
    int b, c = 0;
    while (x != 0) {
        b = x % 10;
        c = c + b;
        x = x / 10;
    }
    return c;
}
