#include <stdio.h>

int Rev(int);

int main() {
    int a, rev;
    scanf("%d", &a);
    rev = Rev(a);
    printf("Reverse = %d", rev);
    return 0;
}

int Rev(int x) {
    int b, c = 0;
    while (x != 0) {
        b = x % 10;
        c = (c * 10) + b;
        x = x / 10;
    }
    return c;
}
