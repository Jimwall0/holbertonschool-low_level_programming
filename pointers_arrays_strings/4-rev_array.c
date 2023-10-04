#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: the byte
 */
void reverse_array(int *a, int n)
{
int revA;
int num;
for (num = 0; num < n / 2; num++)
{
revA = a[num];
a[num] = a[n - 1 - num];
a[n - 1 - num] = revA;
}
}
