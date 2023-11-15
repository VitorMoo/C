// BMI Calculator: Create a program that calculates a person's Body Mass Index (BMI).
// The user should provide their weight and height, and the program should display the weight category
// (underweight, normal, overweight, obesity).
#include <stdio.h>

int main() {
    float weight, height;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    if (bmi >= 30) {
        printf("Obesity\n");
    } else if (bmi >= 25) {
        printf("Overweight\n");
    } else if (bmi >= 18.5) {
        printf("Normal\n");
    } else {
        printf("Underweight\n");
    }

    return 0;
}
