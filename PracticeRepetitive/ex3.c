// Exercise 2: Multiplication Table
// Develop a program that asks the user to enter an integer and then prints the multiplication table of that number from 1 to 10.

#include<stdio.h>

int main()
{
    int n;
    int product = 0;

    printf("Enter an integer to see the multiplication table from 1 to 10: ");
    scanf("%i", &n);

    if (n < 0)
    {
        printf("ERROR, Enter a positive integer.\n");
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            product = n * i;
            printf("%i\n", product);
        }
    }

    return 0;
}
