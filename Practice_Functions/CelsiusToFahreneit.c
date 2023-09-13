// Write a function that converts a temperature from Celsius to Fahrenheit. 
// The function should take the temperature in Celsius as input and return the equivalent temperature in Fahrenheit.

#include <stdio.h>

float Converter(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main() {
    float temperatureCelsius;

    printf("Enter the temperature in Celsius to convert to Fahrenheit: \n");
    scanf("%f", &temperatureCelsius);

    float temperatureFahrenheit = Converter(temperatureCelsius);
    printf("%.2f", temperatureFahrenheit);

    return 0;
}
