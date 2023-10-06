#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a portion of an array
 * @accept: contains bytes to be moved to s
 * Return: counts how many bytes exist that are the same
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;
int loop;
for (; s[num] != '\0'; num++)
{
for (loop = 0; accept[loop] != '\0'; loop++)
{
if (s[num] == accept[loop])
{
num += 1;
}
}
}
return (num);
}
