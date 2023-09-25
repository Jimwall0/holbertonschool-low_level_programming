#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Will run the if function
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf(n, " is negative");
}
else if (n > 0)
{
printf(n, " is positive");
}
else
{
printf(n, " is zero");
}
return (0);
}
