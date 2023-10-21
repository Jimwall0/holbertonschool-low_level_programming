#include "main.h"
/**
 * create_array - creates an array within a certain size
 * @size: the limit
 * @c: value
 * Return: actual pointer
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int num;
if (size == 0)
{
return (NULL);
}
array = malloc(size) * sizeof(unsigned int);
if (array == NULL)
{
return (NULL);
}
for (num = 0; num < size; num++)
{
array[num] = c;
}
return (array);
}
