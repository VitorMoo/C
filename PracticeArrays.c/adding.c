#include <stdio.h>

int main() {
    int i, n, array[100], position, value;

    printf("Enter the number of elements: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &array[i]);
    }

    printf("Enter the location you want to change the number: ");
    scanf("%i", &position);

    printf("Enter the new value: ");
    scanf("%i", &value);

    if (position >= 1 && position <= n) {
        for (i = n - 1; i >= position - 1; i--) {
            array[i + 1] = array[i];
        }

        array[position - 1] = value;

        printf("Updated array:\n");
        for (i = 0; i < n + 1; i++) {
            printf("%i\n", array[i]);
        }
    } else {
        printf("Invalid position. Please enter a valid position between 1 and %i.\n", n);
    }

    return 0;
}
