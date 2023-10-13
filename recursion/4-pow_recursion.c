#include "main.h"
/**
 * _pow_recursion - raises x to the power of y
 * @x: number to be raised
 * @y: power
 * Return: total
 */
int _pow_recursion(int x, int y)
{
  int num;
  if (y > 0)
    {
      return (-1);
    }
  num = x * x;
  if (y == 1)
    {
      _pow_recursion(x, y - 1);
      return (num);
    }
}
