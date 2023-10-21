#include "main.h"
/**
 * create_array - creates an array within a certain size
 * @size: the limit
 * @c: value
 * Return: actual pointer
 */
char *create_array(unsigned int size, char c)
{
  char *array = malloc(sizeof(unsigned int) * (size + 1));
  unsigned int num;
  if (array == NULL)
    {
      return (NULL);
    }
  for (num = 0; num < size; num++)
    {
      array[num] = c;
    }
  return (array);
}
