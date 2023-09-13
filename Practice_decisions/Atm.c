// Exercise 3:
// Write a C program that simulates an ATM for cash withdrawals. The program should receive an integer value corresponding to the withdrawal amount and then use a switch case to determine how many bills of each denomination (R$100, R$50, R$20, R$10, R$5, and R$2) will be provided for the withdrawal, in order to provide the smallest possible number of bills. Remember that to solve these exercises, you will need to implement the necessary code within each case of the switch.

#include <stdio.h>

int main() {

    int withdrawal;
    printf("Enter the desired withdrawal amount:\n R$100 R$50 R$20 R$10 R$5 R$2\n");
    scanf("%i", &withdrawal);

    if (withdrawal != 2 && withdrawal != 10 && withdrawal != 5 && withdrawal != 20 && withdrawal != 50 && withdrawal != 100) {
        printf("Try again.\n Please select one of the available withdrawal amounts!");
    }

    switch (withdrawal) {
        case 2:
            printf("R$2 Withdrawn!\n");
            break;
        case 5:
            printf("R$5 Withdrawn!\n");
            break;
        case 10:
            printf("R$10 Withdrawn!\n");
            break;
        case 20:
            printf("R$20 Withdrawn!\n");
            break;
        case 50:
            printf("R$50 Withdrawn!\n");
            break;
        case 100:
            printf("R$100 Withdrawn!\n");
            break;
    }

    return 0;
}
