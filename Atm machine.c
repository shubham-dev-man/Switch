#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amt;

    do {
        printf("\n--- ATM MENU ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                balance += amt;
                printf("Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
                if(amt > balance)
                    printf("Insufficient Balance!\n");
                else {
                    balance -= amt;
                    printf("Withdrawn Successfully!\n");
                }
                break;

            case 3:
                printf("Available Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option!\n");
        }

    } while(choice != 4);

    return 0;
}
