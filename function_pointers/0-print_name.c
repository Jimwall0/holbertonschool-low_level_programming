#include "head.h"
/**
 * print_name - prints a name
 */
void print_name(char *name, void (*f)(char *))
{
  f(name);
}
