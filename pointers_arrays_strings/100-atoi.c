#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the integer value
 */
int _atoi(char *s)
{
    int sign = 1; // Initialize the sign as positive
    int result = 0;
    int i = 0;

    // Handle leading spaces
    while (s[i] == ' ')
    {
        i++;
    }

    // Check for a sign character (+ or -)
    if (s[i] == '-')
    {
        sign = -1; // If negative sign is found, set the sign to negative
        i++;
    }
    else if (s[i] == '+')
    {
        i++; // If positive sign is found, skip it
    }

    // Iterate through the string and convert numeric characters to integers
    while (s[i] >= '0' && s[i] <= '9')
    {
        // Calculate the result using each digit
        result = result * 10 + (s[i] - '0');
        i++;
    }

    // Apply the sign to the result and return
    return sign * result;
}
