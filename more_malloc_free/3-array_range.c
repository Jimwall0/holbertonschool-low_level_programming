#include "main.h"
/**
 *
 */
int *array_range(int min, int max)
{
  int *array, num = 0;
  if (min > max)
    {
      return (NULL);
    }
  array = malloc(sizeof(int) * (max - min));
  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  for (; min < max; min++)
    {
      array[num] = min;
      num++;
    }
  return (array);
}
