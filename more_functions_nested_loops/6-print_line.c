#include "main.h"
/**
 * print_line - prints a line across the screen
 * @n: how long the line is
 */
void print_line(int n)
{
int num = 1;
while (num <= n)
{
_putchar('_');
num++;
}
_putchar('\n');
}
