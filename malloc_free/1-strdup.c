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
  while (*str)
    {
      array[num] = str[num];
      num++;
    }
  return (array);
}

int _strlen(char *s)
{
  int num;
  for (num = 0; *s; num++)
    {}
  return (num);
}
