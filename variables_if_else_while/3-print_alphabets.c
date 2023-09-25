#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char mychar;
for (mychar = 'a'; mychar <= 'z'; mychar++)
{
putchar(mychar);
}
for (mychar = 'A'; mychar <= 'Z'; mychar++)
{
putchar(mychar);
}
putchar('\n');
return (0);
}
