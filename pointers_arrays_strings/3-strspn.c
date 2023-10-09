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
  unsigned int loop = 0;
  unsigned int subthis;
  while (s[loop] != accept)
    {
      loop++;
    }
  subthis = loop;
  while (s[loop] == accept)
    {
      loop++;
    }
  num = loop - subthis;
  return (num);
}
