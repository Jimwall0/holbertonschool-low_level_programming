#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches for a set of array within another array
 * @s: string that is searched for occurances
 * @accept: string set that is being looked for
 * Return: char array
 */
char *_strpbrk(char *s, char *accept)
{
char *anw;
int list;
int loop;
for (list = 0; s[list] != '\0'; list++)
{
for (loop = 0; accept[loop] != '\0'; loop++)
{
if (s[list] == accept[loop])
{
anw = &s[list];
return (anw);
}
}
}
return (NULL);
}
