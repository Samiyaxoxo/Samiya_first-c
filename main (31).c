
#include <stdio.h>

//
double metersToKilometers(double meters) {
    return meters / 1000.0;
}

// 
double kilometersToMeters(double kilometers) {
    return kilometers * 1000.0;
}

// 
double gramsToKilograms(double grams) {
    return grams / 1000.0;
}

// 
double kilogramsToGrams(double kilograms) {
    return kilograms * 1000.0;
}

int main() {
    int choice;
    double value, convertedValue;

    printf("Unit Conversion Program\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Kilograms to Grams\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value in meters: ");
            scanf("%lf", &value);
            convertedValue = metersToKilometers(value);
            printf("%.2lf meters is %.2lf kilometers\n", value, convertedValue);
            break;
        case 2:
            printf("Enter value in kilometers: ");
            scanf("%lf", &value);
            convertedValue = kilometersToMeters(value);
            printf("%.2lf kilometers is %.2lf meters\n", value, convertedValue);
            break;
        case 3:
            printf("Enter value in grams: ");
            scanf("%lf", &value);
            convertedValue = gramsToKilograms(value);
            printf("%.2lf grams is %.2lf kilograms\n", value, convertedValue);
            break;
        case 4:
            printf("Enter value in kilograms: ");
            scanf("%lf", &value);
            convertedValue = kilogramsToGrams(value);
            printf("%.2lf kilograms is %.2lf grams\n", value, convertedValue);
            break;
        default:
            printf("Invalid choice. Please run the program again.\n");
            break;
    }

    return 0;
}