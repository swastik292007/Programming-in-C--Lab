/*LCM of Two Numbers
Write a program to find the Least Common Multiple (LCM) of two numbers using repeated addition or multiplication.*/
#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}