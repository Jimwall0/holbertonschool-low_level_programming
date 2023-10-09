#include "main.h"
#include "2-strlen.c"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a portion of an array
 * @accept: contains bytes to be moved to s
 * Return: counts how many bytes exist that are the same
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int ans = 0;
  int list;
  for (list = 0; s[list] != '\0'; list++)
    {
      if (s[list] == accept[ans])
	{
	  ans++;
	}
    }
  return (ans);
}
