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
  int max_length = _strlen(s);
  int loop;
  int answer;
  unsigned int asw;
  for (loop = 0; loop < _strlen(accept); loop++)
    {
      if (answer == max_length)
	{
	  break;
	}
      if (accept[loop] == s[answer])
	{
	  answer++;
	}
    }
  asw = answer;
  return (asw);
}
