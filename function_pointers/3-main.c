#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
  int (*p)(int, int);
  p = get_op_func(argv[2]);
  if (argc != 4)
    {
      printf("Error");
      return (98);
    }
  if (!p)
    {
      printf("Error");
      return (99);
    }
  printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
  return (0);
}

int atoi(char *str)
{
  int num, res = 0;
  for (num = 0; str[num] != '\0'; num++)
    {
      res = res * 10 + str[num] - '0';
    }
  return (res);
}
