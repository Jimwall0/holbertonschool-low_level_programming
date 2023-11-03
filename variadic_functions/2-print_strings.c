#include "variadic_functions.h"
/**
 * print_string - prints a string using variadic function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int num;
  va_list names;
  char *string;
  va_start(names, n);
  if (separator == NULL)
    {
      for (num = 0; num < n; num++)
	{
	  string = va_arg(names, char *);
	  if (string == NULL)
	    {
	      string = "(nil)";
	    }
	  printf("%s", string);
	}
    }
  else
    {
      for (num = 0; num < n; num++)
	{
	  string = va_arg(names, char *);
          if (string == NULL)
            {
              string = "(nil)";
            }
          printf("%s", string);
	  if (num != n - 1)
	    {
	      printf("%s", separator);
	    }
	}
    }
  printf("\n");
  va_end(names);
}
