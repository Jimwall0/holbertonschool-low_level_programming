#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
  long unsigned int num;
  if (array == NULL || action == NULL)
    {
      return;
    }
  for (num = 0; num < size; num++)
    {
      action(array[num]);
    }
}
