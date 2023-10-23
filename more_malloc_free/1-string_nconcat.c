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
unsigned int num, s1len, s2len;
if (s1 == NULL)
{s1 = ""; }
if (s2 == NULL)
{s2 = ""; }
s2len = _strlen(s2);
s1len = _strlen(s1);
if (n >= s2len)
{array = malloc(s2len + s1len + 2); }
else
{array = malloc(s1len + n + 1); }
if (array == NULL)
{free(array);
return (NULL); }
 for (num = 0; num < s1len; num++)
{
array[num] = s1[num];
}
if (n >= s2len)
{
for (num = 0; num < s2len; num++)
{
array[num + s1len] = s2[num];
}
}
else
{
for (num = 0; num <= n; num++)
{
array[num + s1len] = s2[num];
}
}
return (array);
}

/**
 * _strlen - gets length of string
 * @c: string
 * Return: unsigned return
 */
unsigned int _strlen(char *c)
{
unsigned int num;
for (num = 0; c[num] != '\0'; num++)
{
}
return (num);
}
