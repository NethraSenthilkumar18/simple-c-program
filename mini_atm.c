
#include <stdio.h>

int main() {
    int choice;
    int balance = 5000;
    int amount;

    printf("         MINI ATM           \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your balance is %d\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%d", &amount);

            if (amount > 0) {
                balance += amount;
                printf("Deposit successful\n");
                printf("New balance: %d\n", balance);
            } else {
                printf("Invalid amount \n");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%d", &amount);

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Please collect your money\n");
                printf("Remaining balance: %d\n", balance);
            } else {
                printf("Invalid amount or insufficient balance\n");
            }
            break;

        case 4:
            printf("Thank you for using Mini ATM \n");
            break;

        default:
            printf("Invalid choice \n");
    }

    return 0;
}
