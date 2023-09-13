// 6) Function that returns the maximum of two numbers.

#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x = 550, y = 100;
    int m = maximum(x, y);
    printf("The maximum of %i and %i is %i\n", x, y, m);

    return 0;
}
