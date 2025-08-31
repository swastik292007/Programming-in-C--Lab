/*Write a program checkdivisor.c that takes as input from the user 2 numbers, and checks if the smaller
 number is a divisor of the larger number. It should display the appropriate output message.*/
#include <stdio.h>

int main() {
    int num1, num2, smaller, larger;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find smaller and larger
    if (num1 > num2) {
        larger = num1;
        smaller = num2;
    } else {
        larger = num2;
        smaller = num1;
    }

    // Check if smaller is a divisor of larger
    if (smaller == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (larger % smaller == 0) {
        printf("%d is a divisor of %d\n", smaller, larger);
    } else {
        printf("%d is NOT a divisor of %d\n", smaller, larger);
    }

    return 0;
}
