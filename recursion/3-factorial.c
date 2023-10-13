#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: the number
 * Return: the factoorial
 */
int factorial(int n)
{
int num = 0;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
num = n * factorial(n - 1);
return (num);
}
