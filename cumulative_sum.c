/*Write a C program that, given a array of n numbers, outputs another array that contains the cumu
lative sum.*/

#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], cumSum[n];

    // Input elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate cumulative sum
    cumSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        cumSum[i] = cumSum[i - 1] + arr[i];
    }

    // Print result
    printf("Cumulative Sum Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cumSum[i]);
    }
    printf("\n");

    return 0;
}
