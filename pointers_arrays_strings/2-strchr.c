#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a char within a string
 * @s: pointer to array where we are checking
 * @c: the char we are looking for
 */
char *_strchr(char *s, char c)
{
int num;
char *ans;
for (num = 0; s[num] != '\0'; num++)
{
if (s[num] == c)
{
ans = &s[num];
}
}
if (ans[0] == c)
{
return (ans);
}
else
{
return (NULL);
}
}
