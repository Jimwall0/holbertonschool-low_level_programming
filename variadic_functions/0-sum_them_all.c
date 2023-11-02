#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
  unsigned int num = 0, sum = 0;
  va_list integers;
  va_start(integers, n);
  while (num < n)
    {
      if (n == 0)
	{
	  return (0);
	}
      sum += va_arg(integers, const unsigned int);
      num++;
    }
  va_end(integers);
  return (sum);
}
