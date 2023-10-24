#include "main.h"
/**
 * _calloc - ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *array;
  if (nmemb == 0 || size == 0)
    {
      return (NULL);
    }
  array = calloc(nmemb, size);
  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  return (array);
}
