#include "1-strdup.c"
#include "main.h"
/**
 * str_concat - concatenates to string
 * @s1 - first string
 * @s2 - second string
 * Return: string or NULL
 */
char *str_concat(char *s1, char *s2)
{
  int loop;
  char *array;
  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  array = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
  if (array == NULL)
    {
      return (NULL);
    }
  for (loop = 0; s1[loop] != '\0'; loop++)
    {
      array[loop] = s1[loop];
    }
  for (loop = 0; s2[loop] != '\0'; loop++)
    {
      array[loop + _strlen(s1)] = s2[loop];
    }
  array[loop + 1 + _strlen(s1)] = '\0';
  return (array);
}
