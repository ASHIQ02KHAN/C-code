#include <stdio.h>

int main() {
    int choice;
    float value, convertedValue;

    printf("Unit Conversion Menu:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("3. Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter distance in kilometers: ");
            scanf("%f", &value);
            convertedValue = value * 0.621371;
            printf("Distance in miles: %.2f\n", convertedValue);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &value);
            convertedValue = (value * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", convertedValue);
            break;
        case 3:
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            convertedValue = value * 2.20462;
            printf("Weight in pounds: %.2f\n", convertedValue);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
