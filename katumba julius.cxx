#include <stdio.h>

int main() {
    int balance = 50000; // Initial balance in UGX
    int transaction;

    while (1) {
        printf("Your current balance is UGX %d\n", balance);
        printf("Enter the amount to withdraw (or 0 to cancel): ");
        scanf("%d", &transaction);

        // Check if user wants to cancel
        if (transaction == 0) {
            printf("Transaction cancelled. Exiting...\n");
            break;
        }

        // Check if the transaction is valid (positive value)
        if (transaction < 0) {
            printf("Invalid transaction amount. Please enter a positive amount.\n");
            continue;
        }

        // Check for insufficient balance
        if (transaction > balance) {
            printf("Insufficient balance! You only have UGX %d remaining.\n", balance);
            continue;
        }

        // Process the transaction
        balance -= transaction;
        printf("Transaction successful! New balance: UGX %d\n", balance);

        // Exit if balance reaches zero
        if (balance == 0) {
            printf("Your balance is now zero. Exiting...\n");
            break;
        }
    }

    return 0;
}