#include "main.h"
/**
 * swap_int - swaps the value of two int var
 * @a: first value
 * @b: second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
