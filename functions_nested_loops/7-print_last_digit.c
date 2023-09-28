#include "main.h"
/**
 * print_last_digit - should print the last digit
 * @x: last digit to be printed
 * Return: last digit
 */
int print_last_digit(int x)
{
int tot = x % 10;
_putchar(x + '0');
return (tot);
}
