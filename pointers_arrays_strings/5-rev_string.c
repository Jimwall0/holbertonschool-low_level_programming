#include "main.h"
/**
 * rev_string - reverse and change the value
 * @s: array of charcter
 * Return: void
 */
void rev_string(char *s)
{
  int j;
  int i = 0;
  char n;
  while (s[i] != '\0')
    {
      i++;
    }
  for (j = i - 1; j >= 0; j--)
    {
      n = s[j];
      s[j] = s[i - 1 - j];
      s[i - 1 -j] = n;
    }
}
