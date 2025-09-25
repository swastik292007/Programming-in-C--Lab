/*Write a function int isPrime(int n) that returns 1 if n is prime, else 0. Use this function to:
 (a) Display all prime numbers between two user–given limits.
 (b) Find the nth prime number.*/

 #include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;   // numbers < 2 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;      // divisible => not prime
    }
    return 1;              // prime
}

int main() {
    int choice;
    printf("Prime Number Program\n");
    printf("1. Display all prime numbers between two limits\n");
    printf("2. Find the nth prime number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // (a) Display primes in a range
        int low, high;
        printf("Enter lower limit: ");
        scanf("%d", &low);
        printf("Enter upper limit: ");
        scanf("%d", &high);

        printf("Prime numbers between %d and %d are:\n", low, high);
        for (int i = low; i <= high; i++) {
            if (isPrime(i))
                printf("%d ", i);
        }
        printf("\n");

    } else if (choice == 2) {
        // (b) Find the nth prime
        int n, count = 0, num = 2;
        printf("Enter n: ");
        scanf("%d", &n);

        while (1) {
            if (isPrime(num)) {
                count++;
                if (count == n) {
                    printf("The %dth prime number is: %d\n", n, num);
                    break;
                }
            }
            num++;
        }

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

