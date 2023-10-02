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
l = i;
if (i % 2 != 0)
{
i--;
i = i / 2;
}
else
{
i = i / 2;
}
for (j = i; j <= l; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
