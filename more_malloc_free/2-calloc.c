#include "main.h"
/**
 * _calloc - initialize and assignes 0
 * @nmemb: number of elements
 * @size: the amount of mememory for each element
 * Return: pointer
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
