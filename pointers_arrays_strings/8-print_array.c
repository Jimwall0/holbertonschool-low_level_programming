#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a array
 * @a: the array
 * @n: the amount to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
