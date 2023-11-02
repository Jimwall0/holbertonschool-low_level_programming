#include <stddef.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
  };
  int i = 0;
  while (i < 5)
    {
      if (strcmp(s, ops[i].op) == 0)
	{
	  return (ops[i].f);
	}
      i++;
    }
  return (0);
}

int strcmp(const char* str1, const char* str2)
{
  int loop;
  for (loop = 0; str1[loop] != '\0'; loop++)
    {
      if (str1[loop] > str2[loop])
	{
	  return (1);
	}
      if (str1[loop] < str2[loop])
	{
	  return (1);
	}
    }
  return (0);
}
