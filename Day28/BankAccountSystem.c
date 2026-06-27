#include <stdio.h>
#include <string.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank customer;
    int choice;
    float amount;
    int accountCreated = 0;

    while (1) {
        printf("\n========== Bank Account Management System ==========\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &customer.accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", customer.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &customer.balance);

            accountCreated = 1;
            printf("Account created successfully!\n");
            break;

        case 2:
            if (!accountCreated) {
                printf("Please create an account first!\n");
                break;
            }

            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            customer.balance += amount;
            printf("Amount deposited successfully!\n");
            break;

        case 3:
            if (!accountCreated) {
                printf("Please create an account first!\n");
                break;
            }

            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > customer.balance)
                printf("Insufficient balance!\n");
            else {
                customer.balance -= amount;
                printf("Amount withdrawn successfully!\n");
            }
            break;

        case 4:
            if (!accountCreated) {
                printf("Please create an account first!\n");
                break;
            }

            printf("Current Balance: %.2f\n", customer.balance);
            break;

        case 5:
            if (!accountCreated) {
                printf("Please create an account first!\n");
                break;
            }

            printf("\n------ Account Details ------\n");
            printf("Account Number : %d\n", customer.accNo);
            printf("Account Holder : %s\n", customer.name);
            printf("Balance        : %.2f\n", customer.balance);
            break;

        case 6:
            printf("Thank you for using the Bank Management System.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}