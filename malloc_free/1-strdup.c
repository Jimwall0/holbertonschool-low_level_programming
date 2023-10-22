#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
  int loop = 0;
  char *dup;
  if (str == NULL)
    {
      return (NULL);
    }
  dup = malloc(sizeof(char) * (_strlen(str) + 1));
  if (dup == NULL)
  {
    return (NULL);
  }
  while (loop < _strlen(str))
    {
      dup[loop] = str[loop];
    }
  dup[loop] = '\0';
  return (dup);
}

int _strlen(char *s)
{
  int loop = 0;
  while (s[loop] != '\0')
    {
      loop++;
    }
  return (loop);
}
