#include "main.h"
/**
 * malloc_checked - TT
 * @b: TT
 */
void *malloc_checked(unsigned int b)
{
  unsigned int *array;
  array = malloc(b);
  if (array == NULL)
    {
      array[0] = 98;
    }
  return (array);
}
