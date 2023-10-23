#include "main.h"
/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the first array
 * @height: the second array
 * Return: dereference the specific value in the array
 */
int **alloc_grid(int width, int height)
{
int **array, loop, hoop, x, y;

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

for (loop = 0; loop < height; loop++)
{
array[loop] = malloc(sizeof(int) * width);
if (array[loop] == NULL)
{
for (hoop = loop; hoop >= 0; hoop--)
{
free(array[hoop]);
}
free(array);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
array[x][y] = 0;
}
}
return (array);
}
