#include "main.h"
/**
 * print_line - prints a line across the screen
 * @n: how long the line is
 */
void print_line(int n)
{
int num;
while (num <= n)
{
if (n <= 0)
{
_putchar('\n');
num = (n + 1);
}
else
{
_putchar('_');
num++;
}
}
}
