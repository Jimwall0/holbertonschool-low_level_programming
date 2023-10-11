#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string we need to find the length of.
 * Return: How long is the string?
 */
int _strlen_recursion(char *s)
{
int num = 0;
if (*s)
{
num++;
num = num + _strlen_recursion(s + 1);
}
return (num);
}
