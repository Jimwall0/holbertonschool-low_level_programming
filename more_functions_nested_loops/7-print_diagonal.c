#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: how many times to print the line
 */
void print_diagonal(int n)
{
int num = 1;
int line;
while (num <= n)
{
for (line = 1; line < n; line++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
num++;
}
}

