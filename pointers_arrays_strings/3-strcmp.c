#include "main.h"
#include "2-strlen.c"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 1 0 -1 based on the answer
 */
int _strcmp(char *s1, char *s2)
{
int lin1, lin2;
lin1 = _strlen(s1);
lin2 = _strlen(s2);
if (lin1 < lin2)
{
return (-13);
}
else if (lin1 == lin2)
{
return (0);
}
else if (lin1 > lin2)
{
  return (13);
}
else
{
return (0);
}
}
