#include "main.h"
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
