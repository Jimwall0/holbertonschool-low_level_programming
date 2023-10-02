#include "main.h"
/**
 * puts_half - prints the second half of array
 * @str: the array in question
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
{
i++;
}
while (str[j] != '\0')
{
if (j >= i / 2)
{
_putchar(str[j]);
}
j++;
}
_putchar('\n');
}
