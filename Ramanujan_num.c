//Ramanujan number.
#include <stdio.h>

int main() {
    int L;
    printf("Enter the limit L: ");
    scanf("%d", &L);

    int a, b, c, d;
    int found = 0;

    for (a = 1; a * a * a <= L; a++) {
        for (b = a; b * b * b <= L; b++) {
            for (c = a + 1; c * c * c <= L; c++) {
                for (d = c; d * d * d <= L; d++) {
                    int sum1 = a * a * a + b * b * b;
                    int sum2 = c * c * c + d * d * d;

                    if (sum1 == sum2 && sum1 <= L) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", 
                               sum1, a, b, c, d);
                        found = 1;
                    }
                }
            }
        }
    }

    if (!found) {
        printf("No Ramanujan numbers found up to %d\n", L);
    }

    return 0;
}
