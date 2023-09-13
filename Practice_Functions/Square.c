// Create a function in C that takes an integer as input and returns its square.

#include <stdio.h>

int SquareNumber(int a) {
    int Square = a * a;
    return Square;
}

int main() {
    int x;

    printf("Enter a number to be squared: ");
    scanf("%i", &x);

    int result = SquareNumber(x);

    printf("The square of %d is: %d\n", x, result);

    return 0;
}
