#include <stdio.h>

enum TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    enum TrafficLight signal;

    signal = Red;
    if (signal == Red)
        printf("Stop! Red light.\n");

    signal = Yellow;
    if (signal == Yellow)
        printf("Get Ready! Yellow light.\n");

    signal = Green;
    if (signal == Green)
        printf("Go! Green light.\n");

    return 0;
}
