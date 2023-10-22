#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
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
