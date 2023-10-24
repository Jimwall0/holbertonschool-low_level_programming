#include "main.h"
/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: limited amount of byte for second string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *array;
unsigned int num = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
array = malloc(_strlen(s1) + _strlen(s2) + 1);
if (array == NULL)
{
free(array);
return (array);
}
while (num < _strlen(s1))
{
array[num] = s1[num];
num++;
}
num = 0;
if (n >= _strlen(s2))
{
while (num + _strlen(s1) < _strlen(s2) + _strlen(s1))
{
array[num + _strlen(s1)] = s2[num];
num++;
}
}
else
{
while (num + _strlen(s1) < _strlen(s1) + n)
{
array[num + _strlen(s1)] = s2[num];
num++;
}
}
array[num + _strlen(s1)] = '\0';
}
/**
 * _strlen - gets length of string
 * @c: string
 * Return: unsigned return
 */
unsigned int _strlen(char *c)
{
unsigned int num = 0;
while (c[num] != '\0')
{
num++;
}
return (num);
}
