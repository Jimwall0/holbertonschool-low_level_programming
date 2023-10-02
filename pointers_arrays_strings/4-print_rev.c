#include "main.h"
/**
 * print_rev - prints the array of characters in reverse
 * @s: points to the value of var
 * Return: void
 */
void print_rev(char *s)
{
int i;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i; j <= 0; j--)
{
_putchar(s[j]);
}
}
