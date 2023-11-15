// Exercise 2:
// Develop a C program that prompts the user to enter a month (an integer from 1 to 12) and then uses a switch case to print the number of days in that month. Disregard leap years.
#include <stdio.h>

int main() {
    int month;

    printf("Enter a number from 1 to 12 corresponding to a month of the year: ");
    scanf("%i", &month);

    switch (month) {
        case 1:
            printf("January\n 31 Days\n");
            break;
        case 2:
            printf("February\n 28 Days ");
            break;
        case 3:
            printf("March\n 31 Days ");
            break;
        case 4:
            printf("April\n 30 Days ");
            break;
        case 5:
            printf("May\n 31 Days ");
            break;
        case 6:
            printf("June\n 30 Days ");
            break;
        case 7:
            printf("July\n 31 Days ");
            break;
        case 8:
            printf("August\n 31 Days ");
            break;
        case 9:
            printf("September\n 30 Days");
            break;
        case 10:
            printf("October\n 31 Days ");
            break;
        case 11:
            printf("November\n 30 Days ");
            break;
        case 12:
            printf("December\n 31 Days ");
            break;
        default:
            printf("Invalid number. Enter a number from 1 to 12.\n");
            break;
    }

    return 0;
}
