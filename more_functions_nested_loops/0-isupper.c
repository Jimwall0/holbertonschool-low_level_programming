#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: character to be checked
 * Return: 1 or 0 depending on the captialization
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar(c);
return (1);
}
else
{
_putchar(c);
return (0);
}
}
