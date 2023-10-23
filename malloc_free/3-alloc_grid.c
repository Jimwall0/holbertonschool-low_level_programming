#include "main.h"
/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the first array
 * @height: the second array
 * Return: dereference the specific value in the array
 */
int **alloc_grid(int width, int height)
{
int **array, num, loop, hoop;
if (width <= 0 || height <= 0)
{
return (NULL);
}
array = malloc(sizeof(int *) * height);
if (array == NULL)
{
return (NULL);
}
for (num = 0; num < width; num++)
{
array[num] = malloc(sizeof(int) * width);
if (array[num] == NULL)
{
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
free(array);
return (array);
}
