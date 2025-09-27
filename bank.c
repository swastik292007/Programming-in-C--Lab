#include <stdio.h>
#include <string.h>

struct Bank {
    char name[50];
    int acc_no;
    float amount;
};

// Function to deposit money
void deposit(struct Bank *b, float amt) {
    b->amount += amt;
    printf("Deposited: %.2f\n", amt);
    printf("New Balance: %.2f\n", b->amount);
}

// Function to withdraw money
void withdraw(struct Bank *b, float amt) {
    if (amt > b->amount) {
        printf("Insufficient Balance! Withdrawal Failed.\n");
    } else {
        b->amount -= amt;
        printf("Withdrawn: %.2f\n", amt);
        printf("New Balance: %.2f\n", b->amount);
    }
}

int main() {
    struct Bank customer;

    // Input details
    printf("Enter Customer Name: ");
    scanf("%s", customer.name);
    printf("Enter Account Number: ");
    scanf("%d", &customer.acc_no);
    printf("Enter Initial Amount: ");
    scanf("%f", &customer.amount);

    int choice;
    float amt;

    while (1) {
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                deposit(&customer, amt);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
                withdraw(&customer, amt);
                break;

            case 3:
                printf("\n--- Account Details ---\n");
                printf("Name: %s\n", customer.name);
                printf("Account No: %d\n", customer.acc_no);
                printf("Balance: %.2f\n", customer.amount);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
