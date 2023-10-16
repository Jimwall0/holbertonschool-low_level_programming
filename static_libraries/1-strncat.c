#include "main.h"
/**
 * _strncat - concatenates two strings based on bytes
 * @dest: final destination
 * @src: appendeng string
 * @n: a int
 * Return: a char
 */
char *_strncat(char *dest, char *src, int n)
{
int num = 0;
int srcnum = 0;
int total = 0;
while (dest[num] != '\0')
{
num++;
}
while (src[srcnum] != '\0' && srcnum < n)
{
total = num + srcnum;
dest[total] = src[srcnum];
srcnum++;
}
return (dest);
}
