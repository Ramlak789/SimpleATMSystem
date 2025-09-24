#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0, amount;

    while (1) {
        printf("\nSimple ATM System\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance += amount;
                    printf("Deposit successful. New balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid Option\n");
        }
    }

    return 0;
}
