#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
  unsigned int num, result;
  va_list numbers;
  va_start(numbers, n);
  if (separator == NULL)
    {
      for (num = 0; num < n; num++)
	{
	  result = va_arg(numbers, const unsigned int);
	  printf("%d", result);
	}
    }
  else
    {
      for (num = 0; num < n; num++)
        {
          result = va_arg(numbers, const unsigned int);
          printf("%d", result);
	  if (num != n - 1)
	    {
	      printf("%s", separator);
	    }
        }
    }
  printf("\n");
  va_end(numbers);
}
