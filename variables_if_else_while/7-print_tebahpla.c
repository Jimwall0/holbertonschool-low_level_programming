#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabegt in reverse,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
char are;
for (are = 'z'; are >= 'a'; are--)
{
putchar(are);
}
putchar('\n');
return (0);
}
