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
int srcl = 0;
while (src[srcl] != '\0' && srcl > n)
{
dest[srcl] = src[srcl];
srcl++;
}
return (dest);
}
