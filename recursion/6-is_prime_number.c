#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number being checked
 * Return: yes/no
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (countprime(n, 2));
}
/**
 * countprime - divide the number until it becomes prime
 * @num: a number
 * @loop: int to hold the counter
 * Return: always 0
 */
int countprime(int num, int loop)
{
float ans;
ans = num % loop;
if (num < 0)
{
return (0);
}
else if (loop > num - 1)
{
return (1);
}
else if (ans == 0)
{
return (0);
}
return (countprime(num, loop + 1));
}
