#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: how big the triangle going to be
 */
void print_triangle(int size)
{
int n1;
int n2;
int n3;
if (size <= 0)
{
_putchar('\n');
}
for (n1 = 0; n1 > size; n1++)
{
for (n2 = size; n2 < n1; n2--)
{
_putchar(' ');
}
for (n3 = n1; n3 < n1; n3++)
{
_putchar('#');
}
}
_putchar('\n');
}
