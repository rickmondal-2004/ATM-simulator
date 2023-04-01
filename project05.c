#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin = 1234;
    int balance = 5000;
    int option;
    int amount;

    printf("Welcome to XYZ Bank ATM\n");

    while (1) {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            printf("\n1. Balance Inquiry\n");
            printf("2. Cash Withdrawal\n");
            printf("3. Deposit\n");
            printf("4. Exit\n");
            printf("\nPlease select an option: ");
            scanf("%d", &option);

            switch (option) {
                case 1:
                    printf("\nYour current balance is: $%d\n", balance);
                    break;

                case 2:
                    printf("\nPlease enter the amount to withdraw: ");
                    scanf("%d", &amount);

                    if (amount > balance) {
                        printf("\nInsufficient balance\n");
                    } else {
                        balance -= amount;
                        printf("\nTransaction successful. Your new balance is: $%d\n", balance);
                    }

                    break;

                case 3:
                    printf("\nPlease enter the amount to deposit: ");
                    scanf("%d", &amount);

                    balance += amount;
                    printf("\nTransaction successful. Your new balance is: $%d\n", balance);
                    break;

                case 4:
                    printf("\nThank you for using XYZ Bank ATM\n");
                    exit(0);

                default:
                    printf("\nInvalid option\n");
                    break;
            }
        } else {
            printf("\nInvalid PIN\n");
        }
    }

    return 0;
}
