#ifndef __REPORT_H__
#define __REPORT_H__

/* Function declarations */

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * @param celsius The temperature in Celsius
 * @return float The converted temperature in Fahrenheit
 */
float celsius_to_fahrenheit(float celsius);

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * @param fahrenheit The temperature in Fahrenheit
 * @return float The converted temperature in Celsius
 */
float fahrenheit_to_celsius(float fahrenheit);

/**
 * @brief Convert temperature in Celsius to Kelvin
 * @param celsius The temperature in Celsius
 * @return float The converted temperature in Kelvin
 */
float celsius_to_kelvin(float celsius);

/**
 * @brief Convert temperature in Kelvin to Celsius
 * @param kelvin The temperature in Kelvin
 * @return float The converted temperature in Celsius
 */
float kelvin_to_celsius(float kelvin);

/**
 * @brief Convert temperature in Fahrenheit to Kelvin
 * @param fahrenheit The temperature in Fahrenheit
 * @return float The converted temperature in Kelvin
 */
float fahrenheit_to_kelvin(float fahrenheit);

/**
 * @brief Convert temperature in Kelvin to Fahrenheit
 * @param kelvin The temperature in Kelvin
 * @return float The converted temperature in Fahrenheit
 */
float kelvin_to_fahrenheit(float kelvin);

/**
 * @brief Categorize the temperature and provide a weather advisory
 * @param celsius The temperature in Celsius
 */
void categorize_temperature(float celsius);

#endif /* __REPORT_H__ */
