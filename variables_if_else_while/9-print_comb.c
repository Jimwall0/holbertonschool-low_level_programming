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
if (num !=9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
