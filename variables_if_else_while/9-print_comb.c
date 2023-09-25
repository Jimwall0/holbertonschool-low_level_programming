#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers.
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar('0' + num);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
