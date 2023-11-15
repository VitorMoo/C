// 8) Procedure that calculates and returns the square and cube of a number.
#include<stdio.h>

void SquareCube(int a, int *c, int *q) {
    *q = a * a;
    *c = a * a * a;
}

int main() {
    int x = 5, square, cube;

    SquareCube(x, &cube, &square);

    printf("Square: %i\nCube: %i\n", square, cube);

    return 0;
}
