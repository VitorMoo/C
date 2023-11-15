//4) Funcion that verifiy if the number is even.

#include <stdio.h>

int PairNumber(int a) {
    if (a % 2 == 0) {
        return 1; // Retorna 1 para indicar que o número é par
    } else {
        return 0; // Retorna 0 para indicar que o número é ímpar
    }
}
int main() {
    int result;
    int Number;
    printf("Enter a number to verify if it's even: ");
    scanf("%i", &Number);

    result = PairNumber(Number);

    if (result == 1) {
    printf("The number is even : %i",Number);
    } else {
    printf("The number is odd : %i",Number);
    }

    return 0;
}
