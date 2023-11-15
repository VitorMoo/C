// Write a C program that prompts the user for a positive integer N and then calculates and prints
#include <stdio.h>

int main() {
    int N;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("The number must be positive.\n");
        return 1;  // Terminate the program with an error code
    }

    int counter = 1;
    int sum = 0;

    while (counter <= N) {
        sum += counter;
        counter++;
    }

    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}
