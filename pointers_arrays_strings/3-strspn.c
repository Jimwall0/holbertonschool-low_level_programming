#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a portion of an array
 * @accept: contains bytes to be moved to s
 * Return: counts how many bytes exist that are the same
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int alpha;
  int num;
  int loop;
  char *zap;
  for (num = 0; s[num] != '\0' && s[num] != zap[0]; num++)
    {
      for (loop = 0; accept[loop] != '\0'; loop++)
	{
	  if (s[num] == accept[loop])
	    {
	      zap = &s[num];
	    }
	}
    }
  for (num = 0; zap[num] != '\0'; num++)
    {
      for (loop = 0; accept[loop] != '\0'; loop++)
	{
	  if (zap[num] == accept[loop])
	    {
	      alpha++;
	    }
	}
    }
  return (alpha);
}
