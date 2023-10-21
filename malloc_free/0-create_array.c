#include "main.h"
/**
 * create_array - creates an array within a certain size
 * @size: the limit
 * @c: value
 * Return: actual pointer
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size * sizeof(char));
unsigned int lint;
if (array == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
for (lint = 0; lint < size; lint++)
{
array[lint] = c;
}
return (array);
}
