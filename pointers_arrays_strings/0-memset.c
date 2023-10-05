#include "main.h"
/**
 * _memset - sets a memory
 * @s: return pointer
 * @b: char that to be set
 * @n: an unsigned int reping the byte
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int num;
for (num = 0; s[num] != '\0' && num <= n; num++)
{
s[num] = b;
}
return (s);
}
