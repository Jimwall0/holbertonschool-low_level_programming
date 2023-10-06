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
int num;
int loop;
for (num = 0; s[num] != '\0'; num++)
{
for (loop = 0; accept[loop] != '\0'; loop++)
{
if (s[num] == accept[loop])
{
anw = &s[num];
}
}
}
return (anw);
}
