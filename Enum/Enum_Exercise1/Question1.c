#include <stdio.h>

enum Season {
    Spring,
    Summer,
    Autumn,
    Winter
};

int main() {
    enum Season s;

    for (s = Spring; s <= Winter; s++) {
        printf("Season %d\n", s);
    }

    return 0;
}
