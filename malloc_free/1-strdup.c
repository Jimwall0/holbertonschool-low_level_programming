#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
int num = 0;
char *dup;
if (str == NULL)
{
return (NULL);
}
dup = malloc(sizeof(char) * (_strlen(str) + 1));
if (dup == NULL)
{
return (NULL);
}
while (num < _strlen(str))
{
dup[num] = str[num];
num++;
}
return (dup);
}
/**
 * _strlen - gets the length of a string
 * @s: the string
 * Return: the size of the string
 */
int _strlen(char *s)
{
int loop = 0;
while (s[loop] != '\0')
{
loop++;
}
return (loop);
}
