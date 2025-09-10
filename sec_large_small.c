/*Write a C program that finds the second largest and second smallest numbers in a array of n
 numbers.*/
 #include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    int smallest, second_smallest, largest, second_largest;
    smallest = second_smallest = largest = second_largest = arr[0];

    // Find largest and smallest first
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    second_smallest = largest;
    second_largest = smallest;

    for (int i = 0; i < n; i++) {
        if (arr[i] > second_largest && arr[i] < largest)
            second_largest = arr[i];
        if (arr[i] < second_smallest && arr[i] > smallest)
            second_smallest = arr[i];
    }

    if (second_largest == smallest || second_smallest == largest) {
        printf("No distinct second largest or second smallest found.\n");
    } else {
        printf("Second smallest: %d\n", second_smallest);
        printf("Second largest: %d\n", second_largest);
    }

    return 0;
}
