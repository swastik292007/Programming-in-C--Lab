#include <stdio.h>

enum TrafficLight {RED,YELLOW,GREEN};

int main() {
    enum TrafficLight signal;

    printf("Enter traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &signal);

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Ready\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input! Please enter 0, 1, or 2.\n");
    }

    return 0;
}
