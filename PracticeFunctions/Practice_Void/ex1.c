// 2) Procedure that swaps the values of two variables.
#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int ball = 10;
    int square = 20;

    printf("\n%i %i", ball, square);

    swap(&ball, &square);

    printf("\n%i %i", ball, square);

    return 0;
}
