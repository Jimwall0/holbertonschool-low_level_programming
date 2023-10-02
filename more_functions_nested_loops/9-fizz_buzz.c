#include <stdio.h>
/**
 * main - for the code to be placed
 * Return: 0
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
if (num != 100)
{
putchar(' ');
}
}
else if (num % 5 == 0)
{
printf("Buzz");
if (num != 100)
{
putchar(' ');
}
}
else if (num % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else
{
printf("%d", num);
putchar(' ');
}
}
putchar('\n');
return (0);
}
