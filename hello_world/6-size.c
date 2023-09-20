#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled
 * and run on
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %lu byts(s)\n", sizeof(char));
printf("Size of an int: %lu byts(s)\n", sizeof(int));
printf("Size of a long int: %lu byts(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byts(s)\n", sizeof(long long int));
printf("Size of a float: %lu byts(s)\n", sizeof(float));
return (0);
}
