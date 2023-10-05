#include "main.h"
/**
 * cap_string - turns all lower case to upper case
 * @arr: string
 * Return: uppercased char
 */
char *cap_string(char *arr)
{
int num;
char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int loop;
for (num = 0; arr[num] != '\0'; num++)
{
if (num == 0)
{
if (arr[num] >= 'a' && arr[num] <= 'z')
{
arr[num] = arr[num] + 32;
}
}
for (loop = 0; s[loop] != '\0'; loop++)
{
if (arr[num] == s[loop])
{
num++;
arr[num] = arr[num] + 32;
}
}
}
return (arr);
}
