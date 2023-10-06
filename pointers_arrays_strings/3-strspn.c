#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a portion of an array
 * @accept: contains bytes to be moved to s
 * Return: counts how many bytes exist that are the same
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num;
int loop;
int circle;
for (circle = 0; s[circle] != '\0'; num++)
{
for (loop = 0; accept[loop] != '\0'; loop++)
{
if (s[circle] == accept[loop])
{
num++;
}
}
}
return (num);
}
