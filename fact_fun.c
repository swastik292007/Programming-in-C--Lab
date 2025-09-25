#include <stdio.h>

// Function to compute factorial of n
long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    long nCr;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! (must have 0 <= r <= n)\n");
        return 0;
    }

    // Using formula: C(n,r) = n! / (r! * (n-r)!)
    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("C(%d, %d) = %ld\n", n, r, nCr);

    return 0;
}
