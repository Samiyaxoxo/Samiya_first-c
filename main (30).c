
#include <stdio.h>

//
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

//
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature, convertedTemperature;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        convertedTemperature = celsiusToFahrenheit(temperature);
        printf("%.2lf Celsius is %.2lf Fahrenheit\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        convertedTemperature = fahrenheitToCelsius(temperature);
        printf("%.2lf Fahrenheit is %.2lf Celsius\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}