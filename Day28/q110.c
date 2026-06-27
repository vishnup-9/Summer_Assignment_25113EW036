/* Q110 Write a program to Create bank account
system */

#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

struct Bank customer;

// Create Account
void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &customer.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", customer.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &customer.balance);

    printf("Account Created Successfully!\n");
}

// Deposit Money
void deposit() {
    float amount;

    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);

    customer.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

// Withdraw Money
void withdraw() {
    float amount;

    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);

    if (amount <= customer.balance) {
        customer.balance -= amount;
        printf("Withdrawal Successful!\n");
    } else {
        printf("Insufficient Balance!\n");
    }
}

// Display Account
void display() {
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", customer.accNo);
    printf("Account Holder : %s\n", customer.name);
    printf("Balance        : %.2f\n", customer.balance);
}

int main() {
    int choice;

    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}