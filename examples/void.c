#include <stdio.h>

// Void function: Calculates and prints the square and cube of a number
void calculateAndPrint(int number) {
    int square = number * number;
    int cube = number * number * number;
    
    printf("Number: %d\n", number);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);
}

int main() {
    int userInput;

    printf("Enter a number: ");
    scanf("%d", &userInput);

    calculateAndPrint(userInput); // Calling the void function

    return 0;
}
