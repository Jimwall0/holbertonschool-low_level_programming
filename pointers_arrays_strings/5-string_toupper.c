#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @arr: string to be uppercased
 * Return: uppercased string
 */
char *string_toupper(char *arr)
{
int num;
for (num = 0; arr[num] != '\0'; num++)
{
if (arr[num] >= 'a' && arr[num] <= 'z')
{
arr[num] = 'A';
}
}
return (arr);
}
