/*Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    // a contains the HCF now
    printf("HCF = %d\n", a);

    return 0;
}