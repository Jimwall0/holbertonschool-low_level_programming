#include "main.h"
/**
 * print_most_numbers - prints a range of numbers besides a few exection
 * Return: shouldn't be anything
 */
void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar(c);
}
}
_putchar('\n');
}
