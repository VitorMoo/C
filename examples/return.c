#include <stdio.h>

// Non-void function: Calculates and returns the sum of two numbers
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = add(num1, num2); // Calling the non-void function

    printf("Sum: %d\n", result);

    return 0;
}
