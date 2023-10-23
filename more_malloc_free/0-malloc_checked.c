#include "main.h"
/**
 * malloc_checked - TT
 * @b: TT
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
unsigned int *array;
array = malloc(b);
if (array == NULL)
{
exit(98);
}
return (array);
}
