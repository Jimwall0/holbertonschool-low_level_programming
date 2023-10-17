#include <stdio.h>
/**
 * main - runs the program
 * @argc: length of the command
 * @argv: array for command
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num = 0;
(void) argv;
while (num < argc - 1)
{
num++;
}
printf("%i\n", num);
return (0);
}
