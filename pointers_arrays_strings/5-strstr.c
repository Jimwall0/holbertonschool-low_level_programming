#include <stddef.h>
#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: where to look
 * @needle: what to find
 * Return: pointer to start location
 */
char *_strstr(char *haystack, char *needle)
{
int list;
int loop;
 int nlength;
 char *ans;
 while (needle[nlength] != '\0')
   {
     nlength++;
   }
  for (list = 0; haystack[list] != '\0'; list++)
    {
      for (loop = 0; needle[loop] != '\0'; loop++)
	{
	  if (haystack[list] == needle[loop] && loop == nlength - 1)
	    {
	      ans = &haystack[list];
	      return (ans);
	    }
	}
    }
  return (NULL);
}
