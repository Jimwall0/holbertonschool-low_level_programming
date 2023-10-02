#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: how big the triangle going to be
 */
void print_triangle(int size)
{
int i;
int sp;
int ha;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (sp = size - i; sp > 0; sp--)
{
_putchar(' ');
}
for (ha = 1; ha <= i; ha++)
{
_putchar('#');
}
_putchar('\n');
}
}
