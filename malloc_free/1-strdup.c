#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
  int num = 0, loop = _strlen(str);
  char *array = malloc((loop * sizeof(char)) + 1);
  if (str == NULL)
    {
      return (NULL);
    }
  else if (array == NULL)
    {
      return (NULL);
    }
  while (num < loop)
    {
      array[num] = str[num];
      num++;
    }
  array[num] = '\0';
  return (array);
}

int _strlen(char *s)
{
  int num = 0;
  while (s[num] != '\0')
    {
      num++;
    }
  return (num);
}
