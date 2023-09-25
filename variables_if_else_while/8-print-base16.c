#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16
 * in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
char are;
int num;
for (num = 0; num < 10; num++)
{
putchar(num);
}
for (are = 'a'; are <= 'f'; are++)
{
putchar(are);
}
putchar('\n');
return (0);
}
