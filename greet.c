/* Basic Function Calls Write a program that defines three functions:
 • void greet()– prints a welcome message.
 • int add(int a,int b)– returns the sum of two integers.
 • float circleArea(float r)– returns the area of a circle.
 Call these functions from main() with user input.*/




#include <stdio.h>
#define PI 3.14159   // Defining PI for circle area calculation

// Function to print welcome message
void greet() {
    printf("\nWelcome to the Basic Function Calls Program!\n");
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to calculate area of a circle
float circleArea(float r) {
    return PI * r * r;
}

// Main function
int main() {
    int num1, num2;
    float radius;

    // Call greet function
    greet();

    // Take input for addition
    printf("\nEnter two integers to add: ");
    scanf("%d %d", &num1, &num2);

    // Call add function
    int sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    // Take input for circle area
    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    // Call circleArea function
    float area = circleArea(radius);
    printf("Area of circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}