#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
char car;
int num;
for (num = 0; num < 10; num++)
{
for (car = 'a'; car <= 'z'; car++)
{
_putchar(car);
}
_putchar('\n');
}
}
