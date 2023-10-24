#include "main.h"
/**
 * array_range - returns pointer to range of number
 * @min: starting point
 * @max: end point
 * Return: pointer to stored location
 */
int *array_range(int min, int max)
{
int *array, num = 0;
if (min > max)
{
return (NULL);
}
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
free(array);
return (NULL);
}
for (; min <= max; min++)
{
array[num] = min;
num++;
}
return (array);
}
