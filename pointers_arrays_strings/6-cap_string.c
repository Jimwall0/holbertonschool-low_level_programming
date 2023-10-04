#include "main.h"
/**
 * cap_string - turns all lower case to upper case
 * @arr: string
 * Return: uppercased char
 */
char *cap_string(char *arr)
{
int num;
for (num = 0; arr[num] != '\0'; num++)
{
if (arr[num] >= 'A' && arr[num] <= 'Z')
{
arr[num] = arr[num] + 32;
}
}
return (arr);
}
