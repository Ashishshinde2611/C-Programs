#include <stdio.h>

union Data {
    int i;
    float f;
};

struct Info {
    union Data d;
    char type;
};

void display(struct Info x) {
    if (x.type == 'i') {
        printf("Integer: %d\n", x.d.i);
    } else if (x.type == 'f') {
        printf("Float: %.2f\n", x.d.f);
    } else {
        printf("Invalid type\n");
    }
}

int main() {
    struct Info v1, v2;

    v1.d.i = 25;
    v1.type = 'i';

    v2.d.f = 45.75f;
    v2.type = 'f';

    display(v1);
    display(v2);

    return 0;
}
