#include "main.h"
/**
 * _strncpy - copy string
 * @dest: where you put the coppied string
 * @src: the string you are copying
 * @n: Byte value
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int num;
for (num = 0; src[num] != '\0' && num < n; num++)
{
dest[num] = src[num];
}
while (num < n)
{
dest[num] = '\0';
}
return (dest);
}
