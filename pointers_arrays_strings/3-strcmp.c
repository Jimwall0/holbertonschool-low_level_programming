#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 1 0 -1 based on the answer
 */
int _strcmp(char *s1, char *s2)
{
if (_strlen(s1) < _strlen(s2))
{
return (-1);
}
else if (_strlen(s1) == _strlen(s2))
{
return (0);
}
else if (_strlen(s1) > _strlen(s2))
{
return (1);
}
else
{
return (0);
}
}
