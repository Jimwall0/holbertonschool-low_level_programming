#include "main.h"
/**
 * create_array - creates an array within a certain size
 * @size: the limit
 * @c: name
 * Return: actual pointer
 */
char *create_array(unsigned int size, char c)
{
  char *array = malloc(sizeof(int) * size);
  array[0] = c;
  return (array);
}
