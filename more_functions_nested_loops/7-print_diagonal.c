#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: how many times to print the line
 */
void print_diagonal(int n)
{
int num;
for (num = 1; num < n; num++)
{
_putchar(' ');
}
if (n <= 0)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
}
