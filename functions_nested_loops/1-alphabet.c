#include "main.h"
/**
 * print_alphabet - write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return:0
 */
void print_alphabet(void)
{
char car;
for (car = 'a'; car <= 'z'; car++)
{
_putchar(car);
}
_putchar('\n');
}
