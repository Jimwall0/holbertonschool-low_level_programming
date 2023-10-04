#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: the string that needs the null character removed
 * @src: String to be added at the end
 * Return: needs to return a pointer
 */
char *_strcat(char *dest, char *src)
{
int destlength = 0;
int srclength = 0;
while (dest[destlength] != '\0')
{
destlength++;
}
while (src[srclength] != '\0')
{
int destsrc = destlength + srclength;
dest[destsrc] = src[srclength];
srclength++;
}
return (dest);
}
