#include "main.h"
/**
 * _memcpy - copies char pointer to another char pointer
 * @dest: char pointer to be added to
 * @src: char that is being copying somewhere
 * @n: byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int num;
for (num = 0; src[num] != '\0' && num < n; num++)
{
dest[num] = src[num];
}
dest[n - 1] = src[n - 1];
return (dest);
}
