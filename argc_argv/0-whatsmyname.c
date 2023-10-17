#include <stdio.h>

int main (int argc, char *argv[])
{
  __attribute__((unused)) int unused_argc;
  printf("%s\n", argv[0]);
  return (0);
}
