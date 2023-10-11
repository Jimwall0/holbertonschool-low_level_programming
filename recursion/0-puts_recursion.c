#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: char array that should be a string
 * Return: void
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      _putchar('\n');
      return;
    }
  else if (*s)
    {
      _putchar(*s);
      _puts_recursion(s + 1);
    }
}
