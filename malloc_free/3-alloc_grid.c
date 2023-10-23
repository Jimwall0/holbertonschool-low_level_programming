#include "main.h"
/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the first array
 * @height: the second array
 * return: dereference the specific value in the array
 */
int **alloc_grid(int width, int height)
{
  int **array, loop, hoop, count;
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  array = malloc(sizeof(int*) * height - 1);
  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  for (count = 0; count < width; count++)
    {
      array[count] = malloc(sizeof(int) * width - 1);
      if (array[count] == NULL)
	{
	  free(array[count]);
	  return (NULL);
	}
    }
  for (loop = 0; loop < height; loop++)
    {
      for (hoop = 0; hoop < width; hoop++)
	{
	  array[loop][hoop] = 0;
	}
    }
  return (array);
}
