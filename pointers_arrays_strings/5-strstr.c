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
  int list, loop, hlen = 0, nlen = 0;
 char *ans;
 while (needle[nlen] != '\0')
   {
     nlen++;
   }
 while (haystack[hlen] != '\0')
   {
     hlen++;
   }
 for (list = 0; haystack[list] < hlen; list++)
   {
     for (loop = 0; needle[loop] < nlen; loop++)
       {
	 if (haystack[list] == needle[loop] && haystack[list + 1] == needle[loop + 1])
	   {
	     ans = &haystack[list];
	     return (ans);
	   }
       }
   }
 return (NULL);
}
