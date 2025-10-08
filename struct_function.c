#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

void display(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);
    product = multiply(c1, c2);

    printf("\nFirst Complex Number: ");
    display(c1);

    printf("Second Complex Number: ");
    display(c2);

    printf("\nSum: ");
    display(sum);

    printf("Product: ");
    display(product);

    return 0;
}
