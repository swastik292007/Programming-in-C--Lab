#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("After storing integer:\n");
    printf("data.i = %d\n", data.i);

    data.f = 98.5;
    printf("\nAfter storing float:\n");
    printf("data.f = %.2f\n", data.f);
    printf("data.i (overwritten) = %d\n", data.i);

    sprintf(data.str, "Hello");
    printf("\nAfter storing string:\n");
    printf("data.str = %s\n", data.str);
    printf("data.i (overwritten) = %d\n", data.i);
    printf("data.f (overwritten) = %.2f\n", data.f);

    return 0;
}
