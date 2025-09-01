#include <stdio.h>

int main() {
    int n, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (count = 0; n > 1; count++) {
        n = n / 2;
    }

    printf("Output: %d\n", count);
    return 0;
}
