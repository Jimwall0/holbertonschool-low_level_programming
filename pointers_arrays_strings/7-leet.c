#include "main.h"
/**
 * leet - encript the string
 * @arr: to be encripted
 * Return: char
 */
char *leet(char *arr)
{
char lcas[] = {'a', 'e', 'o', 't', 'l'};
char ucas[] = {'A', 'E', 'O', 'T', 'L'};
int num[] = {4 + '0', 3 + '0', 0 + '0', 7 + '0', 1 + '0'};
int loop;
int five;
for (loop = 0; arr[loop] != '\0'; loop++)
{
for (five = 0; five < 5; five++)
{
if (arr[loop] == lcas[five] || arr[loop] == ucas[five])
{
arr[loop] = num[five];
}
}
}
return (arr);
}
