#include <stdio.h>
/**
 * main - runs
 * @argc: length of the array
 * @argv: actual product inside the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num = 0;
while (num < argc)
{
printf("%s\n", argv[num]);
num++;
}
return (0);
}
