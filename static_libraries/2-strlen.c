#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: an array of character
 * Return: int
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
