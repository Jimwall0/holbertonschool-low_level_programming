#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
  int num = 0;
  char *array = malloc(_strlen(str) * sizeof(char));
  if (str == NULL)
    {
      return (NULL);
    }
  while (*str)
    {
      array[num] = str[num];
      num++;
    }
  return (array);
}

int _strlen(char *s)
{
  int num = 0;
  while (*s)
    {
      num++;
    }
  return (num);
}
