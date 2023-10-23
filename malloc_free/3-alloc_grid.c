#include "main.h"
/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the first array
 * @height: the second array
 * Return: dereference the specific value in the array
 */
int **alloc_grid(int width, int height)
{
  int **array, num, num2, loop, hoop;
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  array = malloc(sizeof(int *) * height);
  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  for (num = 0; num < height; num++)
    {
      array[num] = malloc(sizeof(int) * width);
      if (array[num] == NULL)
	{
	  for (num2 = num; num2 >= num; num2--)
	    {
	      free(array[num2]);
	    }
	  free(array);
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
