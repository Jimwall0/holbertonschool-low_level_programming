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
  unsigned int ans;
  int list;
  int loop;
  for (list = 0; s[list] != '\0'; list++)
    {
      for (loop = 0; accept[loop] != '\0'; loop++)
	{
	  if (s[list] == accept[loop])
	    {
	      ans++;
	      break;
	    }
	  if (s[list] != accept[loop])
	    {
	      return (ans);
	    }
	}
    }
  return (ans);
}
