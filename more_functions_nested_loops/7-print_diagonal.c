#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: how many times to print the line
 */
void print_diagonal(int n)
{
int line;
int num;
for (num = 0; num < n; num++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 1; line < num; line++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
