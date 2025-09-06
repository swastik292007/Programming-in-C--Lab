/*fibonacci triangle symmetrical both sides*/
#include <stdio.h>

int main() {
    int n, i, j, k, space;
    long long int a = 0, b = 1, c;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // print spaces for symmetry
        for (space = 1; space <= n - i; space++) {
            printf("   ");  // 3 spaces for alignment
        }

        // print Fibonacci numbers
        for (j = 1; j <= i; j++) {
            printf("%3lld ", b);
            c = a + b;
            a = b;
            b = c;
        }

        printf("\n");
    }
    return 0;
}