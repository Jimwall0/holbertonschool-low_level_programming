#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 */
int main(int argc, char *argv[])
{
  int num = 0;
  (void) argv;
  while (num < argc)
    {
      num++;
    }
  printf("%i\n", num);
  return (0);
}
