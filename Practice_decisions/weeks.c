// Exercise 1:
// Create a C program that receives an integer from 1 to 7 and prints the corresponding day of the week
// (1 for Sunday, 2 for Monday, etc.) using a switch case structure.
#include <stdio.h>

int main() {
    int dayOfWeek;

    printf("Enter a number from 1 to 7: ");
    scanf("%i", &dayOfWeek);

    switch (dayOfWeek) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid number. Please enter a number from 1 to 7.\n");
            break;
    }

    return 0;
}
