#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
  int num;
  if (array == NULL || size <= 0)
    {
      return (-1);
    }
  for (num = 0; num < size; num++)
    {
      if (cmp(array[num]) != 0)
	{
	  return (num);
	}
    }
  return (-1);
}
