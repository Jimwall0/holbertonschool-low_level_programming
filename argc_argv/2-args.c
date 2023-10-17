#include <stdio.h>
int main(int argc, char *argv[])
{
  int num = 0;
  while (num < argc)
    {
      printf("%s\n", argv[num]);
      num++;
    }
  return (0);
}
