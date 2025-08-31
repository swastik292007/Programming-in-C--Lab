#include <stdio.h>

int main() {
    int num;
    int pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        // Input number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count positives, negatives, and zeroes
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        // Ask if user wants to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);   // Notice space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    // Display results
    printf("\nCount of Positive numbers: %d\n", pos);
    printf("Count of Negative numbers: %d\n", neg);
    printf("Count of Zeroes: %d\n", zero);

    return 0;
}
