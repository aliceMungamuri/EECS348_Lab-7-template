#include "temperature.h"
#include <stdio.h>

/* Function to convert Celsius to Fahrenheit */
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

/* Function to convert Fahrenheit to Celsius */
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

/* Function to convert Celsius to Kelvin */
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

/* Function to convert Kelvin to Celsius */
float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

/* Additional function: Convert Fahrenheit to Kelvin */
float fahrenheit_to_kelvin(float fahrenheit) {
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
}

/* Additional function: Convert Kelvin to Fahrenheit */
float kelvin_to_fahrenheit(float kelvin) {
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin));
}

/* Function to categorize temperature and provide an advisory */
void categorize_temperature(float celsius) {
    if (celsius < 0) {
        printf("Category: Freezing - Wear a heavy coat!\n");
    } else if (celsius < 10) {
        printf("Category: Cold - Wear a jacket.\n");
    } else if (celsius < 25) {
        printf("Category: Comfortable - Enjoy your day!\n");
    } else if (celsius < 35) {
        printf("Category: Hot - Stay hydrated.\n");
    } else {
        printf("Category: Extreme Heat - Stay indoors and avoid direct sun.\n");
    }
}
