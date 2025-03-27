#include "temperature.h"
#include <stdio.h>

/* convert cel to fahren - eqn from stack over flow - same for others*/
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

/*  Fahrenheit to Celsius */
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

/* Celsius to Kelvin */
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

/*  Kelvin to Celsius */
float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

/*  Convert Fahrenheit to Kelvin */
float fahrenheit_to_kelvin(float fahrenheit) {
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
}

/*  Kelvin to Fahrenheit */
float kelvin_to_fahrenheit(float kelvin) {
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin));
}

/* Function to categorize and give a blurb */
void categorize_temperature(float celsius) {
    if (celsius < 0) {
        printf("Category: Freezing - Bundle up and drink hot cocoa  its soooooo cold\n");
    } else if (celsius < 10) {
        printf("Category: Cold - Wear a coat and your scarf its chilly!.\n");
    } else if (celsius < 25) {
        printf("Category: Comfortable - Not too hot not too cold wear what you want!!\n");
    } else if (celsius < 35) {
        printf("Category: Hot - Drink some water youll be sweating.\n");
    } else {
        printf("Category: Extreme Heat - DONT go outside - your shoes will melt\n");
    }
}
