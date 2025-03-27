#include "temperature.h"
#include <stdio.h>

/* Function to display the menu and get user choice */
char get_scale_choice() {
    char scale;
    printf("Select the temperature scale (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &scale);
    return scale;
}

int main() {
    float temp_input, temp_converted;
    char input_scale, target_scale;

    while (1) {
        /* Get the input temperature */
        printf("\nEnter the temperature value (or -999 to exit): ");
        scanf("%f", &temp_input);

        /* Exit condition */
        if (temp_input == -999) {
            printf("Exiting program.\n");
            break;
        }

        /* Get valid input scale */
        input_scale = get_scale_choice();
        while (input_scale != 'C' && input_scale != 'F' && input_scale != 'K') {
            printf("Invalid choice. Please enter C, F, or K.\n");
            input_scale = get_scale_choice();
        }

        /* Get valid target scale */
        target_scale = get_scale_choice();
        while (target_scale != 'C' && target_scale != 'F' && target_scale != 'K') {
            printf("Invalid choice. Please enter C, F, or K.\n");
            target_scale = get_scale_choice();
        }

        /* Handle invalid Kelvin input */
        if (input_scale == 'K' && temp_input < 0) {
            printf("Error: Kelvin temperature cannot be negative.\n");
            continue;
        }

        /* Perform conversion */
        if (input_scale == target_scale) {
            temp_converted = temp_input;
        } else if (input_scale == 'C' && target_scale == 'F') {
            temp_converted = celsius_to_fahrenheit(temp_input);
        } else if (input_scale == 'C' && target_scale == 'K') {
            temp_converted = celsius_to_kelvin(temp_input);
        } else if (input_scale == 'F' && target_scale == 'C') {
            temp_converted = fahrenheit_to_celsius(temp_input);
        } else if (input_scale == 'F' && target_scale == 'K') {
            temp_converted = fahrenheit_to_kelvin(temp_input);
        } else if (input_scale == 'K' && target_scale == 'C') {
            temp_converted = kelvin_to_celsius(temp_input);
        } else if (input_scale == 'K' && target_scale == 'F') {
            temp_converted = kelvin_to_fahrenheit(temp_input);
        } else {
            printf("Conversion error.\n");
            continue;
        }

        /* Display the result */
        printf("Converted Temperature: %.2f %c\n", temp_converted, target_scale);

        /* Categorize the temperature (using Celsius as reference) */
        float temp_in_celsius;
        if (target_scale == 'C') {
            temp_in_celsius = temp_converted;
        } else if (target_scale == 'F') {
            temp_in_celsius = fahrenheit_to_celsius(temp_converted);
        } else {
            temp_in_celsius = kelvin_to_celsius(temp_converted);
        }
        categorize_temperature(temp_in_celsius);
    }

    return 0;
}
