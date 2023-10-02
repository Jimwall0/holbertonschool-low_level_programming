#include "main.h"
/**
 * print_square - prints a square made of hashtags
 * @size: the size of the square
 */
void print_square(int size)
{
int num1;
int num2;
if (size <= 0)
{
_putchar('\n');
}
for (num1 = 0; num1 < size; num1++)
{
for (num2 = 0; num2 < size; num2++)
{
_putchar('#');
}
_putchar('\n');
}
}
