#include "main.h"
/**
 * _sqrt_recursion - gets the natural square root
 * @n: number being squared
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
  if (n < 0)
    {
      return (-1);
    }
  return countroot(n, 0);
}

int countroot(int num, int root)
{
  if (num < 0 || root > num)
    {
      return (-1);
    }
  else if (root * root == num)
    {
      return (root);
    }
  else
    {
      return countroot(num, root + 1);
    }
}
