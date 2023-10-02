#include "main.h"
/**
 * puts_half - prints the second half of array
 * @str: the array in question
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int l;
int j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
l = i / 2;
for (j = l - 1; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
}
else
{
for (j = l; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
