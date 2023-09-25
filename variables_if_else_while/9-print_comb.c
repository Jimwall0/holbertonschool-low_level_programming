#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int num;
int sum;
for (num = 0; num < 10; num++)
{
putchar('0' + num);
for (sum = 0; sum < 9; sum++)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
