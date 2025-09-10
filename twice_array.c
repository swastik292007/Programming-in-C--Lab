/*Write a C program that takes as input a array and returns another array that contains each element
 of the original array twice.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[2 * n];

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Create result array with each element twice
    for (int i = 0; i < n; i++) {
        result[2 * i] = arr[i];       // first copy
        result[2 * i + 1] = arr[i];   // second copy
    }

    // Output result array
    printf("New array with elements repeated twice:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
