#include <stdio.h>
/**
 * main - prints the alphabet in lowercase besides 'q' and 'e'
 * Return: 0
 */
int main(void)
{
char are;
for (are = 'a'; are <= 'z'; are++)
{
if (are != 'q' && are != 'e')
{
putchar(are);
}
}
putchar('\n');
return (0);
}
